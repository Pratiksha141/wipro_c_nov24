#include <stdio.h>
int nonStaticFunction() {
    int i = 0;
    i += 2;
    return i;
}
int staticFunction() {
    static int i = 0;
    i += 2;
    return i;
}
int main() {
    int var = 0;

    var = nonStaticFunction();
    printf("Var = %d \n", var);
    var = nonStaticFunction();
    printf("Var = %d \n", var);
    var = nonStaticFunction();
    printf("Var = %d \n", var);

    var = staticFunction();
    printf("Var = %d \n", var);
    var = staticFunction();
    printf("Var = %d \n", var);
    var = staticFunction();
    printf("Var = %d \n", var);
}