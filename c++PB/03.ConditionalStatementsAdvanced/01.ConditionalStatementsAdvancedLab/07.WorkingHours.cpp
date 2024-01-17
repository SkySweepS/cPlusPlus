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

int hour;
cin >> hour;
string day;
cin >> day;

if(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday"){

if(hour >= 10 && hour <= 18){
	
		cout << "open";
	}
	else {
		cout << "closed";
	}
}
else if (day == "Sunday"){
	cout << "closed";
}


  return 0;
}

