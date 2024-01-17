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


int main() {

  const double pricePerM = 7.61;
  const double discountPercent = 0.18;

  double grassMeters;
  cin >> grassMeters;

  double totalPrice = pricePerM * grassMeters;
  double discount = discountPercent * totalPrice;

  cout << "The final price is: " << totalPrice - discount << " lv." << endl;
  cout << "The discount is: " << discount << " lv." << endl;


  return 0;

}

    

    
