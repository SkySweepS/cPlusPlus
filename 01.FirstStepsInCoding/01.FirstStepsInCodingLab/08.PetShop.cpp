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

  const double DOG_FOOD = 2.50;
  const double CAT_FOOD = 4.00;


  int dogFood;
  cin >> dogFood;
  int catFood;
  cin >> catFood;

  double result = dogFood * DOG_FOOD + catFood * CAT_FOOD;

  cout << result << " lv." << endl;

  return 0;

}

    

    
