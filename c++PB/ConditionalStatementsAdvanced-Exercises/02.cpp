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

//Summer Outfit


int main() {

  double degrece;
  cin >> degrece;
  string time;
  cin >> time;
  string outfit = " ";
  string shoes = " ";

  if(10 <= degrece && degrece <= 18){
    if(time == "Morning"){
      outfit = "Sweatshirt";
      shoes = "Sneakers";

    }
    else if(time == "Afternoon"){
      outfit = "Shirt";
      shoes = "Moccasins";
    }
    else if(time == "Evening"){
      outfit = "Shirt";
      shoes = "Moccasins";
    }

  }
  else if(18 < degrece && degrece <= 24){
    if(time == "Morning"){
      outfit = "Shirt";
      shoes = "Moccasins";
    }
    else if(time == "Afternoon"){
      outfit = "T-Shirt";
      shoes = "Sandals";
    }
    else if(time == "Evening"){
      outfit = "Shirt";
      shoes = "Moccasins";
    }
  }
  else if(degrece >= 25){
    if(time == "Morning"){ 
      outfit = "T-Shirt";
      shoes = "Sandals";

    }
    else if(time == "Afternoon"){
      outfit = "Swim Suit";
      shoes = "Barefoot";
      }
    else if(time == "Evening"){
      outfit = "Shirt";
      shoes = "Moccasins";
    }
  }
cout << "It's " << degrece << " degrees, get your " << outfit << " and " << shoes << "." << endl;
  
  return 0;
}

    

    

  
