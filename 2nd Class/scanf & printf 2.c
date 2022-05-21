#include <stdio.h>
int main(void)

{
    int roll;
    printf("Can you remember your roll no in class one?\nIf yes, please enter: " );
    scanf("%d",&roll);
    printf("Your roll was: %d \n",roll);

    char name[80];
    printf("\nEnter your Name: "); //স্পেস ছাড়া ওয়ার্ড নেয়া জায় এইখানে
    scanf("%s",&name);
    printf("You enter: %s",name);
    return 0;
}
