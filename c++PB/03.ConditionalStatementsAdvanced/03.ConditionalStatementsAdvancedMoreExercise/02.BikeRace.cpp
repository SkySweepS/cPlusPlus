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
 
  int young;
  cin >> young;
  int old;
  cin >> old;
  string track;
  cin >> track;

  double junior = 0;
  double senior = 0;
  double total = 0;

  

  if(track == "trail"){
    junior = young * 5.50;
    senior = old * 7 ;
  }
  else if(track == "cross-country"){
    
    junior = young * 8;
    senior = old * 9.50;
  }
  else if(track == "downhill"){
    junior = young * 12.25;
    senior = old * 13.75;
  }
  else if(track == "road"){
    junior = (young * 20);
    senior = (old * 21.5);
  }

if((old + young) >= 50 && track == "cross-country"){
      junior = young * 8 * 0.75;
    senior = old * 9.50 * 0.75;
    }
 


  total = (junior + senior) * 0.95;
cout.setf(ios::fixed);
cout.precision(2);
  cout << total;

    return 0;
}
