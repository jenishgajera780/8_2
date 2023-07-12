
#include<stdio.h>


int main(){
int i,n,x,o=0;
printf("type the first number :    ");
scanf("%d",&n);


printf("type the last number :    ");
scanf("%d",&x);
int a[x+n];
for(i=n;i<=x;i++)

{

if(i%4==0)

{
  
 a[o]=i;
 
  o++;}

}

for(i=0;i<o;i++)
{printf(" The leap year is : %d\n",a[i]);}

return 0;}




