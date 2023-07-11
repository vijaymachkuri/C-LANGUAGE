//FUNCTIONS WITH ARGUMENTS AND WITHOUT RETURN TYPE
#include<stdio.h>
int sum(int,int);       //declaring the fn, and names of datatype is not mondatory here

int sum(int x,int y) // parameters (int x,imt y)
{
    int s = x+y;
    printf("the summ of %d and %d is %d",x,y,s);
}

void main()
{
    int a,b;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    sum(a,b);   //arguments (a,b)
}

/*in function sum we can take int a, int || we can also take int x,int y
i.e we can take same variables for both parameters and arguments or else we can take different  */