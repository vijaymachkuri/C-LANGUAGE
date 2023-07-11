//FUNCTIONS WOTHOUT ARGUMENTS AND WITH RETURN TYPE
#include<stdio.h>
int sum(void);    //declaration
int sum(void)  //definition
{
    int a,b;
    printf("enter the values of a and b");
    scanf("%d%d",&a,&b);
    return (a+b);  //IT IS A GOOD PRACTICE TO PUT ANYTHING IN () WHILE RETURNING
}
void main()
{
    int s;
    s = sum(); //function calling
    printf("%d",s);

}