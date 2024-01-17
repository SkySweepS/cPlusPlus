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
 
 if(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"){
 	cout << "Working day";
 }
 else if(day == "Saturday" || day == "Sunday"){
 	cout << "Weekend";
 }
 else{
 	cout << "Error";
 }





  return 0;
}

