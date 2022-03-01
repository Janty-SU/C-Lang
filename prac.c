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

    return 0;
}
