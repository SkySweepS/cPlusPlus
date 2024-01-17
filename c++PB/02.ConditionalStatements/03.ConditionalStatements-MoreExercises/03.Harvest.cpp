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
  
  int x;
  cin >> x;
  double y;
  cin >> y;
  int z;
  cin >> z;
  int workers;
  cin >> workers;

  double forWine = x * 0.4;
  double wine =  (forWine * y) / 2.5;
  double total = abs(wine - z);
  double lpp = 0;
  
  if (wine >= z){
    
    lpp = total / workers;
    cout << "Good harvest this year! Total wine: " << wine << " liters." << endl;
    cout << ceil(total) << " liters left -> " << ceil(lpp) << " liters per person." << endl;
  }
  else {
    
    cout << "It will be a tough winter! More " <<  floor(total) << " liters wine needed.";
  }



    
    
    
    return 0;
}