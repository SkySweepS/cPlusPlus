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

  double r;
  cin >> r;

  const double PI = 3.14159265359;

  double area = PI * (r * r);
  double p = PI * (r + r);
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << area << endl << p << endl;


  return 0;

}

    

    