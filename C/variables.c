#include <stdio.h>

int main (){

int x; //declaration
x = 101; // intialization
int y = 111; // declaration + intialization

int age = 23; //integer
float height = 174.5; //float
char bloodtype = 'B';  //single character
char country[] = "canada"; //array of character
   
   printf("you living in %s\n",country);
   printf("you are %.1f cm\n" ,height);
   printf("your blood type is %C\n" ,bloodtype);
   printf("your age is %d",age);


return 0;
}