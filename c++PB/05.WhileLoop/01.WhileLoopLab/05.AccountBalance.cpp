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
	
 double total = 0;
 string input = " ";
 cout.setf(ios::fixed);
 cout.precision(2);
 while(input != "NoMoreMoney"){
 	cin >> input;
	 if (input == "NoMoreMoney"){
		cout << "Total: " << total << endl;
	    break;
	}
	if(stod(input) < 0 ){
		cout << "Invalid operation!" << endl;
		cout << "Total: " << total << endl;
	    break;
	}
	else {
		total += stod(input);
		cout << "Increase: " << stod(input) << endl;
		
	}
	
 }
	
	
    return 0;
} 
