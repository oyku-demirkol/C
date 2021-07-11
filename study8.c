#include <stdio.h>
#include <stdlib.h>

//Days would be written as an array

int main() {
  char *days[] = {
    "Invalid",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"
  };

  int day = 0;
  printf("please enter the day value as a number in the range of [1,7] :");
  scanf("%d", &day);
  if (day < 1 || day > 7) day = 0; // (|| = The logical or )
  printf("%s\n", days[day]); // Here we print the day as a string according to the index of the day entered from the days array.

  return 0;
}
