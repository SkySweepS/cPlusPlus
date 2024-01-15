#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <sstream>



using namespace std;

//Vacantion book list


int main() {

  int numberOfPages;
  cin >> numberOfPages;
  int pagesPerH;
  cin >> pagesPerH;
  int days;
  cin >> days;
  

  int totalReadingTime = numberOfPages / pagesPerH;

  int neededHours = totalReadingTime / days;
  cout << neededHours << endl;


  return 0;
}

    

    

  
