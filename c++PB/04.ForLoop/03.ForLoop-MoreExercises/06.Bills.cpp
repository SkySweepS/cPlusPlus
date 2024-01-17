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
 
  int months;
  cin >> months;

  const double waterBill = 20.00;
  const double internetBill = 15.00;
  double otherBills = 0;
  double electricity = 0;
  double water = 0;
  double internet = 0;
  double other = 0;

  for(int i = 1; i <= months; i++){
    double electricityBill;
    cin >> electricityBill;

    electricity += electricityBill;
    water += waterBill;
    internet += internetBill;
    other += (waterBill + internetBill + electricityBill) * 1.2;


  }
  double average = (electricity + water + internet + other) / months;

  cout.setf(ios::fixed);
  cout.precision(2);
  cout << "Electricity: " << electricity << " lv" << endl;
  cout << "Water: " << water << " lv" << endl;
  cout << "Internet: " << internet << " lv" << endl;
  cout << "Other: " << other << " lv" << endl;
  cout << "Average: " << average << " lv" << endl;
  
    return 0;
}