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

int main () {
  
 
 string town;
 cin >> town;
 double sell;
 cin >> sell;
 double total = 0;
 cout.setf(ios::fixed);
 cout.precision(2);
 if(town == "Sofia"){
 	if(sell >= 0 && sell <= 500){
	 	total = sell * 0.05;
		 cout << total;
	 }
	 else if(sell > 500 && sell <= 1000){
	 	total = sell * 0.07;
		 cout << total;
	 }
	 else if(sell > 1000 && sell <= 10000){
	 	total = sell * 0.08;
		 cout << total;
	 }
	 else if(sell > 10000){
	 	total = sell * 0.12;
		 cout << total;
	 }
	 else {
	 	cout << "error";
	 }
	 
 }
 else if(town == "Varna"){
 	if(sell >= 0 && sell <= 500){
	 	total = sell * 0.045;
		 cout << total;
	 }
	 else if(sell > 500 && sell <= 1000){
	 	total = sell * 0.075;
		 cout << total;
	 }
	 else if(sell > 1000 && sell <= 10000){
	 	total = sell * 0.1;
		 cout << total;
	 }
	 else if(sell > 10000){
	 	total = sell * 0.13;
		 cout << total;
	 }
	 else {
	 	cout << "error";
	 }
	 
 }
 else if(town == "Plovdiv"){
 	if(sell >= 0 && sell <= 500){
	 	total = sell * 0.055;
		 cout << total;
	 }
	 else if(sell > 500 && sell <= 1000){
	 	total = sell * 0.08;
		 cout << total;
	 }
	 else if(sell > 1000 && sell <= 10000){
	 	total = sell * 0.12;
		 cout << total;
	 }
	 else if(sell > 10000){
	 	total = sell * 0.145;
		 cout << total;
	 }
	 else {
	 	cout << "error";
	 }
	 
 }
 else{
 	cout << "error";
 }
 //if(sell >= 0){
 	//cout << total;
 //}

 
    
    return 0;
} 
