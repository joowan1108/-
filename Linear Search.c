#include <stdio.h>
#include <string.h>
 
int LSearch(int arr[], int len, int target){
    for (int i=0; i<len; i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main (){
    int arr[]={3,5,2,4,9};
    int target;
    scanf("%d", &target);
    int find = LSearch(arr, sizeof(arr)/sizeof(int), target);
    if (find>=0){
        printf("%d에 있어", find);
    }
    else{
        printf("없음");
    }
    return 0;   
}