 #include <stdio.h>
 void Bubble_sort (int a[],int n){
	 int i , j , temp;
   for(i=0; i<n-1 ;i++){
	   for(j=0;j<n-i-1;j++){
		   if(a[j] >a[j+1]){
			   temp =a[j];
			   a[j]=a[j+1];
			   a[j+1]=temp; 
		   }
	   }
   }
   printf(" array after sorting : ");
   for(i=0; i<n ;i++){
	  printf("%d  ",a[i]); 
   }
 } 
 void main(void){
	int arr[]={5,9,-2,0,7,1,11};
     int n = sizeof(arr)/sizeof(arr[0]);
      Bubble_sort(arr,n);	
	 
 }