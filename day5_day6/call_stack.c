#include <stdio.h>

float global_var = 10.5f;

void delhi()
{
    puts("We came to visit the beautiful Akshardham Mandir");
}

void kolkata()
{
    char ch = 'K';
    puts("We came to Kolkata to visit Belur Math");
    delhi();
    puts("We came back to visit Kalighat Aadi Shakti Peeth");
}

void mumbai()
{
    static double d = 9.9;
    puts("We came to visit Mumba Devi Mandir");
    kolkata();
    puts("We came back to visit SiddhiVinayak Mandir");
}

int main()
{
    puts("I am at home");
    mumbai();
    puts("I am back home");
}
