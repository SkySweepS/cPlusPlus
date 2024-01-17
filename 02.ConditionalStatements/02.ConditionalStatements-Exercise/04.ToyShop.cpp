#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <algorithm>
using namespace std;




int main() {

  double tripPrice;
  cin >> tripPrice;
  double nOfPuzzles;
  cin >> nOfPuzzles;
  double nOfTalkingDolls;
  cin >> nOfTalkingDolls;
  double nOfTeddyBears;
  cin >> nOfTeddyBears;
  double nOfMinions;
  cin>> nOfMinions;
  double nOfTrucks;
  cin >> nOfTrucks;

  double puzzleRevenue = nOfPuzzles * 2.60; // price
  double talkingDollRevenue = nOfTalkingDolls * 3.00;
  double teddyBearRevenue = nOfTeddyBears * 4.10;
  double minionRevenue = nOfMinions * 8.20;
  double truckRevenue = nOfTrucks * 2.00;

  double total = puzzleRevenue + talkingDollRevenue + teddyBearRevenue + truckRevenue + minionRevenue;

  
  double totalN = nOfMinions + nOfPuzzles + nOfTalkingDolls + nOfTeddyBears + nOfTrucks;
  
  if(totalN >= 50){
   total *= 0.75;
  }
  total *= 0.9;
 
  cout.setf(ios::fixed);
  cout.precision(2);


  if(tripPrice <= total){
    cout << "Yes! " << total - tripPrice << " lv left." << endl;
  }
  else{
    cout << "Not enough money! " << abs(total - tripPrice) << " lv needed." << endl;
  }

  

  return 0;
}
