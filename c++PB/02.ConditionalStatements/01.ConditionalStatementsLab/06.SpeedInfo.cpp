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
	
  double password;
  cin >> password;

  if(password <= 10 ){
    cout << "slow" << endl;
  }
  else if( password > 10 && password <= 50){
    cout << "average";
  }
  else if(password > 50 && password <= 150 ){
    cout << "fast";
  }
  else if(password > 150 && password <=1000){
    cout << "ultra fast";
  }
  else {
    cout << "extremely fast";
  }
	
    return 0;
  }
