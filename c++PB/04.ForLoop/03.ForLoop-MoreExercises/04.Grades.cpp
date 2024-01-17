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
  
  double students;
  cin >> students;
  double grade;

  double gradeAverage = 0;

  double grade2 = 0;
  double grade3 = 0;
  double grade4 = 0;
  double grade5 = 0;

  

  for(int i = 0; i < students; i++){

    cin >> grade;

    if(grade <= 6.00 && grade >= 5.00){
      gradeAverage += grade;
      grade5++;
    }
    else if(grade < 5 && grade >= 4){
      gradeAverage += grade;
      grade4++;
    }
    else if(grade < 4 && grade >= 3){
      gradeAverage += grade;
      grade3++;
    }
    else if(grade < 3 ){
      gradeAverage += grade;
      grade2++;
    }

  }

  double percent5 = grade5 / students * 100;
  double percent4 = grade4 / students * 100;
  double percent3 = grade3 / students * 100;
  double percent2 = grade2 / students * 100;

  double average = gradeAverage / students;

  cout.setf (ios::fixed);
  cout.precision(2);

  cout << "Top students: " << percent5 << "%" << endl;
  cout << "Between 4.00 and 4.99: " << percent4 << "%" << endl;
  cout << "Between 3.00 and 3.99: " << percent3 << "%" << endl;
  cout << "Fail: " << percent2 << "%" << endl;
  cout << "Average: " << average << endl;


  return 0;
}

    

    

  

