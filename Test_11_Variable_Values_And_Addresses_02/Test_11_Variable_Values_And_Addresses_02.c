/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

int array[5] = {11, 13, 17, 19, 23}; 

int main()                                    // Main function
{
 print("array start address = %d \n\n", array);
 
 for(int i = 0; i < 5; i++){
   print(" array[%d] = %d \n", i , array[i]);
   print("&array[%d] = %d \n", i , &array[i]);
  } 
}
