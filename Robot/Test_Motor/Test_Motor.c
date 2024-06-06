/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools
#include "abdrive.h"

int leftSpeed = 0;
int rightSpeed = 0; 

int main()                                    // Main function
{
  // Add startup code here.

 
  while(1)
  {
    // Add main loop code here.
    drive_speed(0, 0);
    
  }  
}
