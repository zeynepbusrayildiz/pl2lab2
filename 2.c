#include <stdio.h>
#include <stdlib.h>

int findMax(int arr[], int size){
    if(size==1) return arr[0];
	else{
        int maxOfRest=findMax(arr+1, size-1);
        return (arr[0]>maxOfRest)?arr[0]:maxOfRest;
    }
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int i, arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxElement = findMax(arr, n);
    printf("The largest element in the array is: %d\n", maxElement);

    return 0;
}

