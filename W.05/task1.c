 #include <stdio.h>
 void main(void){
 int x=10;
 printf("x = %d \n",x);
 int *p =&x;
 *p=20;
 printf("x = %d \n",x);
 }