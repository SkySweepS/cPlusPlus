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

//Deposit Calculator


int main() {

  double deposit;
  cin >> deposit;
  int months;
  cin >> months;
  double glp;
  cin >> glp;

  double interest = deposit * (glp / 100);
  double monthlyInterest = interest / 12;
  double total = deposit + months * monthlyInterest;
  
  
  cout.setf(ios::fixed);
  cout.precision(2);

  cout << total << endl;
  

  return 0;
}

    

    

  
