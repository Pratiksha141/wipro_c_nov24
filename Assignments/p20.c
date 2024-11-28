#include <stdio.h>

int main() {
    char raining, sunny, cloudy;

    // Prompt the user to enter weather conditions
    printf("Enter the weather conditions:\n");

    // Accepting weather conditions
    printf("Is it raining? (Enter 'r' for raining, any other key for not raining): ");
    scanf(" %c", &raining);  // Use " %c" to handle any leading whitespace

    printf("Is it sunny? (Enter 's' for sunny, any other key for not sunny): ");
    scanf(" %c", &sunny);

    printf("Is it cloudy? (Enter 'c' for cloudy, any other key for not cloudy): ");
    scanf(" %c", &cloudy);

    // Check if it is sunny and not cloudy and raining OR sunny and raining
    if ((sunny == 's' && raining != 'r' && cloudy != 'c') || (sunny == 's' && raining == 'r')) {
        printf("You can go out!\n");
    } else {
        printf("You cannot go out.\n");
    }

    return 0;
}