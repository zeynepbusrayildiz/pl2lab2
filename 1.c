#include <stdio.h>
#include <stdlib.h>

//recursive function that returns the sum of numbers from 1 to n

int sum(int n){
	if(n==1) return 1;
	else return sum(n-1)+n;
}

int main(){
	int a, b;
	printf("Please enter a number:\n");
	scanf("%d",&a);
	b=sum(a);
	printf("Result: %d",b);
	return 0;
}
