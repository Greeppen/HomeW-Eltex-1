#include <stdio.h>

void binm(int n){
    unsigned int mask = 1 << (sizeof(int)*8)-1;
    printf("Number in binary system: 0b");
    for (int i=0;i<sizeof(int)*8;i++){
        if (n & mask){
            printf("1");
        }
        else{
            printf("0");
        }
        if ((i+1)%4==0){
            printf(" ");
        }
        mask >>= 1;
    }

}


int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    binm(n);
    return 0;
}
