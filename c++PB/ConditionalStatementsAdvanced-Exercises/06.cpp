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




int main() {

  int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    char nOperator;
    cin >> nOperator;


   

    

    if (n2 == 0 && (nOperator == '/' || nOperator == '%')) {
      cout << "Cannot divide " << n1 << " by zero\n";
    }
    else if (nOperator == '+' || nOperator == '-' || nOperator == '*'){
      
      if(nOperator == '+'){
        int result = n1 + n2;
        int odd = result % 2;
        if (odd == 0){
          
          cout << n1  << " " << nOperator << " " << n2 << " = " << result << " - " << "even" << endl;
        }
        else {
           
          cout << n1 << " " << nOperator << " " << n2 << " = " << result << " - " << "odd" << endl;

        }

          
        
      
       
      }
      else if (nOperator == '-') {
        int result = n1 - n2;
        int odd = result % 2;
        if (odd == 0){
          
          cout << n1 << " " << nOperator << " " << n2 << " = " << result << " - even" << endl;
        }
        else {
           
          cout << n1 << " " << nOperator << " " << n2 << " = " << result << " - odd" << endl;

        }
      }
      else if (nOperator == '*') {
        int result = n1 * n2;
        int odd = result % 2;
        if (odd == 0){
          
          cout << n1 << " " << nOperator << " " << n2 << " = " << result << " - even" << endl;
        }
        else {
           
          cout << n1 << " " << nOperator << " " << n2 << " = " << result << " - odd" << endl;

        }
      }


    }
    else if (nOperator == '/'){
      cout.setf (ios::fixed);
      cout.precision(2);

      double result = static_cast<double>(n1) / n2;
     
      cout << n1 << " " << nOperator << " " << n2 << " = " << static_cast<double>(result) << endl;
    }
    else if (nOperator == '%') {
      

      double result = n1 % n2;
     cout << n1 << " " << nOperator << " " << n2 << " = " << result << endl;
    }




   



   return 0;
}   

    

  
