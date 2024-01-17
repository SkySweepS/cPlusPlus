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

  int currentSum = 0;
  int previousSum = 0;
  int difference = 0;

  for(int i = 1; i <= n; i++){
    previousSum = currentSum;
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;

    currentSum = n1 + n2;
    if(currentSum != previousSum){
      difference = abs(currentSum - previousSum);
    }

    

  
  }

 
  if(currentSum == previousSum || n == 1){
    cout << "Yes, value=" << currentSum << endl;
  }
  
  else{
    cout << "No, maxdiff=" << difference << endl;
  }
  
  
    return 0;
}