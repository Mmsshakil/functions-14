#include <stdio.h>

int sum() // here i made the function named sum without peremeter
{
    int x, y;
    scanf("%d %d", &x, &y); // i take value inside of the fuction, i didn't take value from main function
    int ans = x + y;
    return ans;
}

int main()
{

    int final = sum(); // here i call the function without parameter

    printf("%d", final);

    return 0;
}