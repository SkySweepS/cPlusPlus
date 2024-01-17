#include <iostream> 
#include <string>
using namespace std;
int main() {
  
  double n = 0;

  while(n >= 0){
    cin >> n;
    if(n < 0){
      cout << "Negative number!";
      break;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Result: " << n * 2 << endl;
  }
    
    
    
    
    
    
    
    
    return 0;
}
