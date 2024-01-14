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

  string nameOfTournament = " ";
  int games;

  double winCount = 0;
  double loseCount = 0;
  int gamesCount = 0;
  
  int matchesCount = 0;

  while(nameOfTournament != "End of tournaments"){
    
    getline(cin, nameOfTournament);
    if(nameOfTournament == "End of tournaments"){
      break;
    }
    cin >> games;
    gamesCount += games;
    for(int i = 1; i <= games; i++){
      int points1;
      cin >> points1;
      int points2;
      cin >> points2;
      matchesCount++;
      if(points1 > points2){
        winCount++;
        
        cout << "Game " << matchesCount << " of tournament " << nameOfTournament << ": win with " << points1 - points2 << " points." << endl;
        
      }
      else if(points2 > points1){
        loseCount++;
        cout << "Game " << matchesCount << " of tournament " << nameOfTournament << ": lost with " << points2 - points1 << " points." << endl;
        
              }
      
    }
    matchesCount = 0;
    cin.ignore();
  }

  double winPercent = winCount / gamesCount * 100;
  double losePercent = loseCount / gamesCount * 100;
  
  cout.setf(ios::fixed);
  cout.precision(2);

  cout << winPercent << "% matches win" << endl;
  cout << losePercent << "% matches lost" << endl;

  return 0;
}

    

    

  
