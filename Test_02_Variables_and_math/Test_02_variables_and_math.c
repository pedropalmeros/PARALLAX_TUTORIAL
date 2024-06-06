/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
int a= 25; 
int b = 17; 
int c = a + b; 

print("a = %d, b = %d  \n",a,b);
print("a + b = %d\n",c); 

c = a - b; 
print("a = %d, b = %d\n",a,b);
print("a-b = %d\n", c);
}
