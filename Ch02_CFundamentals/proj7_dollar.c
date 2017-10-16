#include <stdio.h>

int main(void)
{
    int input_dollar, unit;
    int cnt_20 = 0, cnt_10 = 0, cnt_5 = 0, cnt_1 = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &input_dollar);

    cnt_20 = input_dollar / 20;
    input_dollar %= 20;
    cnt_10 = input_dollar / 10;
    input_dollar %= 10;
    cnt_5 = input_dollar / 5;
    input_dollar %= 5;
    cnt_1 = input_dollar;

    printf("$20 bills: %d\n", cnt_20);
    printf("$10 bills: %d\n", cnt_10);
    printf(" $5 bills: %d\n", cnt_5);
    printf(" $1 bills: %d\n", cnt_1);

    return 0;
}
