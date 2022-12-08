 #include <stdio.h>
 int fun (int *a ,int *b){
	 return *a + *b;
 }
 void main(void){
 int x,y ,sum;
 printf("Enter the first number : ");
 scanf("%d",&x);
 printf("Enter the second number : ");
 scanf("%d",&y); 
 sum = fun(&x,&y);
 printf("Sum = %d",sum);
 }