#include<stdio.h>


int main()

{
      int i,n,x,o;


      printf("write size of A array :    ");
      scanf("%d",&n);
      int a[n];

      printf("write array A elements \n");
      for(i=0;i<n;i++)

{  printf("a[%d] =  ",i);
   scanf("%d",&a[i]); }



printf("enter the size of B array :    ");
scanf("%d",&x);
int b[x];

printf("enter array b elements \n");
for(i=0;i<x;i++)

{   printf("b[%d] =  ",i);
    scanf("%d",&b[i]);  }

int c[n+x];

for(i=0;i<n;i++)

{ c[i]=a[i] ; }

  for(i=0;i<x;i++)


{

    c[i+n]=b[i] ;   
                   
                    }

     for(i=0;i<n+x;i++)

{ 
    
     printf("c[%d] = %d\n",i,c[i]);
                                    
                                      }

return 0;

}


