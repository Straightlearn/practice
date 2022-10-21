#include<stdio.h>

int greatest(int *, int);

int main(){
    int arr[6] = {4,5,22,77,23,1};
    
    // passing base address of the array to the function
    int max_value = greatest(arr, 6);
    
    printf(“Greatest value in array = %d”, max_value);
    return 0;
}

int greatest(int *arr, int n) {
    // receiving array in an integer pointer arr
    // here, *arr represents the value in array at index 0 
    int max_element = arr[0], i;
    for(i = 0; i < n; i++) {
        if (max_element < arr[i]) {
            max_element = arr[i];
        }
    }
    return max_element;
}
