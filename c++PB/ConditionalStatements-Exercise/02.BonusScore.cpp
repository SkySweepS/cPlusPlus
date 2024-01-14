#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <algorithm>
using namespace std;


double bonus(int num){
  double bonus = 0;
  
  if(num <= 100){
    bonus = 5;
    if(num % 2 == 0){
      bonus += 1;
    }
    else if (num % 5 == 0){
      bonus += 2;
    }
  }
  else if(num <= 1000){
    bonus = num * 0.2;
    if(num % 2 == 0){
      bonus += 1;
    }
    else if (num % 5 == 0){
      bonus += 2;
    }
  }
  else {
    bonus = num * 0.1;
    if(num % 2 == 0){
      bonus += 1;
    }
    else if (num % 5 == 0){
      bonus += 2;
    }
  }
  
  return bonus;
  
}


int main() {
	
  int num;
  cin >> num;
  
  bonus(num);

	double total = num + bonus(num);

  cout << bonus(num) << endl;
  cout << total << endl;
    return 0;
  }
