#include <stdio.h>
#include <stdlib.h>

//recursive sum of the digits in a number

int bas(int n){
	if(n==0) return 0;
	else  return bas(n/10)+n%10;	
	}

int main(){
	int a, b;
	printf("Please enter a number:\n");
	scanf("%d",&a);
	b=bas(a);
	printf("Result of the sum of the digits in this number:  %d",b);
	return 0;
}
