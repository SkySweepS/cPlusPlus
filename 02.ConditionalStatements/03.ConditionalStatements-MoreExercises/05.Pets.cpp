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
  
  int holidays;
  cin >> holidays;
  double foodKg;
  cin >> foodKg;
  double dogFood;
  cin >> dogFood;
  double catFood;
  cin >> catFood;
  double turtleFood;
  cin >> turtleFood;

  double totalEat = (dogFood * holidays) + (catFood * holidays) +((turtleFood / 1000) * holidays);

  if(totalEat <= foodKg){
    cout << floor(foodKg - totalEat) << " kilos of food left." << endl;
  }
  else{
    cout << ceil(totalEat - foodKg) << " more kilos of food are needed." << endl;
  }

    
    
    
    return 0;
}