/**
 * @file prac.c
 * @author Jayanth
 * @brief  Area of the circle
 * @version 0.1
 * @date 2022-03-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
int main()
{
    int r;
    float pi = 3.14;
    printf("enter the radius of the circle:");
    scanf("%d", &r);

    float area = (pi * r * r);

    printf("the area of the circle is : %f", area);

    /* This is the area of the triangle*/
    int h, b;
    printf("enter the hieght and base  of the triangle:");
    scanf("%d %d", &b, &h);

    int area = (h * b) / 2;

    printf("the area of the circle is : %d", area);

    /* this is the factorial of the number  0, 1, 1, 2, 3, 5, 8, 13, 21 series */
    int num1 = 0, num2 = 1, term, sum;
    printf("enter the no of the terms in fibo series:");
    scanf("%d", &term);
    printf("%d\t %d \t", num1, num2);
    for (int i = 2; i <= term; i++)
    {
        sum = num1 + num2;
        printf("%d \t", sum);
        num1 = num2;
        num2 = sum;
    }

    return 0;
}
