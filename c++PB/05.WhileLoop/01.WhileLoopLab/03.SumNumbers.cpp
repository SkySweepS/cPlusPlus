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
	
 int n;
 cin >> n;
 
 int num = 0;
 int sum = 0;
 
 while(1){
 	cin >> num;
	sum += num;
	if(sum >= n){
		cout << sum << endl;
		break;
	}
 }
	
	
    return 0;
} 
