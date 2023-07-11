#include<stdio.h>
#include<conio.h>

void main(){

int marks[999];
int a,r;

clrscr();

printf("Enter the total student :-");
scanf("%d",&a);

for(r=0;r<a;r++)

{
    printf("Enter the marks of studant :-");
    scanf("%d",&marks[r]);   }
  
     for(r=0;r<a;r++){
     if(marks[r]>90){
	
     printf("Marks :- %d A1\n",marks[r]);
     }
     else if(marks[r]>80)
     {
	printf("Marks :- %d A\n",marks[r]);
     }
     else if(marks[r]>70)
     {
	printf("Marks :- %d B1\n",marks[r]);
     }
     else if(marks[r]>60)
     {
	printf("Marks :- %d B\n",marks[r]);
     }
     else if(marks[r]>50)
     {
	printf("Marks :- %d C1\n",marks[r]);
     }
     else if(marks[r]>40)
     {
	printf("Marks :- %d C\n",marks[r]);
     }
     else if(marks[r]>33)
     {
	printf("Marks :- %d D\n",marks[r]);
     }
   
      else
   
  {printf("Marks :- %d Fail\n",marks[r]);}
  
 }
 
 getch();
 
}