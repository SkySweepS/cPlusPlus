#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>



using namespace std;


int main() {


  int daysOfStay;
  cin >> daysOfStay;

cin.ignore();

  string room;
  string grade;
  getline(cin, room);
 //cin >> typeOfRoom;
 cin >> grade;
  
  
  int nightsOfStay = daysOfStay - 1;

  double totalForStay = 0;
if(daysOfStay < 10){
  if(room == "room for one person"){
    totalForStay += nightsOfStay * 18;

  }
  else if (room == "apartment"){
    int discount = nightsOfStay * 25;
    totalForStay += discount * 0.7;

  }
  else if(room == "president apartment"){
    int discount = nightsOfStay * 35;
    totalForStay += discount * 0.9;

  }
}



  if(daysOfStay >= 10 && daysOfStay <= 15){
    if(room == "room for one person"){
    totalForStay += nightsOfStay * 18;

  }
  else if (room == "apartment"){
    int discount = nightsOfStay * 25;
    totalForStay += discount * 0.65;
  }
  else if(room == "president apartment"){
    int discount = nightsOfStay * 35;
    totalForStay += discount * 0.85;
  }
 }


 if(daysOfStay > 15){
    if(room == "room for one person"){
    totalForStay += nightsOfStay * 18;

  }
  else if (room == "apartment"){
    int discount= nightsOfStay * 25;
    totalForStay += discount * 0.5;
  }
  else if(room == "president apartment"){
    int discount= nightsOfStay * 35;
    totalForStay += discount * 0.8;
  }
 }

cout.setf (ios::fixed);
cout.precision(2);


if(grade == "positive"){
    double total = totalForStay * 1.25;
    
    cout << total << endl;
}
else if(grade == "negative"){
    
    cout << totalForStay * 0.9 << endl;
}

    

    





  return 0;
}

    

    