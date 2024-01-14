#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <sstream>



using namespace std;

//Basketball Equipment


int main() {

  double controlMins;
  cin>> controlMins;
  double controlSec;
  cin >> controlSec;
  double trackSize;
  cin >> trackSize;
  double secFor100M;
  cin >> secFor100M;

  double controlMinToSec = controlMins * 60 + controlSec;

  double delay = trackSize / 120; 

  double totalDelay = delay * 2.5;

  double totalTime = ((trackSize / 100) * secFor100M) - totalDelay;

  cout.setf(ios::fixed);
  cout.precision(3);

 

  if(totalTime <= controlMinToSec){
    cout << "Marin Bangiev won an Olympic quota!" << endl;
    cout << "His time is " << totalTime << "." << endl;
  }
  else{
    cout << "No, Marin failed! He was " << totalTime - controlMinToSec << " second slower." << endl;
  }



  return 0;
}

    

    

  
