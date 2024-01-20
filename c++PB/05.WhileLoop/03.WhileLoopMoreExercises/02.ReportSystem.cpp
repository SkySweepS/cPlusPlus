#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>
#include <math.h>

using namespace std;

int main () {
 
  int total;
  cin >> total;

  string donation;
  double cs = 0;
  double cc = 0;
  double csCount = 0;
  double ccCount = 0;
  int i = 0;

  cout.setf(ios::fixed);
  cout.precision(2);
  while(1){
    i++;
    cin >> donation;
    if(donation == "End"){
      if(total > 0){
      cout << "Failed to collect required money for charity." << endl;
      break;
      }
      else {
        cout << "Average CS: " << cs / csCount << endl;
        cout << "Average CC: " << cc / ccCount << endl;
        break;
      }
    }
    if(i % 2 == 1 && stoi(donation) <= 100){
      csCount++;
      cs += stoi(donation);
      total -= stoi(donation);
      cout << "Product sold!" << endl;
    }
    else if(i % 2 == 0 && stoi(donation) >= 10){
      ccCount++;
      cc += stoi(donation);
      total -= stoi(donation);
      cout << "Product sold!" << endl;
    }
    else if(i % 2 == 1 && stoi(donation)  > 100){
      cout << "Error in transaction!" << endl;
    }
    else if(i % 2 == 0 && stoi(donation)  < 10){
      cout << "Error in transaction!" << endl;
    }
    if(total <= 0){
      if(i == 1 && total < 0){
        cout << "Average CS: " << cs / csCount << endl;
        cout << "Average CC: " << 0.0 << endl;
        break;
      }
      else{
      cout << "Average CS: " << cs / csCount << endl;
      cout << "Average CC: " << cc / ccCount << endl;
      break;
      }

    }
  }
   
  
    return 0;
}
