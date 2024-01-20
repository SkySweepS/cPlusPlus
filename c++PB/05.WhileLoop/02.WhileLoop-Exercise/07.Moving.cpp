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
 
   int width;
  cin >> width;
  int length;
  cin >> length;
  int height;
  cin >> height;

  int volume = width * length * height;

  string boxes;
  cin >> boxes;

  while (boxes != "Done") {

    int currentCount;
    currentCount = stoi(boxes);

    volume -= currentCount;
    if (volume < 0){
      break;
    }
    cin >> boxes;
  }

  if (volume < 0) {
    cout << "No more free space! You need " << volume * -1 << " Cubic meters more.\n"; 
  }
  else {
    cout << volume << " Cubic meters left.\n";
  }

  
    return 0;
}
