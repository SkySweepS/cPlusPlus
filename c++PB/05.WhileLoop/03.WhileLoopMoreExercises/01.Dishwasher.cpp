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
  const int BOTTLES = 750; //ml per bottle
  const int DISH = 5;  // ml to clean a Dish
  const int PAN = 15;  // ml to clean a Pan
  int bottles;
  cin >> bottles;

  double totalDomestos = bottles * BOTTLES;

  string p = " ";
  int count = 0;
  int usedMl = 0;
  int pans = 0;
  int dishes = 0;
  while(1){
    cin >> p;
    if(p == "End"){
      
      cout << "Detergent was enough!" << endl;
      cout << dishes << " dishes and " << pans << " pots were washed." << endl;
      cout << "Leftover detergent " << totalDomestos << " ml.";
      break;
    }
    ++count;
    if(count % 3 == 0){
      
      usedMl = stoi(p) * PAN;
      totalDomestos -= usedMl;
      pans += stoi(p);
     
    }
    else{
      totalDomestos -= stoi(p) * DISH;
      dishes += stoi(p);
    }
    if(totalDomestos < 0){
        cout << "Not enough detergent, " << abs(totalDomestos) << " ml. more necessary!" << endl;
        break;
      }
      
  }
   
  
    return 0;
}
