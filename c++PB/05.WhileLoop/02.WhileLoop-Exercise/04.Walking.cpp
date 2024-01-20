#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>
using namespace std;


int main() {

  int stepsLimit = 10000;

  string input;

  getline(cin, input);

  int steps = 0;

  while (input != "Going home"){
    


    steps += stoi(input);
    if (steps >= stepsLimit) {
      break;
    }


    getline(cin, input);

    
  }

  if (input == "Going home"){
    string stepsToHome;
    getline(cin, stepsToHome);
    steps += stoi(stepsToHome);
  }

  if (steps >= stepsLimit){
    cout << "Goal reached! Good job!\n";
  }
  else {
    cout << stepsLimit - steps << " more steps to reach goal.\n";
  }
  




  return 0;
}

