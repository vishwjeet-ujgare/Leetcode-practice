// Online C compiler to run C program online
#include <stdio.h>


//   //first logic

// int removeElement(int* nums, int numsSize, int val) {

//     if (numsSize == 0) {
//         return 0;
//     }
//     int last = numsSize - 1;

//     for (int i = 0; i < numsSize; i++) {

//         if (i == last && nums[i] != val) {
//             return last + 1;
//         } else if (i == last && nums[i] == val) {
//             return last;
//         }

//         if (*(nums + i) == val) {

//             while (*(nums + last) == val) {
//                 if (last==0 && nums[0]==val) {
//                     return 0;
//                 }else if (last==0 && nums[0]!=val) {
//                     return 1;
//                 }
//                 last--;
//             }
//             *(nums + i) = nums[last];
//             if(last==0 ||last<i){
//                  last+1;
//             }
//             else{
//                 last--;
//             }
           
//         }
//     }
//     return last+1;
// }

// // another logic tow pointes form starting and last 

// int removeElement(int* nums, int numsSize, int val) {
//     if (numsSize == 0) {
//         return 0;
//     }

//     int last = numsSize - 1; 
//     for (int i = 0; i <= last; i++) {
       
//         if (nums[i] == val) {
//                         nums[i] = nums[last];
//             last--; 
//              // Recheck the current index, as we swapped a new value
//             i--;   
//         }
//     }

//     return last + 1;  array
// }


// // another logic reaplace though pointer j
int removeElement(int* nums, int numsSize, int val) {
    int j = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[j] = nums[i]; 
            j++; 
        }
    }
    return j; 
}

int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    int nums[]={0,1,2,2,3,0,4,2};
    //   int nums[]={ 3,2,2,3};
    //   int nums[]={ 4,5};
    // int nums[]={ 2,3,3};
    // int nums[]={0,4,4,0,4,4,4,0,2};
       
   int val=2;
    int len=sizeof(nums)/sizeof(nums[0]);
    printf("\nlength of array is : %d \n",len);
    
    //change last parameter 
    int k =removeElement(nums,len,val);
    // int k=len;
    printf("\n value of k :%d",k);
    printf("{ ");
    for (int i=0;i<k;i++){
        printf("%d, ",*(nums+i));
    }
     printf("}");
    return 0;
}
