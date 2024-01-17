#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>
#include <math.h>

using namespace std;

int main () {
 
  double x1;
  cin >> x1;
  
  double y1;
  cin >> y1;
  double x2;
  cin >> x2;
  double y2;
  cin >> y2;
  double x;
  cin >> x;
  double y;
  cin >> y;

  if((x < x2 && x > x1) && (y < y2 && y > y1)){
    cout << "Inside / Outside";
  }
  else if((x <= x2 && x >= x1) && (y <= y2 && y >= y1)){
    cout << "Border" << endl;
  }
  else{
    cout << "Inside / Outside";
  }

  
  
    return 0;
}
