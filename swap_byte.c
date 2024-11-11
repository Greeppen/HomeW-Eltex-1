#include <stdio.h>

int main(){
    unsigned int number;
    char byte;
    printf("Enter Positive number: ");
    scanf("%u", &number);
    printf("Enter New 3rd byte: ");
    scanf("%hhu", &byte);
    number = (number & 0xFF00FFFF) | (byte << 16);
    printf("Your Swapped number: %d \n", number);
    return 0;
}
