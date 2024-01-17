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
	
double age;
cin >> age;
char sex;
cin >> sex;

if(age >= 16 && sex == 'm'){
	cout << "Mr.";
}
else if(age < 16 && sex == 'm'){
	cout << "Master";
}
else if(age >= 16 && sex == 'f'){
	cout << "Ms.";
} else if(age < 16 && sex == 'f'){
	cout << "Miss";
}

  return 0;
}

