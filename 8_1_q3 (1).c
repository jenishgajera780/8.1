#include<stdio.h>

void main()

{

int i,n;

    printf("write array size :");
    scanf("%d",&n);

    int x[i],j[i],sum[i];


 printf("Enter the elements for first array\n");

      for(i=0;i<n;i++)
    
    {
      printf("x[%d] = ",i);
      scanf("%d",&x[i]);   }

 printf("Enter the elements for second array\n");

for(i=0;i<n;i++)
{
   printf("j[%d] = ",i);
    scanf("%d",&j[i]);    }

 printf("Sum of array\n");

        for(i=0;i<n;i++)

{

sum[i]=x[i]+j[i];

}

        for(i=0;i<n;i++)
      
    {
          printf("%d\n",sum[i]);
                                    }

}