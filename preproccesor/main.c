 #include <stdio.h>
 #include "STD_MATH.h"
 void main(void){
	char c=4 ,n =30, m =60 ,k =62;
	printf("SET_BIT : %d \n",SET_BIT(c,5));
	printf("CLEAR_BIT : %d \n",CLEAR_BIT(n,3));
	printf("GET_BIT : %d \n",GET_BIT(m,2));
	printf("TOGGLE_BIT : %d \n",TOGGLE_BIT(k,4));
 }