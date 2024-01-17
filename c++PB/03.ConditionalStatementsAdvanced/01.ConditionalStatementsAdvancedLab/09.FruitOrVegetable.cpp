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

string p;
cin >> p;

if(p == "banana" || p == "apple" || p == "kiwi" || p == "cherry" || p == "lemon" || p == "grapes"){
	cout << "fruit";
}
else if(p == "tomato" || p == "cucumber" || p == "pepper" || p == "carrot"){
	cout << "vegetable";
}
else{
	cout << "unknown";
}



  return 0;
}

