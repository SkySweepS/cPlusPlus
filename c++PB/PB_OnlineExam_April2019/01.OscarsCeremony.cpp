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




int main() {

  int rentForSalary;
  cin >> rentForSalary;

  double statuePrice = rentForSalary * 0.7;
  double ketering = statuePrice * 0.85;
  double priceForSound = ketering / 2;
  double totalPrice = statuePrice + ketering + priceForSound + rentForSalary;

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << totalPrice << endl;
  

  return 0;
}

    

    

  
