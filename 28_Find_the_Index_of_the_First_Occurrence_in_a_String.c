// Online C compiler to run C program online
// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
#include <stdio.h>

int callLen(char* str){
int i=0;
    while(*(str+i)!='\0'){
       i++; 
    }
    return i;
}

int strStr(char* hayStack, char* needle) {
    
    int hayStackLen=callLen(hayStack);
    int needleLen=callLen(needle);
    
    int nPointer=0;
    int result =-1;
    
    if(hayStackLen<nPointer){
        return -1;
    }
    
    for(int i=0;i<hayStackLen;i++){
        
        if(*(hayStack+i)==*(needle+nPointer)){
            result=i;
            while(nPointer<needleLen){
                if(*(hayStack+(i+nPointer))==*(needle+nPointer)){
                    nPointer++;
                    continue;
                }else{
                    result=-1;
                    nPointer=0;
                    
                    break;
                }
            }
        }
    }
    
    
    return result;
}

int main() {
    // Write C code here
    printf("Try programiz.pro");
    char* haystack="sdsadsad";
    char* needle="sad";
    
    int result=strStr(haystack,needle);
    if(result>=0){
           printf("\nThe first occurrence is at index %d,",result);
    }else{
        printf("\n%s did not occur in %s",needle,haystack);
    }
 
    
    return 0;
}
