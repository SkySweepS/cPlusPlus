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
    
    
    
 int age = 18;
 double money;
 cin >> money;
 int yearToBe;
 cin >> yearToBe;
 int year = 1800;
 double moneyLeft = money;
 while (year <= yearToBe){
     if(year % 2 == 0){
       money -= 12000;
       
     }
     if(year %2 == 1){
         money -= (12000 + (50 * age));
     }
     age++;
     year++;
 }
    if(money >= 0){
        
        cout.setf (ios::fixed);
        cout.precision(2);
    cout << "Yes! He will live a carefree life and will have " << money << " dollars left." << endl;
    }
    else{
        cout.setf (ios::fixed);
        cout.precision(2);
        cout << "He will need " << abs(money) << " dollars to survive." << endl;
    }

  return 0;
}











