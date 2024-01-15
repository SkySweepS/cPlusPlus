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

//Food Delivery


int main() {

  double chickenMenu;
  cin >> chickenMenu;
  double fishMenu;
  cin >> fishMenu;
  double vegMenu;
  cin >> vegMenu;

  double chickenPrice = chickenMenu * 10.35;
  double fishPrice = fishMenu * 12.40;
  double vegPrice = vegMenu * 8.15;

  double totalPriceMenu = chickenPrice + fishPrice + vegPrice;

  double desertPrice = totalPriceMenu * 0.20;

  cout << totalPriceMenu + desertPrice + 2.50 << endl;



  return 0;
}

    

    

  
