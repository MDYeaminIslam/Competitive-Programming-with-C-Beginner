//nested if-else
#include <stdio.h>
int main ()
{
  int grade;
  printf("Type in your grade: ");
  scanf ("%d", &grade);

  if (grade < 10){
    printf ("Oh no!");
  }
  else{
    if (grade < 40){
      printf ("You failed.\n");
    }
    else{
      printf ("You passed!\n");
      if (grade >= 90){
        printf ("And you got an A!\n");
      }
    }
  }
  return 0;
}
