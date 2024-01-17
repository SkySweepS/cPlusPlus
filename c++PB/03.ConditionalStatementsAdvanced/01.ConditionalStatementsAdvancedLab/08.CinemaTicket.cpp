#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <math.h>



using namespace std;

int main() {

 string day;
 cin >> day;
 int price = 0;
 
 if(day == "Monday"){
 	price = 12;
 }

if(day == "Tuesday"){
 	price = 12;
 }
 if(day == "Wednesday"){
 	price = 14;
 }
 if(day == "Thursday"){
 	price = 14;
 }
 if(day == "Friday"){
 	price = 12;
 }
 if(day == "Saturday"){
 	price = 16;
 }
 if(day == "Sunday"){
 	price = 16;
 }
 
 cout << price;

  return 0;
}

