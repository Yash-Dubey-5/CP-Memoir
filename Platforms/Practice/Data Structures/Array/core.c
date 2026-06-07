#include<stdio.h>
#include<stdlib.h>


int main() {
    int n = 5;
    // printf("Enter size of array: ");
    // scanf("%d",&n);

    int* arr = (int*)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++) {
        arr[i] = i+1;
    }

    for(int i=0;i<n;i++) {
        printf("%d ",*(arr+i)); // It is the same as *(i+arr)
    }
    printf("\n");

    for(int i=0;i<n;i++) {
        printf("%d ",i[arr]); // It is the same as arr[i]
    }
    printf("\n");

    printf("%d\n",arr);
    printf("%p\n",&arr);
    free(arr);
}