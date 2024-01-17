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

  int v;
  cin >> v;
  int p1;
  cin >> p1;
  int p2;
  cin >> p2;
  double H;
  cin >> H;

  double p1Debit = H * p1;
  double p2Debit = H * p2;
  double total = p1Debit + p2Debit;
  double p1Percent = p1Debit / total * 100;
  double p2Percent = p2Debit / total * 100;
  
  double pool = total / v * 100;
  cout.setf(ios::fixed);
  cout.precision(2);
  if(total <= v){
    cout << "The pool is " << pool << "% full. Pipe 1: " << p1Percent <<  "%. Pipe 2: " << p2Percent <<  "%." << endl;
  }
  else{
    cout << "For " << H << " hours the pool overflows with " << total - v << " liters." << endl;
  }


  return 0;

}

    

    