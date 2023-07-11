#include<stdio.h>
void fun(int*,int*);
void main()
{
    int x=5, y=7;
    fun(&x,&y);
    printf("\ninside calling function\n");
    printf("x=%d\ny=%d\n",x,y);
   
}

void fun(int* x,int* y)
{
    *x=7;
    *y=5;
    printf("inside called function");
    printf("\nx=%d\ny=%d",*x,*y);
}