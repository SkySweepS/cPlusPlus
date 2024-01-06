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

 string result1;
 cin >> result1;
 string result2;
 cin >> result2;
 string result3;
 cin >> result3;

 int win = 0;
 int draw = 0;
 int lose = 0;


  int firstDigit1 = result1[0];
  int secondDigit1 = result1[2];
  if(firstDigit1 > secondDigit1){
    win++;
  }
  else if(firstDigit1 == secondDigit1){
    draw++;
  }
  else if(firstDigit1 < secondDigit1){
    lose++;
  }
  int firstDigit2 = result2[0];
  int secondDigit2 = result2[2];
  if(firstDigit2 > secondDigit2){
    win++;
  }
  else if(firstDigit2 == secondDigit2){
    draw++;
  }
  else if(firstDigit2 < secondDigit2){
    lose++;
  }
  int firstDigit3 = result3[0];
  int secondDigit3 = result3[2];
  if(firstDigit3 > secondDigit3){
    win++;
  }
  else if(firstDigit3 == secondDigit3){
    draw++;
  }
  else if(firstDigit3 < secondDigit3){
    lose++;
  }
  cout << "Team won " << win << " games." << endl;
  cout << "Team lost " << lose << " games." << endl;
  cout << "Drawn games: " << draw << endl;

  return 0;

}

  
    

    