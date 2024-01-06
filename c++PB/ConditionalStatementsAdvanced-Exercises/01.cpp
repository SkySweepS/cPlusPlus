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

//Cinema


int main() {

  string type;
  cin >> type;
  double row;
  cin >> row;
  double columns;
  cin >> columns;

  double space = row * columns;
  double total = 0;
  if(type == "Premiere"){
     double ticketPrice = 12.00;
     total = ticketPrice * space;
  }
  else if (type == "Normal"){
    total = 7.50 * space;
  }
  else if(type == "Discount"){
    total = 5.00 * space;
  }

  cout.setf(ios::fixed);
  cout.precision(2);
cout << total << " leva" << endl;
  return 0;
}

    

    

  
