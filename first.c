#include <stdio.h>
int main()
{
<<<<<<< HEAD
    printf("car");
    printf("bike");

    printf("pen");
    printf("cycle");
=======
    int n, reversed = 0, remainder, original;
    printf("hello world");
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
>>>>>>> f5b0f9a8c177c90d1f2546aad32db8014b03d8e0
}