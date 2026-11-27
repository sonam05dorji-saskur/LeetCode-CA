#include <stdio.h>

char** fizzBuzz(int n, int* returnSize)
{
    static char* answer[10001];
    static char* result[10001];

    *returnSize = n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            answer[i - 1] = "FizzBuzz";
        }
        else if (i % 3 == 0)
        {
            answer[i - 1] = "Fizz";
        }
        else if (i % 5 == 0)
        {
            answer[i - 1] = "Buzz";
        }
        else
        {
            char* str = result[i - 1];
            static char numbers[10001][12];
            sprintf(numbers[i - 1], "%d", i);
            answer[i - 1] = numbers[i - 1];
        }
    }

    return answer;
}