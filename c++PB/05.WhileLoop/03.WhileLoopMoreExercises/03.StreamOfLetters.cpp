#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>
#include <math.h>

using namespace std;

int main () {
 
 string l = " ";
 string k = "";
  string secret = "";
  
  bool c = 0;
  bool n = 0;
  bool o = 0;

 while(1){
  cin >> l;
  if(l == "End"){
    
    break;
  }

   for(char i1 = 'A'; i1 <= 'Z'; i1++){
      if(i1 == l[0]){
      k += l[0];
      }
    }
   
 
  for(char i = 'a'; i <= 'z'; i++){
   
    
  if(i == l[0]){
    
    if(l[0] == 'c'){
     
     if(c == 1){
      k += l;
     }
  c = 1;
    }
    else if(l[0] == 'o'){
      
      
      
      if(o == 1){
        k += l;
        
        
      }
      o = 1;
      
    }
    else if(l[0] == 'n'){
      
      if(n == 1){
        k += l;
      }
     n = 1;
     
    }
    
    else{
      
    k += l[0];
      
    }
    
    
  }
  
  }
 
  if(n == 1 && o == 1 && c == 1){
    n = 0;
    o = 0;
    c = 0;
    
    secret += k + " ";
    k = "";
  }
  
     
 }
  
   cout << secret;
  
    return 0;
}
