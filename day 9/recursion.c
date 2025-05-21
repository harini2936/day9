#include <stdio.h>
void numbers(int x){
    if(x==0) return;//base condition
    printf("%d ",x);
    numbers(x-1);
    
}
int main()
{
    numbers(10);
}