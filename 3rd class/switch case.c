#include <stdio.h>
int main ()
{
char colorCode;
printf("Enter first word of Red, White or Black: \n");
scanf("%c", &colorCode);


switch ( colorCode ) {
    case 'r' :
    printf("You select Red.");
    break;

    case 'w':
    printf("You select White.");
    break;

    case 'b':
    printf("You select Black.");
    break;

    default:
    printf("Wrong choose!");
    break;
}
return 0;
}
