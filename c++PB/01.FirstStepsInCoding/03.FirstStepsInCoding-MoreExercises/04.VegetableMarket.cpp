#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <cstring>


using namespace std;

 double bnb(double lv){
  const double lev = 1.94;
  double euro = lv / lev;
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << euro << endl;
  return euro;
  
 }
 double harvest(double vP, double fP, double vK, double fK){

  double vegeTotal = vP * vK;
  double fruitTotal = fP * fK;

  double total = vegeTotal + fruitTotal;

  
  return total;
 }


int main() {

  double vegePrice;
  cin >> vegePrice;
  double fruitPrice;
  cin >> fruitPrice;
  double totalVegeKg;
  cin >> totalVegeKg;
  double totalFruitKg;
  cin >> totalFruitKg;

  bnb(harvest(vegePrice, fruitPrice, totalVegeKg, totalFruitKg));

  return 0;

}

  
    

    