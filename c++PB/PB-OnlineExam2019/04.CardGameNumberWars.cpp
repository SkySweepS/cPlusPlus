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

  string player1Name;
  cin >> player1Name;
  string player2Name;
  cin >> player2Name;

  string endGame = " ";
  string card = " ";

  double player1Points = 0;
  double player2Points = 0;

  while(true){
    
    getline(cin >> ws, endGame);
    
    if(endGame == "End of game" || card == "End of game"){
      cout << player1Name << " has " << player1Points << " points" << endl;
      cout << player2Name << " has " << player2Points << " points" << endl;
      break;

    }
    getline(cin >> ws, card);
    if(stoi(endGame) > stoi(card)){
      player1Points += stoi(endGame) - stoi(card);

    }
    else if(stoi(endGame) < stoi(card)){
      player2Points += stoi(card) - stoi(endGame);
    }
    else if(stoi(endGame) == stoi(card)){
      getline(cin, endGame);
      getline(cin, card);
      if(stoi(endGame) > stoi(card)){
        cout << "Number wars!" << endl;
        cout << player1Name << " is winner with " << player1Points << " points" << endl;
        
      }
      else if(stoi(endGame) < stoi(card)){
        cout << "Number wars!" << endl;
        cout << player2Name << " is winner with " << player2Points << " points" << endl;
        
      }
      break;
      }

    }

  return 0;

}

  
    

    