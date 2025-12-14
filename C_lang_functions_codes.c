// /////////////////////////////////////////////////////////////////////////
// // parring argument
// #include <stdio.h>
// void greetuser(char name[])
// {
//     printf("Hello, %s\n", name);
// }
// int main()
// {
//     greetuser("Ali Imran");
//     greetuser("Sana Khan");
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// void greet()
// {
//     printf("Good Morinig\n");
//     printf("How are you?\n");
//     return;
// }
// int main()
// {
//     greet();
//     greet();

//     return 0;
// }
// /////////////////////////////////////////////////////////////
// //absolute value
// #include<stdio.h>
// int absvalue(int number)
// {
//     if(number < 0)
//     {
//         number = -number;
//     }
//     return number;
// }
// int main()
// {
//     int n;
//     printf("Enter Number: ");
//     scanf("%d", &n);
//     printf("Absolute value of %d is %d\n", n, absvalue(n));
//     return 0;
// }
// ///////////////////////////////////////////////////////////////
// //actual parameter
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     double u = 2.5;
//     double v = 3.0;
//     double x, y;

//     x = pow(u, v);
//     y = pow(2.5, 3.0) + 5.1;
//     printf("%.1f the power of 7 = %.2f\n", u, pow(u, 7));
//     return 0;
// }

// //boolen
// #include<stdio.h>
// #include <stdbool.h>
// bool iseven(int x)
// {
//     if(x % 2 == 0)
//     {
//         return true;
//     }else
//     {
//         return false;
//     }
// }
// int main()
// {
//     int number;
//     printf("Enter Number: ");
//     scanf("%d", &number);
//     if(iseven(number))
//     {
//         printf("It is Even Number %d", number);
//     }else
//     {
//         printf("It is odd Number %d");
//     }
//     return 0;
// }

// //combination NCR
// #include <stdio.h>
// int factroial(int x)
// {
//     int fact = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         fact = fact*i;
//     }
//     return fact;
// }
// int main()
// {
//     int n, r;
//     printf("Enter N : ");
//     scanf("%d", &n);
//     printf("Enter r: ");
//     scanf("%d", &r);
//     int nfact = factroial(n);
//     int rfact = factroial(r);
//     int nrfact = factroial(n-r);

//     int ncr = factroial(n)/(factroial(r)*factroial(n-r));
//     printf("Cobmination is: %d\n", ncr);
//     return 0;
// }

// // double numnber
// #include <stdio.h>
// int doublethenumber(int num)
// {
//     int temp;
//     temp = num + num;
//     return temp;
// }
// int main()
// {
//     int x;
//     printf("Entner number: ");
//     scanf("%d", &x);
//     int result = doublethenumber(x);
//     printf("Original number is %d\nDouble number is %d", x, result);
//     return 0;
// }

// //HCF and GCD
// #include<stdio.h>
// int min(int a, int b)
// {
//     if(a<b) return a;
//     else
//     return b;
// }
// int gcd(int a, int b)
// {
//     int hcf;
//     for(int i = 1;i < min(a ,b); i++)
//     {
//         if(a%i == 0 && b%i == 0);
//         {
//         hcf = i;
//         }
//     }
//     return hcf;
// }
// int main()
// {
//     int a,b;
//     printf("Enter first number: ");
//     scanf("%d", &a);
//     printf("Enter second number: ");
//     scanf("%d", &b);
//     int hcf;
//     hcf = gcd(a,b);
//     printf("The HCF/GCD of %d and %d is: %d", a,b,hcf);
//     return 0;
// }

// //square root
// #include <stdio.h>
// #include <math.h>
// int square(int num)
// {
//     int result = num * num;
//     return result;
// }

// int main()
// {
//     int x;
//     printf("Enter Number: ");
//     scanf("%d", &x);
//     int sq = square(x);
//     printf("The Square of %d is: %d\n", x, sq);
//     return 0;
// }
////////////////////////////////////////////////
// //libraries
// #include<stdio.h>
// #include<math.h>
// #include<ctype.h>
// #include<stdlib.h>
// int main()
// {
//     int x;
//     double u, v;
//     printf("Line 1: Uppercase a is %c\n", (char)toupper('a'));

//     u = 4.2;
//     v = 3.0;

//     printf("Line 4: %.1f to the power of %.1f = %.3f\n", u, v, pow(u, v));
//     printf("Line 5: 5.0 to the power of 4 = %.0f\n", pow(5.0, 4));

//     u = u + pow(3.0, 3);
//     printf("Line 7: u = %.1f\n", u);
//     x = -15;
//     printf("Line 9: absolute valvue of %d = %d\n", x, abs(x));
//     return 0;
// }

// // max of three
// #include <stdio.h>
// double maximum(double , double, double)
// int main()
// {
//     double number1, number2, number3;
//     printf("Enter three floating-point numbers: ");
//     scanf("%1f %1f %1f", &number1, &number2, &number3);
//     printf("Maximum is: %1f", maximum(number1, number2, number3));
//     return 0;
// }
// double maximum(double x, double y, double z)
// {
//     double max = x;
//     if(y > max)
//     {
//         max = y;
//     }
//     if(z > max)
//     {
//         max = z;
//     }

//     return max;
// }

// // pascal trianlge
// #include <stdio.h>
// int factroial(int x)
// {
//     int fact = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         fact = fact*i;
//     }
//     return fact;
// }
// int combination(int n, int r)
// {
//     int ncr = factroial(n)/(factroial(r)*factroial(n-r));
//     return ncr;
// }
// int main()
// {
//     int n;
//     printf("Enter N:");
//     scanf("%d", &n);
//     for (int i = 0; i <=n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             int icj = combination(i,j);
//             printf("%d ", icj);
//         }

//         printf("\n");
//     }

//     return 0;
// }
// // sum of two
// #include <stdio.h>
// int sum(int a, int b)
// {
//     int sum = a+b;
//     return sum;
// }
// int main()
// {
//     int a, b;
//     printf("Enter 1st number: ");
//     scanf("%d", &a);
//     printf("Enter 2nd nubmer: ");
//     scanf("%d", &b);
//     sum( a, b);
//     printf("The sum is: %d", sum(a, b));
//     return 0;
// }