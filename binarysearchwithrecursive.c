#include <stdio.h>
#include <string.h>
 
int binarySearchwithRecursive(int arr[], int first, int last, int target){
    //recursive exit condition (target does not exist)
    if (first>last){
        return -1;
    }
    int mid= (first+last)/2;
    //target found
    if (target==arr[mid]){
        return mid;
    }
    //target not found
    else{
        if (target > arr[mid]){
            binarySearchwithRecursive(arr, mid+1 , last, target);
        }
        else{
            binarySearchwithRecursive(arr, first, mid-1, target);
        }
    }
        
}
int main (){
    int arr[]={1, 3, 5, 7, 9};
    int target;
    scanf("%d", &target);
    int arrlen = sizeof(arr)/sizeof(int);
    int find = binarySearchwithRecursive(arr, 0, arrlen-1, target);
    if (find==-1){
        printf("Target not found");
    }
    else{
        printf("Target is in %d index", find);
    }
    return 0;   
}