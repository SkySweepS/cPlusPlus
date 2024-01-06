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

  double p1 = 0;
  double p2 = 0;
  double p3 = 0;
  double p4 = 0;
  double p5 = 0;
  
  int n;
  cin >> n;
  
  for(int i = 1; i <= n; i++){
    int n1;
    cin >> n1;
    if(n1 < 200){
      p1++;
    }
    if(n1 >= 200 && n1 < 400){
      p2++;
    }
    if(n1 >= 400 && n1 < 600){
      p3++;
    }
    if(n1 >= 600 && n1 < 800){
      p4++;
    }
    if(n1 >= 800){
      p5++;
    }
    
  }

  double per1 = p1 / n * 100;
  double per2 = p2 / n * 100;
  double per3 = p3 / n * 100;
  double per4 = p4 / n * 100;
  double per5 = p5 / n * 100;

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << per1 << "%" << endl;
  cout << per2 << "%" << endl;
  cout << per3 << "%" << endl;
  cout << per4 << "%" << endl;
  cout << per5 << "%" << endl;



  return 0;
}

    

    