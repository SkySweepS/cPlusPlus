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
 
  string season;
  cin >> season;
  double km;
  cin >> km;
  double money = 0;

  if(season == "Spring" || season == "Autumn"){
    if (km <= 5000){
      money = km * 0.75;
    }
    else if(km <= 10000){
      money = km * 0.95;
    }
    else if(km <= 20000){
      money = km * 1.45;
    }
  }
  else if(season == "Summer"){
    if (km <= 5000){
      money = km * 0.90;
    }
    else if(km <= 10000){
      money = km * 1.1;
    }
    else if(km <= 20000){
      money = km * 1.45;
    }
  }
  else if(season == "Winter"){
    if (km <= 5000){
      money = km * 1.05;
    }
    else if(km <= 10000){
      money = km * 1.25;
    }
    else if(km <= 20000){
      money = km * 1.45;
    }
  }

  double total = money * 0.90;
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << total * 4 << endl;

  
  
    return 0;
}
