
#include<stdio.h>
int swap(int*a,int*b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int i,j;

printf("Enter the Values");
scanf("%d%d",&i,&j);

    printf("Before swapping %d and %d\n",i,j);
    swap(&i,&j);

    printf("After swapping %d and %d\n",i,j);
    return 0;
}
/*
OUTPUT:
Enter the Values 24
15
Before swapping 24 and 15
After swapping 15 and 24 */
