// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    long int num=110;
    long int*ptr;
    printf("the number address:%p\n",&num);
    ptr=&num;
    printf("pointers address: %p\n",&ptr);
    printf("pointer's size: %1d bytes \n",sizeof(ptr));
    printf("value pointed to: %d\n",*ptr);
    return 0;
}
/*Output
the number address:0x7ffd16a5c1f8
pointers address: 0x7ffd16a5c200
pointer's size: 8 bytes 
value pointed to: 110 */
