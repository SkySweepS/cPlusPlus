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

  int holidays;
  cin >> holidays;

  int workDays = 365 - holidays;

  int playTimeMin = workDays * 63 + (holidays * 127);

  int difference = abs(30000 - playTimeMin);

 
  int h = difference / 60;
  int min = difference % 60;
if(playTimeMin < 30000){
cout << "Tom sleeps well" << endl;
cout << h << " hours and " << min << " minutes less for play" << endl;
}
else{
  cout << "Tom will run away" << endl;
  cout << h << " hours and " << min << " minutes more for play" << endl;
}
  return 0;

}

    

    