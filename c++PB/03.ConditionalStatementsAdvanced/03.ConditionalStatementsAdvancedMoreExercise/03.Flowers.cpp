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
 
  int hrizantemi;
  cin >> hrizantemi;
  int roses;
  cin >> roses;
  int lale;
  cin >> lale;
  string season;
  cin >> season;
  char holiday;
  cin >> holiday;
  double hrizPrice = 0;
  double rosePrice = 0;
  double lalePrice = 0;
  if(season == "Spring" || season == "Summer"){
    hrizPrice = hrizantemi * 2.00;
    rosePrice = roses * 4.10;
    lalePrice = lale * 2.50;
  }
  else if(season == "Autumn" || season == "Winter"){
    hrizPrice = hrizantemi * 3.75;
    rosePrice = roses * 4.50;
    lalePrice = lale * 4.15;
  }
  double total = hrizPrice + rosePrice + lalePrice;
  
  if(holiday == 'Y'){
    total *= 1.15;
  }
  if(season == "Spring" && lale >= 7){
    total *=0.95;
  }
  if(season == "Winter" && roses >= 10){
    total *= 0.90;
  }
  if((roses + hrizantemi + lale) >= 20){
    total *= 0.80;
  }

  total += 2; // assemble tax;
cout.setf(ios::fixed);
cout.precision(2);
  cout << total;

    return 0;
}
