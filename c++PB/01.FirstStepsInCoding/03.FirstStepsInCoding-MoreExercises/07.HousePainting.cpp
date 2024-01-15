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

  double x;
  cin >> x;
  double y;
  cin >> y;
  double h;
  cin >> h;

  double doorSize = 1.2 * 2;
  double windowSize = (1.5 * 1.5) * 2;
  double wallSize1 = (x * x) * 2;
  double wallSize2 = (x * y) * 2;
  double roof1 = (x * y) * 2;
  double roof2 = (x * h / 2) * 2;

  double paintWalls = ((wallSize1 + wallSize2) - (doorSize + windowSize)) / 3.4;
  double paintRoof = (roof1 + roof2) / 4.3;
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << paintWalls << endl;
  cout << paintRoof << endl;


  return 0;

}

    

    