#include<stdio.h>
int input_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  for(int i=0;i<n;i++)
    {
      printf("enter the elements of the input array\n");
      scanf("%d",&a[i]);
    }
}
int find_largest(int n, int a[n])
{
  int i, largest=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]>a[largest])
    {
       largest=i;
    }  
  }  
     return largest;
}
void out_put(int n, int a[n], int largest)
{
  printf("the index of the largest number %d in an array is %d\n",largest,a[largest]);
}
int main()
{
  int n,largest;
  n=input_size();
  int a[n];
  input_array(n,a);
  largest=find_largest(n,a);
  out_put(n,a,largest);
  return 0;  
}