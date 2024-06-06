
/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  int n = 0; 
  while(n < 100)
  {
    print("n=%d\n", n); 
    n = n + 5; 
    pause(200); 
  }
  print("All done!");     
}
