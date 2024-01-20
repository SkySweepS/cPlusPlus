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
	
double tripPrice;
cin >> tripPrice;
double money;
cin >> money;
int spendCount = 0;
int saveCount = 0;
int count = 0;
int days = 0;

while(1){
	string spend;
	cin >> spend;
	double save;
	cin >> save;
	days++;
	if(spend == "spend"){
		money -= save;
		count++;
		if(money < 0){
			money = 0;
		}
	}
	else if(spend == "save"){
		money += save;
		count = 0;
		
	}
	if(money >= tripPrice){
		cout << "You saved the money for " << days << " days.";
		break;
	}
	if(count == 5){
		cout << "You can't save the money." << endl;
		cout << days;
	
		break;
	}
	
}
	
    return 0;
} 
