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

    double money;
    string destination;
    string place;

    cout.setf (ios::fixed);
    cout.precision(2);

    if (budget <= 1000 && season == "Summer") {
       money = budget * 0.65;
       destination = "Alaska";
       place = "Camp";
    }
    else if (budget <= 1000 && season == "Winter") {
        money = budget * 0.45;
        destination = "Morocco";
        place = "Camp";
    }
    else if (budget <= 3000 && season == "Summer") {
        money = budget * 0.8;
        destination = "Alaska";
        place = "Hut";
    }
    else if (budget <= 3000 && season == "Winter") {
        money = budget * 0.6;
        destination = "Morocco";
        place = "Hut";
    }
    else if (budget > 3000) {
      if (season == "Summer"){
        destination = "Alaska";
      }
      else{
        destination = "Morocco";

      }
        money = budget * 0.9;
        
        place = "Hotel";
    }
    else{
        cout << "Error";
    }
    cout <<  destination << " - " << place << " - " << money << "\n";


  
  
    return 0;
}
