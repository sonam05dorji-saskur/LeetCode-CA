

#include <stdlib.h>

double* convertTemperature(double celsius, int* returnSize) {

    double *result = malloc(2 * sizeof(double));

    result[0] = celsius + 273.15;
    result[1] = celsius * 1.8 + 32;

    *returnSize = 2;

    return result;
}