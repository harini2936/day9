#include <stdio.h>
void numbers(int x){
    if(x==5) return;//base condition
    printf("%d ",x);
    
    numbers(x-1);
    
}
void numbersdesc(int x){
    if(x==0) return;
    numbers(x-1);
    printf("%d ",x);
}
int main()
{
    numbersdesc(10);
}
 