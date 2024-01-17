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

//New Home


int main() {

  string flowersType;
  cin >> flowersType;
  int flowers;
  cin >> flowers;
  double budget;
  cin >> budget;

  double roses = 5.00;
  double dahlias = 3.80;
  double tulips = 2.80;
  double narcissus = 3.00;
  double gladiolus = 2.50;
  double total = 0;

  if(flowersType == "Roses"){
    total = flowers * roses;
    if(flowers > 80){
      total = total - (total * 0.10);
    }
  }
  else if (flowersType == "Dahlias"){
    total = flowers * dahlias;
    if(flowers > 90){
      total = total - (total * 0.15);
    }
  }
  else if (flowersType == "Tulips"){
    total = flowers * tulips;
    if(flowers > 80){
      total = total - (total * 0.15);
    }
  }
  else if (flowersType == "Narcissus"){
    total = flowers * narcissus;
    if(flowers < 120){
      total = total * 1.15;
    }
  }
  else if (flowersType == "Gladiolus"){
    total = flowers * gladiolus;
    if(flowers < 80){
      total = total * 1.20;
    }
  }

  cout.setf(ios::fixed);
  cout.precision(2);

if(total > budget){
  cout << "Not enough money, you need " << total - budget << " leva more." << endl;
}
else if(total <= budget){
  cout << "Hey, you have a great garden with " << flowers << " " << flowersType << " and " << budget - total << " leva left." << endl;
}




  return 0;
}

    

    

  
