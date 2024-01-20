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
	
 string name;
 cin >>  name;
 double grade;
 double total = 0;
 int class1 = 1;
 int count = 1;
 int count2 = 0;
 cout.setf(ios::fixed);
 cout.precision(2);
 while(class1 <= 12){
 	class1++;

 	cin >> grade;
	 total += grade;
	 if(grade >= 4.00){
	 	count2 = 0;
		 count++;
	 }
	 if(grade < 4.00){
	 	count2++;
		count = count;
		total -= grade;
	 }
	 if (count2 > 1){
	 cout << name << " has been excluded at " << count << " grade" << endl;
	 
 	break;
 }
 

 }
 if(count == 13){
 	cout << name << " graduated. Average grade: " << total / 12 << endl;
 }

	
    return 0;
} 
