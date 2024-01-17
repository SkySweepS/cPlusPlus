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
  const double VIP = 499.99;
  const double NORMAL = 249.99;

  double budget;
  cin >> budget;
  string category;
  cin >> category;
  int people;
  cin >> people;

  double total = 0;
  double ticket = 0;
  if(people >= 1 && people <= 4){
    total = budget * 0.25;
  }
  else if(people >= 5 && people <= 9){
   total = budget * 0.4;
  }
  else if(people >= 10 && people <= 24){
    total = budget * 0.5;
  }
  else if(people >= 25 && people <= 49){
    total = budget * 0.6;
  }
  else if (people >= 50){
    total = budget * 0.75;
  }
  if(category == "Normal"){
    ticket = NORMAL;
  }
  else if(category == "VIP"){
    ticket = VIP;
  }

  ticket *= people;
  
  cout.setf(ios::fixed);
  cout.precision(2);
  if(total >= ticket){
    cout << "Yes! You have " << total - ticket << " leva left." << endl;
  }
  else{
    cout << "Not enough money! You need " << ticket - total << " leva.";
  }

    return 0;
}
