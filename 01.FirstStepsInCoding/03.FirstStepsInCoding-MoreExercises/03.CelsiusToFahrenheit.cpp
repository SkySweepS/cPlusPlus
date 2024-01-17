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

 double degrece(double c){
  double f = c * 9/5 + 32;
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << f << endl;
    return c;
 }

int main() {

  double c;
  cin >> c;
  degrece(c);

  return 0;

}

  
    

    
