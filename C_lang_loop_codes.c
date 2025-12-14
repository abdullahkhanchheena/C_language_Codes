// ///////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     printf("Hello\n*\n");
//     printf("*\n");
//   }
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////
// // armstrongnumber
// #include <stdio.h>
// int main()
// {
//   int total_sum = 0;
//   int sum = 1;
//   int num = 153;
//   int last_digit;
//   int temp_last;
//   int remaining_digit = num;
//   int length = 1;
//   while (remaining_digit / 10 != 0)
//   {
//     length++;
//     remaining_digit /= 10;
//   }
//   printf("length : %d\n", length);
//   remaining_digit = num;
//   int x = length;
//   while (x >= 1)
//   {
//     last_digit = remaining_digit % 10;
//     remaining_digit /= 10;
//     int count = 1;
//     sum = 1;
//     while (count <= length)
//     {
//       sum *= last_digit;
//       count++;
//     }
//     total_sum += sum;
//     x--;
//   }
//   printf("total sum : %d", total_sum);

//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////////
// // Square Table
// #include <stdio.h>
// int main()
// {
//   int num = 1, limit;
//   printf("Table of square\n");
//   printf("Enter Limit = ");
//   scanf("%d", &limit);
//   printf("\n Number    Square\n");
//   while (num <= limit)
//   {
//     printf("%5d   %6d\n", num, num * num);
//     num++;
//   }
//   return 0;
// }
// /////////////////////////////////////////////////////////////////////////////////////////////////
// // number 6 divided by 4
// #include <stdio.h>
// int main()
// {
//   int num;
//   num = 6;
//   while (num <= 1000)
//   {
//     if (num % 4 == 0)
//     {
//       printf("%d\n", num);
//     }
//     num += 2;
//   }
//   return 0;
// }
// ////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int integer, temp, target = 1;

//   printf("Enter Integer: ");
//   scanf("%d", &integer);

//   while (target <= integer)
//   {
//     temp = integer;

//     while (temp != 1)
//     {
//       if (temp % 2 == 0)
//         temp = temp / 2;
//       else
//         temp = (3 * temp) + 1;

//       if (temp == target)
//       {
//         printf("%d ", target);
//         break;
//       }
//     }

//     if (target == integer)
//       break;
//     target++;
//   }
//   printf("\n");
//   return 0;
// }
// ////////////////////////////////////////////////////////////////////////////////////////////////////////
// // points game
// #include <stdio.h>
// int main()
// {
//   int total;
//   int points;
//   printf("Enter points earned (-1 to quit): ");
//   scanf("%d", &points);
//   while (points != -1)
//   {
//     total += points;
//     printf("Enter points earned (-1 to quit): ");
//     scanf("%d", &points);
//   }
//   printf("\nTotal = %d\n", total);
//   return 0;
// }
// /////////////////////////////////////////////////////////////////////////////////////////////////////
// // Star printing
// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     for (int j = 1; j <= 5; j++)
//     {
//       printf("*");
//     }

//     printf("\n");
//   }
//   return 0;
// }
// /////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   for (int row = 1; row <= 3; row++)
//   {
//     for (int col = 1; col <= 3; col++)
//     {
//       printf("%d", row * col);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// ////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 5; ++i)
//   {
//     for (int j = 1; j <= 5; ++j)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }
// /////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }
// /////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   for (int i = 5; i >= 1; i--)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }
// //////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     for (int j = 1; j <= 10; j++)
//     {
//       printf(" %d", i * j);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int i, j;
//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= 5; j++)
//     {
//       printf("%3d", i);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     for (int j = (i + 1); j <= 5; j++)
//     {
//       printf("%3d", j);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     for (int j = (i + 1); j <= 5; j++)
//     {
//       printf("%3d", j);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 3; i++)
//   {
//     for (int j = 1; j <= 3; j++)
//     {
//       for (int k = 1; k <= 4; k++)
//       {
//         printf("*");
//       }
//       printf("\n");
//     }
//     printf("\n");
//   }
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   const int M = 10;
//   const int N = 10;
//   int i, j;
//   for (i = 1; i <= M; i++)
//   {
//     for (j = 1; j <= N; j++)
//     {
//       printf("%3d", M * (i - 1) + j);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 7; i++)
//   {
//     for (int j = 7; j >= i; j--)
//     {
//       printf("*");
//     }

//     printf("\n");
//   }

//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int i = 0;

//   printf("Numbers from 1 to 10\n");
//   while (i <= 10)
//   {
//     printf("%d ", i);
//     i++;
//   }

//   printf("\n");

//   i = 10;
//   printf("\nNumbers from 10 to 0\n");

//   while (i >= 0)
//   {
//     printf("%d ", i);
//     i--;
//   }
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int number, sum = 0;

//   printf("Enter Integer (enter 0 to stop):\n");

//   while (1)
//   {
//     printf("Input Number: ");
//     scanf("%d", &number);

//     if (number == 0)
//     {
//       break;
//     }
//     if (number > 0)
//     {
//       sum += number;
//     }
//   }
//   printf("Sum of positive integers: %d", sum);
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int i = 1;
//   int product = 1;

//   while (i <= 5)
//   {
//     product *= i;
//     printf("Current Numer:%d   Current Product: %d\n", i, product);
//     i++;
//   }
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   long number;
//   int i = 1;
//   long long factorial = 1;

//   printf("Enter Number: ");
//   scanf("%d", &number);

//   if (number < 0)
//   {
//     printf("Error: Enter non-negative integer!");
//   }

//   while (i <= number)
//   {
//     factorial *= i;
//     i++;
//   }
//   printf("Factorial: %lld\n", factorial);
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int limit;
//   int i = 2, sum = 0;

//   printf("Enter Limit Number:");
//   scanf("%d", &limit);

//   while (i <= limit)
//   {
//     sum += i * i * i;
//     i += 2;
//   }

//   printf("\nSum of even cubes upto %d is: %d\n", limit, sum);
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int num;
//   num = 0;
//   do
//   {
//     printf("%d\n", num);
//     num += 5;
//   } while (num <= 20);
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int num, fac = 1, count = 1;
//   printf("Enter a Number: ");
//   scanf("%d", &num);
//   while (count <= num)
//   {
//     fac *= count;
//     count++;
//   }
//   printf("Factorial of %d is %d\n", num, fac);
//   return 0;
// }

// #include <stdio.h>

// int main()
// {
//   int i, j;

//   // Outer loop controls the number of rows
//   for (i = 1; i <= 9; i++)
//   {

//     // First inner loop prints leading spaces
//     for (j = 1; j <= (9 - i); j++)
//     {
//       printf(" ");
//     }

//     // Second inner loop prints ascending numbers (1 to i)
//     for (j = 1; j <= i; j++)
//     {
//       printf("%d", j);
//     }

//     // Third inner loop prints descending numbers (i-1 to 1)
//     for (j = i - 1; j >= 1; j--)
//     {
//       printf("%d", j);
//     }

//     // Move to the next line after each row
//     printf("\n");
//   }

//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int pre1, pre2, current;
//   int counter, nthfibnonacci;
//   printf("Enter the First two Fibnocci numbers: ");
//   scanf("%d %d", &pre1, &pre2);
//   printf("The first two fibnocci numbers are %d and %d\n", pre1, pre2);
//   printf("Enter the desired fibnocci number: ");
//   scanf("%d", &nthfibnonacci);
//   if (nthfibnonacci == 1)
//   {
//     current = pre1;
//   }
//   else if (nthfibnonacci == 2)
//   {
//     current = pre2;
//   }
//   else
//   {
//     counter = 3;
//     while (counter <= nthfibnonacci)
//     {
//       current = pre1 + pre2;
//       pre1 = pre2;
//       pre2 = current;
//       counter++;
//     }
//   }
//   printf("The Fibnocci number at position %d is %d\n", nthfibnonacci, current);
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int score;
//   do
//   {
//     printf("Enter Score between 0 and 50: ");
//     scanf("%d", &score);
//     printf("\n");
//   } while (score > 0 && score < 50);
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int num = 7, limit = 1000;
//   while (num < 1000)
//   {
//     printf("%d\n", num);

//     num += 7;
//   }

//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int num;
//   num = 6;
//   while (num <= 1000)
//   {
//     if (num % 4 == 0)
//     {
//       printf("%d\n", num);
//     }
//     num += 2;
//   }
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int num, sum = 0;
//   printf("Enter number: ");
//   scanf("%d", &num);
//   do
//   {
//     sum = sum + num % 10;
//     num /= 10;
//   } while (num > 0);
//   {
//     printf("The sum of digits = %d\n", sum);
//     if (sum % 3 == 0)
//     {
//       printf("%d is divisible by 3\n", sum);
//     }
//     else
//     {
//       printf("%d is not divisible by 3\n", sum);
//     }
//     if (sum % 9 == 0)
//     {
//       printf("%d is divisible by 9\n", sum);
//     }
//     else
//     {
//       printf("%d is not divisible by 9\n", sum);
//     }
//   }
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int num, count, sum;
//   num = 6;
//   count = 1000;
//   while (num < count)
//   {
//     if (num > 5)
//     {
//       num += 2;
//       sum += num;
//     }
//   }
//   printf("Sum of evens between 5 and 1000 is %d", sum);
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int i = 6;
//   int sum = 0;
//   while (i <= 1000)
//   {
//     sum += i;
//     i += 2;
//   }
//   printf("Sum of even numbers is %d\n", sum);
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//   int n = 7;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       printf("%d ", j);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////

// Fabonacci Nmbers
// #include <stdio.h>
// int main()
// {
//     // Declaring variables
//     int previous1, previous2, current;
//     int counter, nthfabonacci;

//     // taking first two numbers
//     printf("Enter First Fabonacci Number: ");
//     scanf("%d", &previous1);
//     printf("Enter Second Fabonacci Number: ");
//     scanf("%d", &previous2);

//     // Showing first two numbers
//     printf("\nFirst two Fabonacci Numbers are: %d and %d:\n", previous1, previous2);

//     // Taking desired number fro user
//     printf("Enter desired Fabonacci Number: ");
//     scanf("%d", &nthfabonacci);

//     // Applying conditions and Operations
//     if (nthfabonacci == 1)
//     {
//         current = previous1;
//     }
//     else if (nthfabonacci == 2)
//     {
//         current == previous2;
//     }
//     else
//     {
//         counter = 3;
//         while (counter <= nthfabonacci)
//         {
//             current = previous2 + previous1;
//             previous1 = previous2;
//             previous2 = current;
//             counter++;
//         } // end while
//     } // end else
//     printf("\nThe Fabonacci number at position %d is %d: .\n", nthfabonacci, current);
//     return 0;
// }