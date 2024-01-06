

 #include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>
using namespace std;


int main() {

 string month;
 cin >> month;
 int nightsToStay;
 cin >> nightsToStay;

 double studioRoom = 0;
 double apartment = 0;

 double studioPrice = 0;
 double apartmentPrice = 0;
 cout.setf (ios::fixed);
 cout.precision(2);

 if (month == "May" || month == "October") {
   studioRoom = 50;
   apartment = 65;
   studioPrice = nightsToStay * studioRoom;
   apartmentPrice = nightsToStay * apartment;
   

   if (nightsToStay > 7){
    studioRoom = 50;
    studioRoom *= 0.95;
   apartment = 65;
   studioPrice = nightsToStay * studioRoom;
   apartmentPrice = nightsToStay * apartment;
    
   }
   if (nightsToStay > 14) {
    studioRoom = 50;
    
   apartment = 65;
   
    

   studioPrice = nightsToStay * (studioRoom * 0.7);
   apartmentPrice = nightsToStay * (apartment * 0.9);
    
   }
}

  else if ( month == "June" || month == "September") {
  
   studioRoom = 75.20;
   apartment = 68.70;
   studioPrice = nightsToStay * studioRoom;
   apartmentPrice = nightsToStay * apartment;
   

   if(nightsToStay > 14){
    studioRoom = 75.20;
   apartment = 68.70;
   studioRoom *= 0.80;
    apartment *= 0.90;
   studioPrice = nightsToStay * studioRoom;
   apartmentPrice = nightsToStay * apartment;
    
   }

   
}
  
 
else if (month == "July" || month == "August") {
   studioRoom = 76;
   apartment = 77;
   studioPrice = nightsToStay * studioRoom;
   apartmentPrice = nightsToStay * apartment;
  
   

   if(nightsToStay > 14) {
     studioRoom = 76;
   apartment = 77;
   apartment *= 0.90;
   
   studioPrice = nightsToStay * studioRoom;
   apartmentPrice = nightsToStay * apartment;
   }
   
 }
 cout << "Apartment: " << apartmentPrice << " lv." << endl;
 cout << "Studio: " << studioPrice << " lv." << endl;

   
   



  return 0;
}

   



 
    

  
