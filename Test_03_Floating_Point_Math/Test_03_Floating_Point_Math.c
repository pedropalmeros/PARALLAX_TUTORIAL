/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  float r = 1.0;
  float c = 2.0 * PI * r; 
  print("circumference = %f \n",c);
  float a = PI * r * r; 
  print("area = %f \n", a); 
}
