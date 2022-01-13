#include<stdio.h>
typedef struct _complex
{
  float real,imaginary;
}Complex;
int get_n()
{
  int n;
  printf("Enter the no. of complex numbers:\n");
  scanf("%d",&n);
  return n;
}
void input_n_complex(int n, Complex c[n])
{
  for (int i = 0; i < n; i++)
  {
   printf("Enter the complex number:\n");
   scanf("%f%f",&c[i].real,&c[i].imaginary);
  }
}
Complex add_n_complex(int n,Complex c[n])
{
  Complex temp;
  temp.real=0;
  temp.imaginary=0;
  for (int i = 0; i < n; i++)
  {
    temp.real+=c[i].real;
    temp.imaginary+=c[i].imaginary;
  }
  return (temp);
}
void output(int n,Complex c[n],Complex r)
{
  int i;
  for (i = 0; i < n-1; i++)
  {
    printf("%f+i%f + ",c[i].real,c[i].imaginary);
  }
  printf("%f+i%f = %f+i%f",c[i].real,c[i].imaginary,r.real,r.imaginary);
}
int main()
{
  int n=get_n();
  Complex r,c[n];
  input_n_complex(n,c);
  r=add_n_complex(n,c);
  output(n,c,r);
  return 0;
}
