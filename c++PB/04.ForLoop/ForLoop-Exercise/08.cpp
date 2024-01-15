#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>



using namespace std;


int main() {

  int tournaments;
  cin >> tournaments;
  int startingPoints;
  cin >> startingPoints;
  int totalPoints = 0;
  double count = 0;

  for(int i = 0; i < tournaments; i++){
    string tourPhase;
    cin >> tourPhase;
    if(tourPhase == "W"){
      totalPoints += 2000;
      count++;
    }
    if(tourPhase == "F"){
      totalPoints += 1200;
    }
    if(tourPhase == "SF"){
      totalPoints += 720;
    }
  }
  
  double averagePoints = totalPoints / tournaments;
  double percent = count / tournaments * 100;

  

  cout << "Final points: " << totalPoints + startingPoints << endl;
  cout << "Average points: " << averagePoints << endl;
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << percent << "%" << endl;

  return 0;
}

    

    