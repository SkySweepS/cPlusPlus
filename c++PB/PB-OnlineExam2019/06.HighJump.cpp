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

  int wantedJumpHigh;
  cin >> wantedJumpHigh;
  double wantedJump = wantedJumpHigh - 30;
  int jumpHigh;

int count = 0;
int count2 = 0;

  while(true){
    if(count2 == 3){
      cout << "Tihomir failed at " << wantedJump << "cm after " << count << " jumps." << endl;
          break;
        }
        else if(jumpHigh > wantedJumpHigh && wantedJump > wantedJumpHigh){
      cout << "Tihomir succeeded, he jumped over " << wantedJumpHigh << "cm after " << count << " jumps." << endl;
      break;
    }
    cin >> jumpHigh;
    count++;

    if(jumpHigh <= wantedJump){

      count2++;

    }
    
    else if(jumpHigh > wantedJump){
    
    wantedJump += 5;
    count2 = 0;
    }
   if(jumpHigh < 100 || jumpHigh > 300){
    break;
   }
  
    
  }




  return 0;

}

  
    

    