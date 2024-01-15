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

  int webTabs;
  cin >> webTabs;
  int salary;
  cin >> salary;

  int tax = 0;

  for(int i = 0; i < webTabs; i++){
    string webName;
    cin >> webName;
    if(webName == "Facebook"){
      tax += 150;
    }
    if(webName == "Instagram"){
      tax += 100;
    }
    if(webName == "Reddit"){
      tax += 50;
    }
  }

  if(salary > tax){
    cout << salary - tax << endl;
  }
  else{
    cout << "You have lost your salary." << endl;
  }




  return 0;
}

    

    