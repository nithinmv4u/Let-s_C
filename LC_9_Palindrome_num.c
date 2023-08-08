#include<stdio.h>
#include <stdbool.h>

bool isPalindrome(int x){
    int y=0;
    if (x==0) return true;
    while (x>0)
    {
        y = y*10 + x%10;
        if(x==y || y==0) break;
        if(x<y)break;
        x=x/10;
        if(x==y) break;
    }
    return x==y;
}

void main(){
    int x = 10;
    int result = isPalindrome(x);
    printf("%d",result);
}