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
 
  double change = 0.0;
  cin >> change;
  int changeS = change * 100;
  int coin = 0;


  while(change != 0){

    if(changeS - 200 >= 0){
      coin++;
      changeS -= 200;
    }
    else if(changeS - 100 >= 0 ){
      coin++;
      changeS -= 100;
    }
    else if(changeS - 50 >= 0){
      coin++;
      changeS -= 50;
    }
    else if(changeS - 20 >= 0 ){
      coin++;
      changeS -= 20;
    }
    else if(changeS - 10 >= 0 ){
      coin++;
      changeS -= 10;
    }
    else if(changeS - 5 >= 0){
      coin++;
      changeS -= 5;
    }
    else if(changeS - 2 >= 0 ){
      coin++;
      changeS -= 2;
    }
    else if(changeS - 1 >= 0 ){
      coin++;
      changeS -= 1;
    }
    
    if(change < 0){
      break;
    }
    if(changeS == 0 ){
      break;
    }
  }

cout << coin << endl;



    return 0;
}
