#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <algorithm>



using namespace std;

int main() {
	
  string password;
  cin >> password;

  if(password == "s3cr3t!P@ssw0rd"){
    cout << "Welcome" << endl;
  }
  else {
    cout << "Wrong password!";
  }
	
    return 0;
  }
