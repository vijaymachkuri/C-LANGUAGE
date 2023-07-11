//FUNCTIONS WOTHOUT ARGUMENTS AND WITHOOUT RETURN TYPE
#include<stdio.h>
int sum(void);    //declaration
int sum(void)  //definition
{
    int a,b,s;
    printf("enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("the sum of %d and %d is %d",a,b,s);
    //it is not returning anything
}
void main()
{
    sum(); //function calling     
}