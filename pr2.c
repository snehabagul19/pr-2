#include<stdio.h>
#include<conio.h>

void main()
{
	char grade;
	int mark;
	
	printf("Enter your marks : ");
	scanf("%d",& mark);
	
	grade = (mark>=90 &&  mark>=100)? 'A'
	: (mark>=80 &&  mark<=90)? 'B'
	: (mark>=70  && mark<=80)? 'C'
	: (mark>=60  && mark<=70)? 'D'
	: (mark>=40  && mark<=60)? 'E'
	: 'F';
	printf("your grade is %c :" ,grade);
	
	switch (grade)
	{
	   case  'A' : printf("‘Excellent work!\n");
	   break;
	   case  'B' : printf("‘Well done’.\n");
	   break;
	   case  'C' : printf("‘Good job’.\n");
	   break;
	   case 'D'  : printf("Good\n");
	   break;
	   case 'E' : printf("‘You passed, but you could do better’.\n");
	   break;
	   case  'F' :printf("‘Sorry, you failed’.\n");
	   break;
	    	
	}
	 if(grade=='A' || grade=='B' || grade=='C' || grade=='D')
	 { 
	      printf("‘Congratulations! You are eligible for the next level’\n");
	 }
	 	else 
		 {
		 	printf("‘Please try again next time’\n");
		 }
	 		
		 
	 
	 
	
}
