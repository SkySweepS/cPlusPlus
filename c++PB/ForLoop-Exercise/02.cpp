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

  int n;
  cin >> n;

  int sum = 0;

  int max = INT_MIN;
int n1;
int check;
  for(int i = 0; i < n; i++){
    
    cin >> n1;
    sum += n1;

    if(n1 > max){
     max = n1;
    }

    
  }
  
  check = sum - max;
  int diff = max - check;

  if(check == max){
    cout << "Yes" << endl;
    cout << "Sum = " << check;
  }
  else{
    cout << "No" << endl;
    cout << "Diff = " << abs(diff) << endl;
  }







  return 0;
}

    

    