#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize) {
    int k=0;
    if(numsSize==0){
        return 0;
    }
  
  for(int i=0;i<numsSize;i++){
      if(*(nums+k)==*(nums+i)){
          continue;
      }else{
          *(nums+(k+1))=*(nums+i);
          k++;
      }
  }
  
    

    return k+1;
}

int main(){
    int nums[] = {1, 1, 2, 3, 3, 4, 5};  
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    int k = removeDuplicates(nums, numsSize);
    // int k=7;
    
    printf("New length: %d\n", k);
    printf("Result array: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    
    return 0;
}
