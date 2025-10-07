#include <stdio.h>
int main(){
    int a,b,temp;
    int *p,*q;
    printf("Enter the numbers to be swapped:");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;
    *q=temp;

printf("after swapping:\n");
printf("a=%d\n",a);
printf("b=%d\n",b);
return 0;
}

