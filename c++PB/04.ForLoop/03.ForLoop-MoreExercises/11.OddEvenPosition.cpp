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
 
int n;
cin >> n;

double oddSum = 0;
double evenSum = 0;
double evenMax = -10000.00;
double evenMin = 10000.00;
double oddMax = -10000.00;
double oddMin = 10000.00;

for(int i = 1; i <= n; i++){
  double n1;
    cin >> n1;
  if(i % 2 == 1){
    oddSum += n1;
    if(n1 > oddMax){
      oddMax = n1;
    }
    if(n1 < oddMin){
      oddMin = n1;
    }
   
  }
  else{
    evenSum += n1;
    if(n1 > evenMax){
      evenMax = n1;
    }
    if(n1 < evenMin){
      evenMin = n1;
    }
  }
}

cout.setf(ios::fixed);
cout.precision(2);
if(n == 0){
  cout << "OddSum=" << oddSum << "," << endl;
  cout << "OddMin=" << "No" << "," << endl;
  cout << "OddMax=" << "No" << "," << endl;
  cout << "EvenSum=" << evenSum << "," << endl;
  cout << "EvenMin=" << "No" << "," << endl;
  cout << "EvenMax=" << "No" << endl;
}
else if(n == 1){
  cout << "OddSum=" << oddSum << "," << endl;
  cout << "OddMin=" << oddMin << "," << endl;
  cout << "OddMax=" << oddMax << "," << endl;
  cout << "EvenSum=" << evenSum << "," << endl;
  cout << "EvenMin=" << "No" << "," << endl;
  cout << "EvenMax=" << "No" << endl;
}
else{
cout << "OddSum=" << oddSum << "," << endl;
cout << "OddMin=" << oddMin << "," << endl;
cout << "OddMax=" << oddMax << "," << endl;
cout << "EvenSum=" << evenSum << "," << endl;
cout << "EvenMin=" << evenMin << "," << endl;
cout << "EvenMax=" << evenMax << endl;
}
  
    return 0;
}