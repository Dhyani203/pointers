#include <stdio.h>
int main(){
int arr[6]={1,2,3,4,5,6};
int i, *ptr;
ptr=arr;
for (i=0;i<6;i++){
printf("element %d=%d\n",i,*ptr++);
}
return 0;
}
