#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>



using namespace std;


int main() {

  int currentAge;
  cin >> currentAge;
  double wmPrice;
  cin >> wmPrice;
  double toyPrice;
  cin >> toyPrice;
  int toys = 0;
  double money = 0;
double money2 = 10;


  for(int i = 1; i <= currentAge; i++){
    if(i % 2 == 0){
      
      money += money2 - 1;
      money2 += 10;
    }
    else{
      toys++;
    }
    
  }
  double toysEarn = toys * toyPrice;
  double savings = money + toysEarn;

  double total = savings - wmPrice;

  cout.setf(ios::fixed);
  cout.precision(2);

  if(savings >= wmPrice){
    cout << "Yes! " << total << endl;
  }
  else {
    cout << "No! " << abs(total) << endl;
  }




  return 0;
}

    

    