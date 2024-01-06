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

  int visitors;
  cin >> visitors;

  int back = 0;
  int chest = 0;
  int legs = 0;
  int abs = 0;
  int shake = 0;
  int bar = 0;
  double train = 0;
  double eat = 0;

  for(int i = 0; i <= visitors; i++){
    string training;
    getline(cin, training);

    if(training == "Back"){
      back++;
      train++;
    }
    else if(training == "Chest"){
      chest++;
      train++;
    }
    else if(training == "Legs"){
      legs++;
      train++;
    }
    else if(training == "Abs"){
      abs++;
      train++;
    }
    else if(training == "Protein shake"){
      shake++;
      eat++;
    }
    else if(training == "Protein bar"){
      bar++;
      eat++;
    }



  }

  double trainPercent = train / visitors * 100;
  double eatPercent = eat / visitors * 100;

  cout << back << " - back" << endl;
  cout << chest << " - chest" << endl;
  cout << legs << " - legs" << endl;
  cout << abs << " - abs" << endl;
  cout << shake << " - protein shake" << endl;
  cout << bar << " - protein bar" << endl;
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << trainPercent << "% - work out" << endl;
  cout << eatPercent << "% - protein" <<  endl;


  return 0;

}

  
    

    