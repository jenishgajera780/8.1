/* 

Q2- write a program to find the average of a 1d array.

*/

#include<stdio.h>
#include<conio.h>

void main()

{

    float array[99];
    float a,j,avg,sum=0.0;

    clrscr();

    printf("Enter array size :- ");

    scanf("%f",&j);

    printf("Enter array elements :- \n");

    for(a=0;a<j;a++)

   {  printf("a[%.0f]=",a);
      scanf("%f",&array[a]);
   
      sum += array[a];  }

     avg = sum / j;
     printf("Average of an array :- %0.2f",avg);
    
     getch();

}