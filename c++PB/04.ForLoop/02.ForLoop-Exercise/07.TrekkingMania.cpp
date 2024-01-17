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

  int groups;
  cin >> groups;
  double musala = 0;
  double monblan = 0;
  double kalimandjaro = 0;
  double k2 = 0;
  double everest = 0;
  double peopleTotal = 0;


  for(int i = 0; i < groups; i++){
    int people;
    cin >> people;
    if(people <= 5){
      musala += people;
    }
    if(people > 5 && people <= 12){
      monblan += people;
    }
    if(people > 12 && people <= 25){
      kalimandjaro += people;
    }
    if(people > 25  && people <= 40){
      k2 += people;
    }
    if(people > 40){
      everest += people;
    }
    peopleTotal += people;
  }
  
  double m = musala / peopleTotal * 100;
  double mo = monblan / peopleTotal * 100;
  double kal = kalimandjaro / peopleTotal * 100;
  double k = k2 / peopleTotal * 100;
  double e = everest / peopleTotal * 100;

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << m << "%" << endl;
  cout << mo << "%" << endl;
  cout << kal << "%" << endl;
  cout << k << "%" << endl;
  cout << e << "%" << endl;



  return 0;
}

    

    