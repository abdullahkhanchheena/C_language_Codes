// Factorial of number using recursion
// #include <stdio.h>
// int factorial(int n)
// {
// if (n == 1 || n == 0)   //base check
//     {
//         return 1;
//     }

//     return n*factorial(n-1);
// }
// int main()
// {
//     int n;
//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     int fact = factorial(n);
//     printf("\nFactorial of %d is: %d", n, fact);
//     return 0;
// }
//////////////////////////////////////////////
// Printing numbers from n to 1
// #include <stdio.h>
// int decreasing(int n)
// {
//     if (n==0) //base check
//     {
//         return 0;
//     }
//     printf("%d ", n);
//     decreasing(n-1);
//     return 0;
// }
// int main()
// {
//     int n;
//     printf("Enter a Number:");
//     scanf("%d", &n);
//     decreasing(n);
//     return 0;
// }
//////////////////////////////////
// Printing from 1 to n by parameterized other variable
// #include <stdio.h>
// int increasing(int x, int n)
// {
//     if (x>n) //base check
//     {
//         return 0;
//     }
//     printf("%d ", x);
//     increasing(x+1,n);
//     return 0;
// }
// int main()
// {
//     int n;
//     printf("Enter a Number:");
//     scanf("%d", &n);
//     increasing(1, n);
//     return 0;
// }
/////////////////////////////////////////////
// Printing from 1 to n without other parameter
// #include <stdio.h>
// int increasing(int n)
// {
//     if (n == 0) // base check
//     {
//         return 0;
//     }
//     increasing(n-1);
//     printf("%d ", n);
//     return 0;
// }
// int main()
// {
//     int n;
//     printf("Enter a Number:");
//     scanf("%d", &n);
//     increasing(n);
//     return 0;
// }
//////////////////////////////////////
// printing decreasing and increasing
// #include <stdio.h>
// int inc_dec(int n)
// {
//     if (n == 0) // base case
//     {
//         return 0;
//     }

//     printf("%d ", n);
//     inc_dec(n - 1);
//     printf("Increasing: %d ", n);
//     return 0;
// }
// int main()
// {
//     int n;
//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     inc_dec(n); // calling increasing and decreasing
//     return 0;
// }
//////////////////////////////////////
// printing sum from 1 to n (parameter)
// #include <stdio.h>
// int sum(int n, int s)
// {
//     if (n==0)
//     {
//         printf("Sum is: %d", s);
//         return 0;
//     }
//     sum(n-1, s+n);
//     return 0;
// }
// int main()
// {
//    int n;
//    printf("Enter Number: ");
//    scanf("%d", &n);
//    sum(n, 0);
//    return 0;  
// }
