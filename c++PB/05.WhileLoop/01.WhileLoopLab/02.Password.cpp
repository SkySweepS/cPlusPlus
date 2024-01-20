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
	
 string userName;
 cin >> userName;
 string password;
 cin >> password;
 
 string pass = " ";
 
 while(pass != password){
 	cin >> pass;
	 if(pass == password){
	 	cout << "Welcome " << userName << "!" << endl;
	 }
 }
	
	
	
	
    return 0;
} 
