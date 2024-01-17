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
	
	
	string n;
	getline(cin, n);
	int total = 0;

for(int i = 0; i < n.length(); i++){
	if(n[i] == 'a'){
		total += 1;
	}
	if(n[i] == 'e'){
		total += 2;
	}
	if(n[i] == 'i'){
		total += 3;
	}
	if(n[i] == 'o'){
		total += 4;
	}
	if(n[i] == 'u'){
		total += 5;
	}
		
	

	
}
 cout << total;
    
    return 0;
} 
