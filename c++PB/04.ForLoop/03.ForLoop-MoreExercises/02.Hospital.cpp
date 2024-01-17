#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>
using namespace std;



int main() {

int days;
cin >> days;



int doctors = 7;
int treated = 0;
int untreated = 0;


for (int i = 1; i <= days; i++){
  int patient;
  cin >> patient;

  if(i % 3 == 0 && untreated > treated){
    ++doctors;
  }
 
    if(patient > doctors){
    untreated += patient - doctors;
    treated += doctors;
    }
    else {
    treated += patient;
    }
}
cout << "Treated patients: " << treated << "." << endl;
cout << "Untreated patients: " << untreated << "." << endl;



  return 0;
}

