#include <stdio.h>
#include <stdlib.h>

//recursively finding the gcd

int ebob(int a, int b) {
    if (b == 0) return a;
    else return ebob(b, a % b);
}


int main(){
	int a , b, c;
	printf("Please enter two numbers:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	c=ebob(a,b);
	printf("Result is : %d",c);
	return 0;
}
