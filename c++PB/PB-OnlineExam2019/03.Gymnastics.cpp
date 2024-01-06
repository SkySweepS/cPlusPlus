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

  string country;
  cin >> country;
  string ured;
  cin >> ured;

  double dificulty = 0;
  double performance = 0;

  if(country == "Russia"){
    if(ured == "ribbon"){
      dificulty = 9.100;
      performance = 9.400;
    }
    else if(ured == "hoop"){
      dificulty = 9.300;
      performance = 9.800;
    }
    else if(ured == "rope"){
      dificulty = 9.600;
      performance = 9.000;
    }
  }
  if(country == "Bulgaria"){
    if(ured == "ribbon"){
      dificulty = 9.600;
      performance = 9.400;
    }
    else if(ured == "hoop"){
      dificulty = 9.550;
      performance = 9.750;
    }
    else if(ured == "rope"){
      dificulty = 9.500;
      performance = 9.400;
    }
  }
  if(country == "Italy"){
    if(ured == "ribbon"){
      dificulty = 9.200;
      performance = 9.500;
    }
    else if(ured == "hoop"){
      dificulty = 9.450;
      performance = 9.350;
    }
    else if(ured == "rope"){
      dificulty = 9.700;
      performance = 9.150;
    }
  }
  double totalPoints = dificulty + performance;
  double p = 20 - totalPoints;
  double percent = (p / 20) * 100;

  cout.setf(ios::fixed);
  cout.precision(3);

  cout << "The team of " << country << " get " << totalPoints << " on " << ured << "." << endl;
   cout.setf(ios::fixed);
  cout.precision(2);
  cout << percent << "%" << endl;

  return 0;

}

  
    

    