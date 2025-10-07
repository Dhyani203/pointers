#include <stdio.h>
int main(){
    int var=10;
    int *ptr;
    ptr=&var;
    printf("Value of var%d\n",var);
    printf("Address of var%d\n",&var);
    printf("Value stored in ptr:%d\n",ptr);
    printf("Value pointed by ptr%d\n",ptr);
    printf("äddress of pointer %u\n",&ptr);
    return 0;
}
