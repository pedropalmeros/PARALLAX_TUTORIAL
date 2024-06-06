/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  pause(1000);
  int a = 15; 
  int b = 17; 
  print("a=%d, b=%d\n",a,b); 
  if(a>b){
    print("a is larger \n"); 
  }
  else if (a < b){
    print("b is larger \n"); 
  }
  else{
    print("a equals b"); 
 }             
}
