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
 
  int stadiumCapacity;
  cin >> stadiumCapacity;
  double nOfFans;
  cin >> nOfFans;

  double a = 0;
  double b = 0;
  double v = 0;
  double g = 0;

  for(int i = 1; i <= nOfFans; i++){
    char sector;
    cin >> sector;

    if(sector == 'A'){
      a++;
    }
    else if(sector == 'B'){
      b++;
    }
    else if(sector == 'V'){
      v++;
    }
    else if(sector == 'G'){
      g++;
    }

  }
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << a / nOfFans * 100.00 << "%" << endl;
  cout << b / nOfFans * 100 << "%" << endl;
  cout << v / nOfFans * 100 << "%" << endl;
  cout << g / nOfFans * 100 << "%" << endl;
  cout << 1.0 * (nOfFans / stadiumCapacity * 100) << "%" << endl;
  
    return 0;
}