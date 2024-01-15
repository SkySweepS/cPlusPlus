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

  double weather;
  cin >> weather;

  if(weather >= 5.00 && weather < 12){
    cout << "Cold" << endl;

  }
  else if(weather >= 12 && weather < 15){
    cout << "Cool";
  }
  else if(weather >= 15 && weather <= 20.0){
    cout << "Mild";
  }
  else if(weather >= 20.1 && weather <=25.9){
    cout << "Warm";
  }
  else if(weather >= 26.0 && weather <= 35.00){
    cout << "Hot";
  }
  else {
    cout << "unknown" << endl;
  }




  return 0;

}

    

    