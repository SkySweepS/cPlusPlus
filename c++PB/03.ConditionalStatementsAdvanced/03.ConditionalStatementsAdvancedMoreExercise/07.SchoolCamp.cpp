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
 
  string season;
  cin >> season;
  string groupType;
  cin >> groupType;
  int students;
  cin >> students;
  int nights;
  cin >> nights;

  double price = 0;
  string sport = " ";

  if(season == "Winter"){
    if(groupType == "boys"){
      price = 9.60 * nights;
      sport = "Judo";
    }
    else if (groupType == "girls"){
      sport = "Gymnastics";
      price = 9.60 * nights;
    }
    else if(groupType == "mixed"){
      sport = "Ski";
      price = 10 * nights;
    }
  }
  else if(season == "Spring"){
     if(groupType == "boys"){
      price = 7.20 * nights;
      sport = "Tennis";
    }
    else if (groupType == "girls"){
      sport = "Athletics";
      price = 7.20 * nights;
    }
    else if(groupType == "mixed"){
      sport = "Cycling";
      price = 9.5 * nights;
    }
  }
  else if(season == "Summer"){
     if(groupType == "boys"){
      price = 15 * nights;
      sport = "Football";
    }
    else if (groupType == "girls"){
      sport = "Volleyball";
      price = 15 * nights;
    }
    else if(groupType == "mixed"){
      sport = "Swimming";
      price = 20 * nights;
    }
  }
  price *= students;

 
  if(students >= 10 && students < 20){
    price *= 0.95;
   
  }
  else if(students >= 20 && students < 50){
    price *= 0.85;
    
  }
  else if(students >= 50){
    price *= 0.5;
  }
cout.setf(ios::fixed);
cout.precision(2);
  cout << sport << " " << price << " lv." << endl;



  
  
    return 0;
}
