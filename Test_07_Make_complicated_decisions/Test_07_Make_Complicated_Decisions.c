/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  int a=100; 
  int b = 17; 
  print("a = %d, b = %d\n", a,b);
  if((a > b) || (a == 100)){
    printf("a might be larger than b,\n Or a might be 100,\n");
    printf("OR may be both!\n");
  }    
}
