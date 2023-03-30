#include <stdio.h>

void bubblesort(int arr[],int n){
    int temp,flag=0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        break;
    }
    printf("The sorted array is: ");
    for(int i = 0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    
}

int main()
{
    int n;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements before sorting : ");
    for(int i = 0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    bubblesort(arr,n);
    return 0;
}
