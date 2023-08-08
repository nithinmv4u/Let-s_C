#include<stdio.h>
void main()
{
    int a[8]={1,0,2,3,0,4,5,0};
    int i,j;
    for(i=0;i<8;i++){
        if(a[i]==0){
            a[7]=0;
            for(j=7;j>i;j--){
                a[j]=a[j]+a[j-1];
                a[j-1]=a[j]-a[j-1];
                a[j]-=a[j-1];
            }
            i=i+2;
        }
    }
    for(i=0;i<8;i++){
        printf(" %d ",a[i]);
    }
    // int i;
    // for(i=0;i<10;i++){
    //     printf("%d\n",i);
    //     i++;
    //     printf("--\n");
    //     printf("%d\n",i);
    // }
}

