  #include <stdio.h>
   int fun (int a[] ,int b[],int n){
	   int i , mult=0;
	   for(i=0 ; i<n;i++){
		   mult+= (a[i] * b[i]);
	   }
	 return mult;
 }
 void main(void){
 int x[5]={1,2,3,4,5};
 int y[5]={6,7,8,9,10};
  int n = sizeof(x)/sizeof(x[0]);
 int mult;
 mult = fun(x,y,n);
 printf("\nMultiplication of two arrays = %d\n",mult);
 }