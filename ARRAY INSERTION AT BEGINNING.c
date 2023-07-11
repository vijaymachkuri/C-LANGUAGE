
//ARRAY INSERTION AT THE BEGINNING
#include<stdio.h>
void main()
{
    
    int a[10];
    int i,size,element,position;
    printf("Here is a hidden array and we don't know it's size\nso enter some random size\n");
    scanf("%d",&size);
    printf("Enter %d elements\n",size);
    for (i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Hurray your elements are here\n");
    for (i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("hey!\ndid you forget any element?\nno worries!!\ntell me the element\n");
    scanf("%d",&element);
    
    if(position>=size+1)
    {
        printf("INVALId!!!!]\n");
    }
    else
    {
        for(i=size-1;i>=0;i--)
        {
            a[i+1]=a[i];
        }  
        a[0]=element; 
        size++;
    }
    for (i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }

}