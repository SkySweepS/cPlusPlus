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
 
 for(int i = 0; i < 24; i++){
  for(int i2 = 0; i2 < 60; i2++){
    for(int i3 = 0; i3 < 60; i3++){
    cout << i << " : " << i2 << " : " << i3 << endl;
    }
  }
 }
  
    return 0;
}