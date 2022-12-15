 #include <stdio.h>

 	typedef struct students{
	char *name;
	int Id ;
	int Programming;
	int Data_Structures;
	int Discrete_Math;
	int Algorithms;
	}students;
 void print_grades(students std[]);
 void edit_grades(students std[]);
	int id ;
	
  void main(void){
		students student_data[]={{"Ahmed",1111,50,60,45,70},{"Mohsen",2222,80,68,90,85},{"Mina",3333,87,45,41,89},{"Maged",4444,89,45,91,89}
		,{"Mona",5555,78,100,35,74},{"Alaa",6666,89,13,25,78},{"Mena",7777,67,84,93,100},{"Heba",8888,55,95,66,34},{"Ali",9999,85,95,69,44}
		,{"Marina",1010,92,96,89,100}};
		int choise=1;
		printf(" 1.To show grades of the student\n 2.Edit grade the student\n 3.exit\n");
		while(choise !=3){
			printf("\n Your choise : ");
			scanf("%d",&choise);
			switch(choise){
				case 1:
				print_grades(student_data);
				break;	
				case 2:
				edit_grades(student_data);
				break;
				case 3:
				printf("Exit");
				break;
              default:	
	            printf("Enter correct choise");		
                break;				
			}
		}
	}
 void print_grades( students std[]){
		char c =0;
		printf(" Enter his id : ");
		scanf("%d",&id);
		for(int i=0 ;i <10;i++){
			if (id == std[i].Id ){
			printf("the student name is : %s \n",std[i].name);	
			printf("the Programming grade is : %d \n",std[i].Programming);	
			printf("the Data Structures grade is : %d \n",std[i].Data_Structures);	
			printf("the Discrete Math grade is : %d \n",std[i].Discrete_Math);	
			printf("the Algorithms grade is : %d \n",std[i].Algorithms);	
			}else
				c++;
		}
		if (c ==10)
		printf(" The id is incorrect\n "); 			
	}
	
 void edit_grades( students std[]){
	 int choise,c=0 ;	
		printf(" Enter his id : ");
		scanf("%d",&id);
		for(int i=0 ;i <10;i++){
       if (id == std[i].Id ){		
	 printf(" 1.To edit Programming grade \n 2.To edit Data Structures grade\n 3.To edit Discrete Math grade\n 4.To edit Algorithms grade\n");
	 printf("Enter correct choise : ");		
	 scanf("%d",&choise);
	 	 printf("Enter the new grade : ");
	   switch(choise){
		 case 1:
		 scanf("%d",&std[i].Programming);
		 break;
		 case 2:
		 scanf("%d",&std[i].Data_Structures);
		 break;
		 case 3:
		 scanf("%d",&std[i].Discrete_Math);
		 break;
		 case 4:
		 scanf("%d",&std[i].Algorithms);
		 break;
		 
	   }
	  }else
	   c++;
	}
		if (c ==10)
		printf(" The id is incorrect\n ");
 }