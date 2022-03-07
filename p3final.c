#include<stdio.h>
void input_n_and_r(int *n,int *r)
{
  printf("enter n and r value\n");
  scanf("%d %d",n,r);
}
int fact(int n)
{
  int i,f=1;
  for( i=1;i<=n;i++)
    {
      f=f*i;
    }
  return f;
}
void find_ncr(int n,int r,int *ncr)
{
  *ncr=fact(n)/(fact(r)*fact(n-r));
}
void output(int n,int r,int ncr)
{
  printf("the value of %dC%d=%d\n",n,r,ncr);
}
int main()
{
  int n,r,ncr;
  input_n_and_r(&n,&r);
  find_ncr(n,r,&ncr);
  output(n,r,ncr);
  return 0;
}