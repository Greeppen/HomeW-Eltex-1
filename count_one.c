#include <stdio.h>

void counter_one(unsigned int n){
    int count = 0;
    unsigned int mask = 1 << sizeof(int)*8-1;
    printf("The number of units in the binary representation of the entered number: ");
    for (int i = 0; i < sizeof(int)*8;i++){
        if (n & mask){
            count += 1;
        }
        mask >>= 1;
    }
    printf("%d",count);
}


int main(){
    unsigned int n;
    printf("Enter your Positive number: ");
    scanf("%u",&n);
    counter_one(n);
    return 0;
}
