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

  string destination = " ";
  double moneySpend = 0;
  string type = " ";

  if(budget <= 100){
    destination = "Bulgaria";
    if(season == "summer"){
      type = "Camp";
      moneySpend = budget * 0.30;
    }
    else if(season == "winter"){
      type = "Hotel";
      moneySpend = budget * 0.70;
    }
  }
  else if(budget <= 1000){
    destination = "Balkans";
    if(season == "summer"){
      type = "Camp";
    moneySpend = budget * 0.40;
    }
    else if(season == "winter"){
      type = "Hotel";
      moneySpend = budget * 0.80;
    }
  }
  else{
    type = "Hotel";
    destination = "Europe";

    moneySpend = budget * 0.90;

  }

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << "Somewhere in " << destination << endl;
  cout << type << " - " << moneySpend << endl;


  return 0;
}

    

    

  
