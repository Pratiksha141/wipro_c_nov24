#include"prime.h"
#include<math.h>

int checkPrime(int number) {
    int root = ceil(sqrt(number));
    for(int i = 2; i <= root; i++) {
        if(number % i == 0)
            return 0; // To say that number is not Prime
    }
    return 1; // number is Prime
}