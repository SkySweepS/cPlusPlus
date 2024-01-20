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

  string bookNames;
  int books = 0;
  string bookSearch;
  getline(cin, bookSearch);

  while(bookNames != "No More Books"){
    books++;
    getline(cin, bookNames);
    if(bookNames == bookSearch){
      cout << "You checked " << books - 1 << " books and found it." << endl;
      break;
    }
    if(bookNames == "No More Books"){
      cout << "The book you search is not here!" << endl;
      cout << "You checked " << books - 1 << " books." << endl;
    }

  }
  

  return 0;
}

    

    