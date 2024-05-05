#include <stdio.h>
#include "multiplicationFunction.h"

int main(void) {
    int numberToDoMultiplication, multiplicationResult = 1;

    printf("Put the number that you want to know his multiplications: ");
    scanf("%i",&numberToDoMultiplication);

    for (int i = 0; i < 11; ++i) {

        multiplicationResult = multiplicationOperation(numberToDoMultiplication, i);
        printf("%d * %d = %d\n", numberToDoMultiplication, i, multiplicationResult);
    }

    return 0;
}
