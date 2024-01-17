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
	
 string fuelType;
 cin >> fuelType;
 int fuel;
 cin >> fuel;
 
 if(fuelType == "Diesel"){
 	if(fuel >= 25){
	 	cout << "You have enough diesel." << endl;
	 }
	 else{
	 	cout << "Fill your tank with diesel!" << endl;
	 }
 }
 else if(fuelType == "Gasoline"){
 	if(fuel >= 25){
	 	cout << "You have enough gasoline." << endl;
	 }
	 else{
	 	cout << "Fill your tank with gasoline!" << endl;
	 }
 }
 else if(fuelType == "Gas"){
 	if(fuel >= 25){
	 	cout << "You have enough gas." << endl;
	 }
	 else{
	 	cout << "Fill your tank with gas!" << endl;
	 }
 }
 else {
 	cout << "Invalid fuel!" << endl;
 }
 

  return 0;
}

