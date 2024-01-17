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

  double skumriaPrice;
  cin >> skumriaPrice;
  double cacaPrice;
  cin >> cacaPrice;
  double palamudKg;
  cin >> palamudKg;
  double safridKg;
  cin >> safridKg;
  double midiKg;
  cin >> midiKg;

  double palamudPrice = skumriaPrice * 1.6;
  double safridPrice = cacaPrice * 1.8;
  double midiPrice = 7.50;
  double total = (palamudKg * palamudPrice) + (safridKg * safridPrice) + (midiKg * midiPrice);
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << total << endl;

  

  return 0;

}

    

    