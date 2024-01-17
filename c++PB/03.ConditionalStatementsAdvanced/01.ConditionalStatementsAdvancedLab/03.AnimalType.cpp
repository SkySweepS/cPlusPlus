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
	
string animal;
cin >> animal;

if(animal == "dog"){
	cout << "mammal";
}
else if(animal == "crocodile" || animal == "tortoise" || animal == "snake"){
	cout << "reptile";
}
else{
	cout << "unknown";
}




  return 0;
}

