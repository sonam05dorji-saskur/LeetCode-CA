#include <stdio.h>

int main()
{
    int n, nums[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 1; i < n; i++)
    {
        nums[i] = nums[i] + nums[i - 1];
    }

    printf("Running Sum: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    return (0);
}
