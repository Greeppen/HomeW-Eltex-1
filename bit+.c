#include <stdio.h>

int bin(unsigned int a){
    int mask = 1 << (sizeof(a)*8 -1);
    printf("Number in binary system: 0b ");
    for (int i = 0; i < sizeof(a)*8;i++){
        if (a & mask){
            printf("1");
        }
        else{
            printf("0");
        }
        if ((i + 1) % 4 == 0){
            printf(" ");
        }
        mask >>= 1;
    }
    return 0;
}

int main(){
    unsigned int a;
    printf("Enter Positive number: ");
    scanf("%u",&a);
    bin(a);
    printf("\n");
    return 0;
}
