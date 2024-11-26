// Online C compiler to run C program online
#include <stdio.h>


int searchInsert(int* nums, int numsSize, int target) {
        int low =0;
    int high=numsSize-1;
    
    while(low<=high){
       int mid =low+(high-low)/2;
       
       if(target==*(nums+mid)){
           return mid;
       }else if (target<*(nums+mid)){
           high=mid-1;
       }else{
           low=mid+1;
       }
       
    }
    
    return low;
}

int main() {
    // Write C code here
    printf("Try programiz.pro");
    int nums[]={1,3,5,6};
    int target=0;
    int numsSize=4;
    
    printf("index is %d", searchInsert( nums,  numsSize,  target));
    
    
    
    return 0;
}
