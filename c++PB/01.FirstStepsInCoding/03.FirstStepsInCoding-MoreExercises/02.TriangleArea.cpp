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


int main() {

  double b1;
  cin >> b1;
  
  double h;
  cin >> h;

  double s = b1 * h /2;

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << s << endl;

  return 0;

}

    

    
