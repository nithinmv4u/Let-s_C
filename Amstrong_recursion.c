#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numb(num,t){
	if(num>0){
		num=num/10;
		numb(num,++t);
	}
	else{
		return t;
	}
}

int amstrong(num){
	int t=0,rem=0, sum = 0;
	t=numb(num,t);
	printf("t1= %d\n",t);
	while (num){
		rem = num%10;
		num=num/10;
		sum = sum + pow(rem,t);
	}
	return sum;
}

void main(void) {
	int num=0,i=0,sum=0;
	printf("Enter number: ");
	scanf("%d", &num);
	sum=amstrong(num);
	if(sum == num){
		printf("Armstrong");
	}
}