#include <stdio.h>
#include <string.h>
 
int binarySearch(int arr[], int len, int target){
    int first=0;
    int last = len-1;
    int mid;
    //when first gets bigger than last, target is not found 
    while(first<=last){
        mid= (first+last)/2;
        //target found
        if (target==arr[mid]){
            return mid;
        }
        //target not found
        else{
            if (target > arr[mid]){
                first = mid+1;
            }
            else{
                last = mid-1;
            }
        }
        
    }
    //target does not exist
    return -1;
}
int main (){
 //arr needs to be sorted for binary search to work
    int arr[]={1, 3, 5, 7, 9};
    int target;
    scanf("%d", &target);
    int arrlen = sizeof(arr)/sizeof(int);
    int find = binarySearch(arr, arrlen, target);
    if (find==-1){
        printf("Target not found");
    }
    else{
        printf("Target is in %d index", find);
    }
    return 0;   
}
