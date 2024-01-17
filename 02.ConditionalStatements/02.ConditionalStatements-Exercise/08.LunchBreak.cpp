#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <algorithm>
#include<math.h>
using namespace std;




int main() {

  string movieName;
  getline(cin, movieName);
  int episode;
  cin >> episode;
  int breakTime;
  cin >> breakTime;

  double lunchTime = breakTime / 8.0;
  double restTime = breakTime / 4.0;
  
  double timeLeft = breakTime - lunchTime - restTime;

  if(timeLeft >= episode){
    cout << "You have enough time to watch " << movieName << " and left with " << ceil(timeLeft - episode) << " minutes free time." << endl;
  }
  else{
    cout << "You don't have enough time to watch " << movieName << ", you need " << ceil(episode - timeLeft) << " more minutes." << endl;
  }

  return 0;
}