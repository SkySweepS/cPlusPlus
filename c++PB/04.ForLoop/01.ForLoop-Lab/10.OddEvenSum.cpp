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

  int odd = 0;
  int even = 0;
  
  for(int i = 0; i < n; i++){
  	int num;
	  cin >> num;
  
  	if(i % 2 == 0){
	  	even += num;
	  }
	  else{
	  	odd += num;
	  }
  }
    
	if(odd == even){
		cout << "Yes" << endl;
		cout << "Sum = " << even;
	}
	else{
		cout << "No" << endl;
		cout << "Diff = " << abs(odd - even);
	}
	
	
	
	
	
    return 0;
} 
