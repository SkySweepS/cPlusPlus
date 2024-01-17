#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <algorithm>



using namespace std;

int main() {
	const double PI = 3.14159265359;
  string s;
  cin >> s;
 
  double l = 0;
  cout.setf(ios::fixed);
  cout.precision(3);
  
  if(s == "square"){
    double a;
    cin >> a;
    l = a * a;
  }
  else if(s == "rectangle"){
    double a;
    cin >> a;
    double b;
    cin >> b;
    l = a * b;
  }
  else if(s == "circle"){
    double r;
    cin >> r;
    l = PI * r * r;
  }
  else if(s == "triangle"){
    double a;
    cin >> a;
    double h;
    cin >> h;
    l = a * h / 2;
  }
  cout << l;

	
    return 0;
  }
