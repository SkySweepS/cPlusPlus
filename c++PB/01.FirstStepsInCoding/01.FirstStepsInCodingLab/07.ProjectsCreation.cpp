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


int main() {

  string name;
  cin >> name;
  int project;
  cin >> project;

  int hoursPerProject = 3;

  cout << "The architect " << name << " will need " << project * hoursPerProject << " hours to complete " << project << " project/s." << endl;


  return 0;

}

    

    
