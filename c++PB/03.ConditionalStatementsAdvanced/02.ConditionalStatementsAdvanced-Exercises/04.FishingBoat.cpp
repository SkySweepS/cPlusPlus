#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <sstream>



using namespace std;

//Fishing Boat


int main() {

  double budget;
  cin >> budget;
  string season;
  cin >> season;
  int fisherman;
  cin >> fisherman;

  double boatPrice = 0;

  double discount = 0;

  double totalPrice = 0;

  if(season == "Spring"){
    boatPrice = 3000.00;
  }
  else if(season == "Summer"){
    boatPrice = 4200.00;

  }
  else if(season == "Autumn"){
    boatPrice = 4200.00;
  }
  else if(season == "Winter"){
    boatPrice = 2600.00;
  }

  if(fisherman <= 6){
    discount = boatPrice * 0.10;
  }
  else if(fisherman <= 11 && fisherman > 6){
    discount = boatPrice * 0.15;
  }
  else if(fisherman >= 12){
    discount = boatPrice * 0.25;
  }

double total = boatPrice - discount;

if(fisherman % 2 == 0 && season != "Autumn"){

  totalPrice = total - (total * 0.05);

}
else{
  totalPrice = total;
}

cout.setf(ios::fixed);
cout.precision(2);
if(budget < totalPrice){
  cout << "Not enough money! You need " << totalPrice - budget << " leva." << endl;
}
else {
  cout << "Yes! You have " << budget - totalPrice << " leva left." << endl;
}


  return 0;
}

    

    

  
