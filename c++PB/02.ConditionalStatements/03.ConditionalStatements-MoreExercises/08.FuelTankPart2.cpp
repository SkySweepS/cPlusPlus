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
 double fuelL;
 cin >> fuelL;
 string discount;
 cin >> discount;
 double total = 0;
 double disk = 0;
 
 
 if(fuelType == "Diesel"){
 	
	 if(discount == "Yes"){
	 	total = fuelL * (2.33 - 0.12);
	 }
	 else if(discount == "No"){
	 	total = fuelL * 2.33;
	 }
	 
	 if(fuelL > 25.00){
	 	total *= 0.9;
	 }
	 else if(fuelL >= 20.0 && fuelL <= 25.00){
	 	total *= 0.92;
	 }
 }
 else if(fuelType == "Gasoline"){
 	
	 if(discount == "Yes"){
	 	total = fuelL * (2.22 - 0.18);
	 }
	 else if(discount == "No"){
	 	total = fuelL * 2.22;
	 }
	 
	 
	 if(fuelL > 25.00){
	 	total *= 0.9;
	 }
	 else if(fuelL >= 20.0 && fuelL <= 25.00){
	 	total *= 0.92;
	 }
 }
 else if(fuelType == "Gas"){
 	if(discount == "Yes"){
	 	total = fuelL * (0.93 - 0.08);
	 }
	 else if(discount == "No"){
	 	total = fuelL * 0.93;
	 }
	 if(fuelL > 25.00){
	 	total *= 0.9;
	 }
	 else if(fuelL >= 20.0 && fuelL <= 25.00){
	 	total *= 0.92;
	 }
	 
 }
cout.setf(ios::fixed);
cout.precision(2);
cout << total << " lv." << endl;

  return 0;
}

