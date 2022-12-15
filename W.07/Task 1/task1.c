 #include <stdio.h>
 
 	typedef struct team{
	int salary;
	int bouns;
	int deductions;
	}Team;
	Team Mohsen;
	Team Maged;
	Team Mariam;
void main(void){

	    printf("Enter Mohsen salary : ");
	scanf("%d",&Mohsen.salary);
		printf("Enter Mohsen bouns : ");
	scanf("%d",&Mohsen.bouns);
		printf("Enter Mohsen deductions : ");
	scanf("%d",&Mohsen.deductions);
	    printf("Enter Maged salary : ");
	scanf("%d",&Maged.salary);
		printf("Enter Maged bouns : ");
	scanf("%d",&Maged.bouns);
		printf("Enter Maged deductions : ");
	scanf("%d",&Maged.deductions);
	printf("Enter Mariam salary : ");
	scanf("%d",&Mariam.salary);
		printf("Enter Mariam bouns : ");
	scanf("%d",&Mariam.bouns);
		printf("Enter Mariam deductions : ");
	scanf("%d",&Mariam.deductions);
	int sum = Mohsen.salary +Mohsen.bouns +Maged.salary +Maged.bouns +Mariam.salary +Mariam.bouns -Mohsen.deductions -Maged.deductions -Mariam.deductions;
	printf("Total value needed = %d ",sum);
}