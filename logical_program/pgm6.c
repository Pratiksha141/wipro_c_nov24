//Implement Karpekar's constant program. Print the number of times the logic of finding the difference of 2 numbers had to be iterated.
#include <stdio.h>
#include <stdlib.h>


int sortDescending(int num) {
    int digits[4];
    for (int i = 0; i < 4; i++) {
        digits[i] = num % 10;  
        num /= 10;
    }
    
    
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (digits[i] < digits[j]) {
                
                int temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }
    
    
    int sortedNum = 0;
    for (int i = 0; i < 4; i++) {
        sortedNum = sortedNum * 10 + digits[i];
    }
    return sortedNum;
}


int sortAscending(int num) {
    int digits[4];
    for (int i = 0; i < 4; i++) {
        digits[i] = num % 10;  
        num /= 10;
    }
    
    
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (digits[i] > digits[j]) {
                // Swap digits
                int temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }
    
    
    int sortedNum = 0;
    for (int i = 0; i < 4; i++) {
        sortedNum = sortedNum * 10 + digits[i];
    }
    return sortedNum;
}


void kaprekarRoutine(int num) {
    int count = 0;
    while (num != 6174) {
        
        int desc = sortDescending(num);
        int asc = sortAscending(num);
        
       
        num = desc - asc;
        
        
        printf("Iteration %d: %d - %d = %d\n", count + 1, desc, asc, num);
        
        
        count++;
        
        
        if (num == 0) {
            printf("Kaprekar's routine cannot be completed.\n");
            return;
        }
    }
    
   
    printf("Kaprekar's constant 6174 is reached in %d iterations.\n", count);
}

int main() {
    int num;
    
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    
    if (num < 1000 || num > 9999) {
        printf("Please enter a valid 4-digit number.\n");
        return 1;
    }
    
    
    int firstDigit = num / 1000;
    int secondDigit = (num / 100) % 10;
    int thirdDigit = (num / 10) % 10;
    int fourthDigit = num % 10;
    if (firstDigit == secondDigit && secondDigit == thirdDigit && thirdDigit == fourthDigit) {
        printf("The number must not be a repdigit (all digits same).\n");
        return 1;
    }

    kaprekarRoutine(num);
    
    return 0;
}
