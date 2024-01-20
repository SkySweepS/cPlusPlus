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
	
	int max = INT_MAX;
	
	string n = " ";
	
	while(n != "Stop"){
		cin >> n;
		if(n == "Stop"){
			break;
		}
		if(stoi(n) < max){
			max = stoi(n);
		}
	}

	cout << max;
	
    return 0;
} 
