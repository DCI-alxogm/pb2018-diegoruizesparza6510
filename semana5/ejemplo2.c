#include<stdio.h>
#include<math.h>
int main()
{
  float exp_;
  int n=10,i;
 for(i=0;i<n;i++)
{
 exp_=exp(i);
 printf("%i \t %f\n",i,exp_);
}
return 0;
}
