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

  string playerName;
  getline(cin, playerName);

  string multiply;
  int totalPoints = 301;
  int points;
  int count = 0;
  int count2 = 0;

  int pointsCount = 0;

  while(totalPoints != 0){
    cin >> multiply;
    if(multiply == "Retire"){
      break;
    }
    cin >> points;
    
    if(multiply == "Single"){
    totalPoints -= points;
    pointsCount = points;
    }
    else if(multiply == "Double"){
      totalPoints -= points * 2;
      pointsCount = points * 2;
    }
    else if(multiply == "Triple"){
      totalPoints -= points * 3;
      pointsCount = points * 3;
    }
    if(totalPoints >= 0){
      pointsCount = 0;
      count++;
    }
    if(totalPoints < 0){
      totalPoints += pointsCount;
      count2++;
    }
    
  }

  if(totalPoints == 0){
    cout << playerName << " won the leg with " << count << " shots." << endl;
  }
  else{
    cout << playerName << " retired after " << count2 << " unsuccessful shots." << endl;
  }

  return 0;
}

    

    

  
