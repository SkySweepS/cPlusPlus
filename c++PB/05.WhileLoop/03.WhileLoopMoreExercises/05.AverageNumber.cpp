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
 
 int n;
 cin >> n;
  double num = 0;
  double total = 0;
 for(int i = 1; i <= n; i++){
  cin >> num;
  total += num;
 }
cout.setf(ios::fixed);
cout.precision(2);
 cout << total / n;

  
    return 0;
}
