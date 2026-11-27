#include <stdio.h>

int main()
{
    int m, n, accounts[100][100];
    int sum, max = 0;

    printf("Enter number of customers and banks: ");
    scanf("%d %d", &m, &n);

    printf("Enter account balances:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &accounts[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        sum = 0;

        for (int j = 0; j < n; j++)
        {
            sum = sum + accounts[i][j];
        }

        if (sum > max)
        {
            max = sum;
        }
    }

    printf("Richest Customer Wealth = %d", max);

    return (0);
}
