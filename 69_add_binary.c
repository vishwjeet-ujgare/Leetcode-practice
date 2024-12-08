#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* addBinary(char* a, char* b){
    int len_a=strlen(a);
    int len_b=strlen(b);
    
    int max_len=(len_a>len_b)?len_a:len_b;
    // printf("Max length: %d \n",max_len);
    
    char* result=(char*)malloc((max_len+2)*sizeof(char));
    result[max_len+1]='\0';

    
    int carry =0;
    
    int i=len_a-1;
    int j=len_b-1;
    int k = max_len;
    
    while(i>=0 || j>=0|| carry){
        int bit_a=(i>=0) ? a[i] - '0' :0 ;
        int bit_b=(j>=0) ? b[j] - '0' :0 ;
        
        int sum=bit_a+bit_b+carry;
        
        carry=sum/2;
        result[k--]=(sum%2)+'0';
        i--;
        j--;
        
        
    }
     if (k < 0) {
        return result; 
    } else {
        return result + k + 1; 
    }
    
    return result;
}


int main() {

    char* a="1010";
    char* b="1011";

    char* result = addBinary(a, b);

    printf("Sum of %s and %s is %s\n", a, b, result);

  
    return 0;
}
