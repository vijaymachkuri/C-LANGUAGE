//FUNCTIONS WOTH ARGUMENTS AND WITH RETURN TYPE
#include<stdio.h>

int sum(int,int);

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b,c;
    printf("Enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    c =  sum(a,b);
    printf("%d",sum);
}
/*i was actually thought of giving same variables but compiler is sayiing its wrong...
so do not use same same variables ex=sum in main function*/