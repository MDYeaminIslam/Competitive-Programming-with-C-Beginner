//This is functions property
//return_type function_Name (parameters){
    //function body;
    //return value;
//}

#include<stdio.h>

int square(int num){
    //int result = num * num;
    return num * num;
}


int main(){

  int x = square(5);

  printf("Square is: %d", x);

  return 0;
}
