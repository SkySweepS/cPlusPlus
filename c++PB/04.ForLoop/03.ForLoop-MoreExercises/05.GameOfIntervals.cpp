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
 
  int games;
  cin >> games;
  double points = 0;
  double count1 = 0;
  double count2 = 0;
  double count3 = 0;
  double count4 = 0;
  double count5 = 0;
  double count6 = 0;
  for(int i = 1; i <= games; i++){
    double gameRound;
    cin >> gameRound;
     
    
   
    if(gameRound >= 0 && gameRound <= 9){
      points += gameRound * 0.2;
      count1++;
    }
    else if(gameRound >= 10 && gameRound <= 19){
      points += gameRound * 0.3;
      count2++;
    }
    else if(gameRound >= 20 && gameRound <= 29){
      points += gameRound * 0.4;
      count3++;
    }
    else if(gameRound >= 30 && gameRound <= 39){
      points += 50;
      count4++;
    }
    else if(gameRound >= 40 && gameRound <= 50){
      points += 100;
      count5++;
    }
    else{
      
      points /= 2;
      count6++;
    }
   
  }
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << points << endl;
  cout << "From 0 to 9: " << count1 / games * 100 << "%" << endl;
  cout << "From 10 to 19: " << count2 / games * 100 << "%" << endl;
  cout << "From 20 to 29: " << count3 / games * 100 << "%" << endl;
  cout << "From 30 to 39: " << count4 / games * 100 << "%" << endl;
  cout << "From 40 to 50: " << count5 / games * 100 << "%" << endl;
  cout << "Invalid numbers: " << count6 / games * 100 << "%" << endl;
  
  
    return 0;
}