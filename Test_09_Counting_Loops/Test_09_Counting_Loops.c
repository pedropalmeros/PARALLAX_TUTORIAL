/*
  Count to Ten.c
 
  Count to ten in SimpleIDE Terminal.
*/

#include "simpletools.h"                      // Include simpletools

int main()                                    // main function
{
  for(int n = 1; n <= 10; n++)                // Count to ten
  {
    print("n = %d\n", n);                     // Display name & value of n
    pause(500);                               // 0.5 s between reps
  }
  print("All done!");                         // Display all done
}
