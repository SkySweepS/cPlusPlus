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

int main() {
	
  int password;
  cin >> password;

  if(password < 100 ){
    cout << "Less than 100" << endl;
  }
  else if( password >= 100 && password <= 200){
    cout << "Between 100 and 200";
  }
  else {
    cout << "Greater than 200";
  }
	
    return 0;
  }
