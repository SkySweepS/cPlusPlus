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
 
  int cake1;
  cin >> cake1;
  int cake2;
  cin >> cake2;

  int cake = cake1 * cake2;
  
  
  string piece = " ";

  while(piece != "STOP"){
    if(cake < 0){
      cout << "No more cake left! You need " << abs(cake) << " pieces more." << endl;
      break;
    }
    cin >> piece;
    if(piece == "STOP"){
      cout << cake << " pieces are left." << endl;
    }
    else{
    cake -= stoi(piece);
    }
  }
  
    return 0;
}
