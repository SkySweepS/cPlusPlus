#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <algorithm>
using namespace std;

int hToMin(int h, int min){
  int timeH = h * 60 + min;
  int timeMin = timeH + 15;

  return timeMin;
}

int localH(int local){
  int localH = local / 60;
  if(localH >= 24){
    localH -= 24;
  }
  return localH;
}
int localMin(int local){
  int localMin = local % 60;
  return localMin;
}


int main() {
int h;
cin >> h;
int min;
cin >> min;


if(localMin(hToMin(h, min)) < 10){
  cout << localH(hToMin(h, min)) << ":0" << localMin(hToMin(h, min)) << endl;
}
else{
  cout << localH(hToMin(h, min)) << ":" << localMin(hToMin(h, min)) << endl;
}

  

  return 0;
}
