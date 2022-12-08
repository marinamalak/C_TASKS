 #include <stdio.h>
void main(void){
	int x,y,z;
	int *px ,*py,*pz;
	x=22;
	y=33;
	z=44;
	px=&x;
	py=&y;
	pz=&z;
	printf(" X = %d \n Y = %d \n Z = %d \n",x,y,z);
	printf(" PX = %p \n PY = %p \n PZ = %p \n",px,py,pz);
	printf(" Swapping pointers \n");
	pz = px;
	px = py;
	py = pz;
	printf(" X = %d \n Y = %d \n Z = %d \n",x,y,z);
	printf(" PX = %p \n PY = %p \n PZ = %p \n",px,py,pz);	
	printf(" *PX = %d \n *PY = %d \n *PZ = %d \n",*px,*py,*pz);	
}