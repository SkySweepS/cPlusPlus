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

//Fish Tank


int main() {

  double lenght;
  cin >> lenght;
  double width;
  cin >> width;
  double height;
  cin >> height;
  double percent;
  cin >> percent;
  
  double volume = lenght * width * height;

  double volumeLiters = volume / 1000;

  double spaceUsed = percent / 100;

  double total = volumeLiters * (1 - spaceUsed);

  cout << total << endl;



  return 0;
}

    

    

  
