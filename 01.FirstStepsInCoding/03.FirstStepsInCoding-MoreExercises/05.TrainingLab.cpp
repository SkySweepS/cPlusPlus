#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <cstring>


using namespace std;

double mToCm(double m){
  double result = m * 100;
  return result;
}



int main() {

  double w;
  cin >> w;
  double h;
  cin >> h;
 
  double wCm = mToCm(h);
  double hCm = mToCm(w);

  double wFreeSpace = wCm - 100;
  
  double desksPerW = wFreeSpace / 70;

  double rows = hCm / 120;
  


  double numberOfDesks = floor(desksPerW) * floor(rows) - 3;

  cout << numberOfDesks << endl;

  return 0;

}

  
    

    