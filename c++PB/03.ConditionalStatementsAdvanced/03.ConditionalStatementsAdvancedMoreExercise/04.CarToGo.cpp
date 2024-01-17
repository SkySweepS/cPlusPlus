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
 
  double budget;
  cin >> budget;
  string season;
  cin >> season;

  string clas = " ";
  string car = " ";
  double price = 0;
  if(budget <= 100.00){
    clas = "Economy class";
    if(season == "Summer"){
      car = "Cabrio";
      price = budget * 0.35;
    }
    else if(season == "Winter"){
      car = "Jeep";
      price = budget * 0.65;
    }

  }
  else if(budget > 100 && budget <= 500){
     clas = "Compact class";
    if(season == "Summer"){
      car = "Cabrio";
      price = budget * 0.45;
    }
    else if(season == "Winter"){
      car = "Jeep";
      price = budget * 0.80;
    }
  }
  else if(budget > 500){
    clas = "Luxury class";
    car = "Jeep";
    price = budget * 0.9;
  }
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << clas << endl;
  cout << car << " - " << price << endl;


  
    return 0;
}
