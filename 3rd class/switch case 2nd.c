#include <stdio.h>
int main ()
{
int code;
int i = 0;
printf("Enter 1 to print even integers or enter 2 to print odd integers: ");
scanf("%d", &code);


switch ( code ) {
    case 1 :
        while(i<=100){
            printf("%d \n", i);
            i=i+2;
        }
    break;


    case 2 :
         for(i =1; i<=100; i=i+2)
                printf("%d \n", i);

    break;


    default:
    printf("Wrong choose!");
    break;
}
return 0;
}
