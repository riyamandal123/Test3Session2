#include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;
int find_gcd(int a,int b)
{
  int minimum=a;
  if(b<minimun)
    b=minimum;
  for (int i=minimum;i>0;i--)
    if(a%i==0 && b%i==0)
      return minimum;
}
fraction input_fraction()
{
  printf("enter the numerator and denomenator\n");
  scanf("%d%d%d%d",&f1->num,&f1->den,&f2->num,&f2->den);
}
void input_n_fractions(int n,Fraction f[n])
{
  for(int i=0;i<n;i++)
  {
        f[i] = input_fraction();
  }
}
fraction add_fractions(fraction *f1,fraction *f2)
{
 f3->den3=f1.den+f2.den;
  f3->num3=f1.num*f2.den+f2.num*f1.den;
  int gcd=find_gcd(f3->num,f3->den);
  f3->num=f3->num/gcd;
  f3->den=f3->den/gcd;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)
{
  printf("sum of %d /%d and %d/%d is%d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
Fraction add_n_fractions(int n,Fraction f[n])
{
  Fraction sum;
  for(int i=0;i<n;i++)
  {
        sum = add_fractions(sum,f[i])
  }
  return sum;
}
int main()
{
  
}

