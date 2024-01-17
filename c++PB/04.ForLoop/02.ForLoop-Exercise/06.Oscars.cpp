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

  string actorName;
  getline(cin, actorName);
  double points;
  cin >> points;
  double jury;
  cin >> jury;
  
  double totalPoints = 0;

  for(int i = 0; i < jury; i++){
    cin.ignore();
    string juryName;
    double juryPoints;
    
    getline(cin, juryName);
    cin >> juryPoints;
    
    if((totalPoints + points) < 1250.5){
    totalPoints += ((juryName.length() * juryPoints) / 2);
    }
    

  
    
  }
    double tp = totalPoints + points;
    cout.setf(ios::fixed);
    cout.precision(1);
  if(tp < 1250.5){
    cout << "Sorry, " << actorName << " you need " << 1250.5 - tp << " more!" << endl;
  }
  else{
     
    cout << "Congratulations, " << actorName << " got a nominee for leading role with " << tp << "!" << endl;
  }

  return 0;
}

    

    