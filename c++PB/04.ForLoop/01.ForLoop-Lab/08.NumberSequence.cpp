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

int main () {
	

  int n;
  cin >> n;
  int max = INT_MIN;
  int min = INT_MAX;
  
  
  
  for(int i = 1; i<=n; i++){
  	int n1;
	  cin >> n1;
	  
	  if(n1 < min){
	  	min = n1;
	  }
	  if(n1 > max){
	  	max = n1;
	  }
  }
cout << "Max number: " << max << endl;
cout << "Min number: " << min;
    
    return 0;
} 
