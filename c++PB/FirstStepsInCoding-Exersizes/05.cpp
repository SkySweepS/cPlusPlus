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

//Supplies for School


int main() {

  double penPacket;
  cin >> penPacket;
  double markers;
  cin >> markers;
  double liters;
  cin >> liters;
  double discount;
  cin >> discount;

  double penPrice = penPacket * 5.80;
  double markerPrice = markers * 7.20;
  double preparat = liters * 1.20;

  double total = penPrice + markerPrice + preparat;
  double discountPercent = discount / 100;

  double totalPrice = total - (total * discountPercent);

  cout << totalPrice << endl;


  return 0;
}

    

    

  
