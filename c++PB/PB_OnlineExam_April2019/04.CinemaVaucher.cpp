#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>



using namespace std;

int main() {
	
 double vaucher;
 cin >> vaucher;
 cin.ignore();
 string bought = " ";
 double price = 0;
 int ticket = 0;
 int other = 0;
 
 
 
 while(bought != "End" || vaucher < 0){
 	getline(cin, bought);
	 int a = bought[0] + bought[1];
    int b = bought[0];
    if(bought == "End"){
      break;
    }
	 
	 if(bought.length() > 8){
	 	price = a;
    vaucher -= price;
    if(vaucher >= 0){
		 ticket++;
     
    }
	 }
	 if(bought.length() <= 8){
	 	price = b;
    vaucher -= price;
    if(vaucher >= 0){
		 other++;
     
    }
	 }
   
	if(vaucher < 0){
    vaucher += price;

      break;
    }
	
	 
	 
	 
 }


cout << ticket << endl;
cout << other << endl;

  return 0;
}