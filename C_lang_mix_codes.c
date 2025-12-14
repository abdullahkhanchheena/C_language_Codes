// // #include <stdio.h>
// // int main()
// // {
// // #include <limits.h>
// // #include <math.h>
// // #include <ctype.h>

// // TIME CONVERTER
// //  int o_seconds;
// //  printf("Enter time in seconds: ");
// //  scanf("%d", &o_seconds);
// //  int hours, minutes, seconds;
// //  hours = o_seconds / 3600;
// //  minutes = o_seconds % 3600 / 60;
// //  seconds = o_seconds % 60;
// //  printf("%d Seconds = %d Hours %d Minutes %d Seconds", o_seconds, hours, minutes, seconds);

// // int num1, num2, num3;
// // printf("Enter NUmber1: ");
// // scanf("%d", &num1);
// // printf("Enter NUmber2: ");
// // scanf("%d", &num2);
// // printf("Enter NUmber3: ");
// // scanf("%d", &num3);
// // int first, second, third;
// // if (num1 <= num2 && num1 <= num3)
// // {
// //     first = num1;
// //     if (num2 <= num3)
// //     {
// //         second = num2;
// //         third = num3;
// //     }
// //     else
// //     {
// //         second = num3;
// //         third = num2;
// //     }
// // }
// // else if (num2 <= num1 && num2 <= num3)
// // {
// //     first = num2;
// //     if (num1 <= num3)
// //     {
// //         second = num1;
// //         third = num3;
// //     }
// //     else
// //     {
// //         second = num3;
// //         third = num1;
// //     }
// // }
// // else if (num3 <= num1 && num3 <= num2)
// // {
// //     first = num3;
// //     if (num1 <= num2)
// //     {
// //         second = num1;
// //         third = num2;
// //     }
// //     else
// //     {
// //         second = num2;
// //         third = num3;
// //     }
// // }
// // printf("num1 = %d, num2 = %d, num = %d\n", num1, num2, num3);
// // printf("Sorted Numbers: %d, %d, %d", first, second, third);

// // ONLINE FOOD DELIEVERY
// //     float order, delivery = 0.0, discount = 0.0, t_bill = 0.0;
// //     int holiday = 0;
// //     printf("Enter Order: ");
// //     scanf("%f", &order);
// //     printf("Today is Holiday(1 or 0): ");
// //     scanf("%d", &holiday);
// //     if (holiday == 1)
// //     {
// //         printf("\nSpecial Sunday Deal!\n");
// //         delivery = 0;
// //         if (order >= 3000)
// //         {
// //             discount = order * 0.2;
// //         }
// //     }
// //     else if (order >= 3000)
// //     {
// //         delivery = 0;
// //         discount = 0.1 * order;
// //     }
// //     else if (order >= 1500 && order < 3000)
// //     {
// //         delivery = 100;
// //     }
// //     else if (order >= 1000 && order < 1500)
// //     {
// //         delivery = 200;
// //     }
// //     else if (order < 1000)
// //     {
// //         delivery = 300;
// //     }
// //     t_bill = order + delivery - discount;
// //     printf("\nOrder Value: %.2f\n", order);
// //     printf("Discount: %.2f\n", discount);
// //     printf("Delivery: %.2f\n", delivery);
// //     printf("Final Amount: %.2f\n", t_bill);

// // LCM
// // int num1, num2, lcm;
// // printf("Enter Number1: ");
// // scanf("%d", &num1);
// // printf("Enter Number2: ");
// // scanf("%d", &num2);
// // lcm = (num1 > num2) ? num1 : num2;
// // while (1)
// // {
// //     if (lcm % num1 == 0 && lcm % num2 == 0)
// //     {
// //         printf("The lcm of %d and %d is: %d", num1, num2, lcm);
// //         break;
// //     }
// //     lcm++;
// // }

// // BRT TICKET SYSTEM
// //  int t_seats = 15, ticket = 60;
// //  int t_revenue = 0, pedestrian = 0, bookseat = 0;

// //  while (bookseat < t_seats)
// // {
// //     pedestrian++;
// //     if (pedestrian % 4==0)
// //     {
// //         bookseat++;
// //         t_revenue+=ticket;
// //         printf("Passenger boked seat#%d, Total Revenue: %d\n",bookseat, t_revenue);
// //     }
// // }
// // printf("bus is full booking closed!");
// // printf("total revenue: %d\n", t_revenue);

// // multiples of 3 and 5
// // int a = 3, b = 5;
// // int sum = 0;
// // for (int i = 1; i <= 1000; i++)
// // {
// //     if (i % 3 == 0 || i % 5 == 0)
// //     {
// //         sum += i;
// //     }
// // }
// // printf("Sum of all multiples of 3 and 5 below 1000 is %d", sum);

// // POWER CACULATOR

// // long long base, exponent;
// // printf("Enter Base:");
// // scanf("%lld", &base);
// // printf("Enter Exponent: ");
// // scanf("%lld", &exponent);
// // long long result = 1;
// // for (int i = 1; i <= exponent; i++)
// // {
// //     result *= base;
// // }
// // printf("%lld to the power of %lld is: %lld", base, exponent, result);

// // GPA CAlCULATOR
// // int subjects;
// // printf("Enter Number Subject: ");
// // scanf("%d", &subjects);

// // char grade;
// // int credit_hours;
// // float grade_points = 0, t_grade_points = 0;
// // int total_credit_hours = 0;

// // for (int i = 1; i <= subjects; i++)
// // {
// //     printf("\nEnter Grade in subject %d: ", i);
// //     scanf(" %c", &grade);
// //     printf("Enter Credit Hours in subject %d: ", i);
// //     scanf("%d", &credit_hours);
// //     grade = tolower(grade);

// //     if (grade == 'a')
// //     {
// //         grade_points = 4.0;
// //     }
// //     else if (grade == 'b')
// //     {
// //         grade_points = 3.0;
// //     }
// //     else if (grade == 'c')
// //     {
// //         grade_points = 2.0;
// //     }
// //     else if (grade == 'd')
// //     {
// //         grade_points = 1.0;
// //     }
// //     else if (grade == 'f')
// //     {
// //         grade_points = 0.0;
// //     }
// //     else
// //     {
// //         printf("Invlaid Input! try again.");
// //     }
// //     t_grade_points += grade_points * credit_hours;
// //     total_credit_hours += credit_hours;
// // }
// // float gpa = t_grade_points / total_credit_hours;
// // printf("\nTotal Credit Hours: %d\n", total_credit_hours);
// // printf("Total Grade Points: %.2f\n", t_grade_points);
// // printf("Your GPA is: %.2f\n", gpa);

// // EVEN FABONNACI NUMBERS
// // long long f49 = 7778742049;
// // long long f50 = 12586269025;

// // long long a = f49;
// // long long b = f50;

// // int count = 0;

// // printf("Last 10 even fabonacci numbers are:\n");
// // while (count < 10)
// // {
// //     long long previous = b - a;

// //     if (b % 2 == 0)
// //     {
// //         printf("%lld\n", b);
// //         count++;
// //     }
// //     b = a;
// //     a = previous;
// // }

// // CHESS BOARD
// //  for (int i = 1; i <= 8; i++)
// //  {
// //      for (int j = 1; j <= 8; j++)
// //      {

// //         if ((i + j) % 2 == 0)
// //         {
// //             printf("⬛");
// //         }
// //         else
// //         {
// //             printf("⬜");
// //         }
// //     }
// //     printf("\n");
// // }

// // LAP TIME ANALYZER

// // int laps;
// // float time, fastest, slowest, sum = 0;

// // printf("Enter Number of laps: ");
// // scanf("%d", &laps);

// // printf("Enter time lap1: ");
// // scanf("%f", &time);

// // fastest = slowest = time;
// // sum = time;

// // for (int i = 2; i <= laps; i++)
// // {
// //     printf("Enter the time for lap%d: ", i);
// //     scanf("%f", &time);

// //     sum+=time;

// //     if (time < fastest)
// //     {
// //         fastest = time;
// //     }
// //     if (time > slowest)
// //     {
// //         slowest = time;
// //     }
// // }
// // float average = sum/laps;
// // printf("\nfastest lap: %.2f\n", fastest);
// // printf("Slowest lap: %.2f\n", slowest);
// // printf("Average lap time: %.2f\n", average);

// // TRINAGULAR NUMBER GENERATOR

// // int sum;
// // for (int n = 11; n <= 15; n++)
// // {
// //     sum = 0;
// //     for (int j = 1; j <= n; j++)
// //     {
// //         sum += j;
// //         printf("%d", j);
// //         if (j < n)
// //         {
// //             printf("+");
// //         }
// //     }
// //     printf("=%d\n", sum);
// // }

// // PERFECT NUMBERS

// // int sum = 0;

// // printf("perfect numbers between 1 and 500 are:\n");
// // for (int i = 1; i <= 500; i++)
// // {
// //     sum = 0;
// //     for (int j = 1; j < i; j++)
// //     {
// //         if (i % j == 0)
// //         {
// //             sum += j;
// //         }
// //     }
// //         if (sum == i)
// //         {
// //         printf("%d ", i);
// //         }
// // }

// // Smallest Multiple Finder

// // long long num = 1;

// // while (1)
// // {
// //     int divisible = 1;
// //     for (int i = 1; i <= 20; i++)
// //     {
// //         if (num % i != 0)
// //         {
// //             divisible = 0;
// //             break;
// //         }
// //     }

// //     if (divisible == 1)
// //     {
// //         printf("Smallest number divisible by 1 to 20 is: %lld\n", num);
// //         break;
// //     }

// //     num++;
// // }

// // ARRAY REVERSAL

// // int arr[5] = {5,3,7,5,3};
// // int n = 5;

// // printf("\nArray in original order: ");

// // for (int i = 0; i < n; i++)
// // {
// //     printf("%d ", arr[i]);
// // }

// // printf("\nArray in reversed order: ");

// // for (int i = n - 1; i >= 0; i--)
// // {
// //     printf("%d ", arr[i]);
// // }

// // for (int i = 0; i < n/2; i++)
// // {
// //     int temp = arr[i];
// //     arr[i] = arr[n-1-i];
// //     arr[n-1-i] = temp;
// // }

// // printf("\nReversed Array with writing: ");

// // for (int i = 0; i < n; i++)
// // {
// //     printf("%d ", arr[i]);
// // }

// // THIRD LARGEST ELEMENT

// // int n;
// // printf("Enter size of array: ");
// // scanf("%d", &n);
// // int arr[n];

// // for (int i = 0; i < n; i++)
// // {
// //     printf("Element in Index %d is: ", i);
// //     scanf("%d", &arr[i]);
// // }
// // int first = INT_MIN;
// // int second = INT_MIN;
// // int third = INT_MIN;

// // for (int i = 0; i < n; i++)
// // {
// //     int num = arr[i];
// //     if (num > first)
// //     {
// //         third = second;
// //         second = first;
// //         first = num;
// //     }
// //     else if (num > second && num < first)
// //     {
// //         third = second;
// //         second = num;
// //     }
// //     else if (num > third && num < second)
// //     {
// //         third = num;
// //     }
// // }
// // printf("Largest element in Array: %d\n", first);
// // printf("2nd Largest element in Array: %d\n", second);
// // printf("3rd Largest element in Array: %d\n", third);

// // ARRAY COMPRESSION

// // int first[5] = {51, 2, 37, 7, 45};
// // int second[5] = {51, 2, 45, 1, 6};

// // int samecount = 0;
// // int comon = 0;

// // for (int i = 0; i < 5; i++)
// // {
// //     if (first[i] == second[i])
// //     {
// //         samecount++;
// //     }
// // }

// // for (int i = 0; i < 5; i++)
// // {
// //     for (int j = 0; j < 5; j++)
// //     {
// //         if (second[i] == first[j])
// //         {
// //             comon++;
// //         }
// //     }
// // }

// // printf("Number of elements with same position and value: %d\n", samecount);
// // printf("Number of common elements on both arrays: %d\n", comon);

// // ARRAY REVERSEL

// // int arr[5] = {5, 10, 15, 20, 25};

// // printf("Original Array: ");
// // for (int i = 0; i< 5; i++)
// // {
// //     printf("%d ", arr[i]);
// // }

// // for (int i = 0; i < 5/2; i++)
// // {
// //     int temp = arr[i];
// //     arr[i] = arr[5-1-i];
// //     arr[5-1-i] = temp;
// // }

// // printf("\nReversed Array: ");

// // for (int i = 0; i < 5; i++)
// // {
// //     printf("%d ", arr[i]);
// // }

// /// temperature checker

// // void tempcontrol(float temp, char choice)
// // {
// //     do
// //     {
// //          if (temp > 37)
// //         {
// //             printf("Invalid temperature! try again\n");
// //         }
// //         if (temp > 24 && temp < 37)
// //         {
// //             printf("Cooling\n");
// //         }
// //         else if (temp < 22)
// //         {
// //             printf("Heating\n");
// //         }
// //         else if (temp >= 22 && temp <= 24)
// //         {
// //             printf("Comfort mode\n");
// //         }

// //         printf("Do you want to chack again?(y or n):");
// //         scanf(" %c", &choice);
// //         if (choice =='y')
// //         {
// //             printf("Enter temperature again: ");
// //             scanf("%f", &temp);
// //         }

// //     } while (choice == 'y');
// // }
// // int main()
// // {
// //     float temp;
// //     char choice;
// //     printf("Enter Temperature: ");
// //     scanf("%f", &temp);

// //     choice = 'y';
// //     tempcontrol(temp, choice);
// //     return 0;
// // }

// // FITNESS TRACKER DATA ANALYSIS

// // int days;
// // printf("Enter steping days: ");
// // scanf("%d", &days);

// // int steps[days];
// // for (int i = 0; i < days; i++)
// // {
// //     printf("Enter Steps for day%d: ", i + 1);
// //     scanf("%d", &steps[i]);
// // }

// // int stepsum = 0;
// // for (int i = 0; i < days; i++)
// // {
// //     stepsum += steps[i];
// // }

// // int goalset;
// // printf("\nEnter your weekly step goal: ");
// // scanf("%d", &goalset);

// // printf("Total Steps: %d\n", stepsum);

// // float average = (float)stepsum / days;
// // printf("Average daily step: %.2f", average);

// // int max = steps[0], maxindex = 0;
// // for (int i = 0; i < days; i++)
// // {
// //     if (steps[i] > max)
// //     {
// //         max = steps[i];
// //         maxindex = i;
// //     }
// // }

// // printf("\nHighest Step was on day: %d\n", maxindex + 1);

// // if (stepsum >= goalset)
// // {
// //     printf("Great Job! you have met your goal\n");
// // }
// // else
// // {
// //     printf("you dont met the goal!");
// // }

// ////////////////////////////////////////////////////////////////////////
// // POINTERS

// // int a = 5;
// // int *p;
// // p =&a;

// // printf("address of a: %p\n", &a);
// // printf("value of a: %d\n", a);
// // printf("adress of p: %p\n", &p);
// // printf("Value of p: %d\n", *p);
// // printf("adress of a in p: %p\n", p);

// // *p = 8;
// // printf("\n\n");
// // printf("Nw value of a: %d\n", a);
// // printf("new value in pointer: %d\n", *p);

// // int a = 1025;
// // int *p;
// // p = &a;
// // printf("Size of integer: %d\n", sizeof(int));
// // printf("Address of a: %p\n", &a);
// // printf("Value of a: %d\n", a);

// // printf("\nAddress of a: %p\n", &p);
// // printf("Address keeping P is: %p\n", p);
// // printf("Value of a: %d\n", *p);

// // printf("\nAddress of P on upcoming: %p\n", p + 1);
// // printf("Value on upcoming Address: %d\n", *(p + 1));

// // char *p1;
// // p1 = (char *)p;
// // printf("Size of char is: %d\n", sizeof(char));
// // printf("Address of a: %p\n", p1);
// // printf("Value of a: %d\n", *p1);

// // printf("\n\n");
// // void *p0;
// // p0 = p;
// // printf("Address of p0: %p", p0);

// // int a = 10;
// // int *p = &a;
// // int **q = &p;
// // int ***r = &q;

// // ***r = 90;
// // printf("value of a: %d\n", a);
// // printf("value of *p: %d\n", *p);
// // printf("value of **q: %d\n", **q);
// // printf("value of ***r: %d\n", ***r);

// // printf("\nAddresses of All:\n");

// // printf("Address of a: %p\n", &a);
// // printf("Address of &p: %p\n", p);
// // printf("Address of &q: %p\n", q);
// // printf("Address of &r: %p\n", r);
// //     return 0;
// // }

// /////////////////////////////////////////////////////////////////////////

// // #include <stdio.h>

// // void increment(int *p)
// // {
// //     *p = *p+1;
// // }
// // int main()
// // {
// //     int a;
// //     a = 10;
// //     printf("a = %d\n", a);
// //     increment(&a);
// //     printf("a = %d\n", a);
// //     return 0;
// // }

// ////////////////
// // #include <stdio.h>
// // int main()
// // {
// //     int a[] = {2, 4, 5, 8, 1};
// //     int i = 0;
// //     for ( i = 0; i < 5; i++)
// //     {
// //         printf("Addess = %p\n", &a[i]);
// //         printf("Addess = %p\n", a+i);
// //         printf("value = %d\n", a[i]);
// //         printf("value = %d\n", *(a+i));

// //     }
// //     return 0;
// // }
// ///////////////////
// // #include <stdio.h>
// // int main()
// // {
// //     int A[] = {2, 4, 5, 8, 1};
// //     int *p;
// //     p = A;
// //     for (int i = 0; i < 5; i++)
// //     {

// //         printf("%d Cycle\n", i+1);
// //         printf("Address of Array A[%d]: %p\n", i, &A[i]);
// //         printf("Value in Array A[%d]: %d\n", i, A[i]);
// //         printf("Address of %d pointer: %p\n", i, p );
// //         printf("Value in pointer: %d\n", *p);
// //         printf("\n");
// //         p++;
// //     }

// //     return 0;
// // }

// //////////////////////////////////////////
// // #include <stdio.h>
// // int sumofelements(int *A, int size)
// // {
// //     int sum = 0;
// //     for (int i = 0; i < size; i++)
// //     {
// //         sum+=A[i];
// //     }
// //     return sum;
// // }
// // int main()
// // {
// //     int A[] = {1,2,3,4,5};
// //     int size = sizeof(A)/sizeof(A[0]);
// //     int total = sumofelements(A, size);
// //     printf("\nSum of elements = %d\n", total);
// //     return 0;
// // }

// ////////////////////////////////////////////////
// // #include <stdio.h>
// // void Double(int *A, int size)
// // {
// //     int sum = 0;
// //     for (int i = 0; i < 5; i++)
// //     {
// //         A[i] = 2*A[i];
// //     }
// // }
// // int main()
// // {
// //     int A[] = {1,2,3,4,5};
// //     int size = sizeof(A)/sizeof(A[0]);
// //     Double(A, size);
// //     for (int i = 0; i < 5; i++)
// //     {
// //         printf("%d ", A[i]);
// //     }
// //     return 0;
// // }
// ////////////////////////////////////////////////////////////////////////////////////////
// //brt bus ticket
// #include <stdio.h>
// int main()
// {
//     int total_seats = 15;
//     int book_seats = 0;
//     int ticket_price = 60;
//     int total_revenue = 0;
//     int pedestrian = 0;
//     while(book_seats < total_seats)
//     {
//         pedestrian++;
//         if(pedestrian % 4 == 0)
//         {
//             book_seats++;
//             total_revenue+= ticket_price;
//             printf("Booked Seat #%d, Total Revenue:%d\n", book_seats, total_revenue);
//         }
//     }
//     printf("Bus is Full. Bus is Closed\n");
//     printf("Total Revenue Collected:%d", total_revenue);
//     return 0;
// }
// ///////////////////////////////////////////////////////////////
// //reverse string
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     printf("Enter any String: ");
//     scanf("%[^\n]", str);
//     int size = 0;
//     int k = 0;
//     while (str[k] != '\0')
//     {
//         size++;
//         k++;
//     }
//     for (int i = 0, j = size - 1; i <= j; i++, j--)
//     {
//         char temp;
//         temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }
//     puts("the reverse string is: ");
//     puts(str);
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////
// //food deleivery
// #include <stdio.h>
// int main()
// {
//     float order, discount, delievery, total;
//     int holiday;
//     printf("------------------------------------\n");
//     printf("-----Welcome to Fast Food Cafe-----\n");
//     printf("Enter you order:");
//     scanf("%f", &order);
//     printf("Today is Holiday?(1 or 0));");
//     scanf("%d", &holiday);
//     //if sunday
//     if(holiday)
//     {
//         delievery = 0.0;
//         if(order >= 3000)
//         {
//             // if sunday then dis is 20% and del free
//             printf("\n----Special Sunday Deals-----");
//             discount = 0.2*order;
//         }
//         else if(order < 3000)
//         {
//             //on sunday del is free on all orders
//             printf("\n----Special Sunday Deals-----");
//             discount = 0.0;
//             delievery = 0.0;
//         }
//     }
//     //if not then
//     else if(order >= 3000)
//     {
//         delievery = 0.0;
//         discount = 0.1 * order;
//     }
//     else if(order >= 1500 && order < 3000)
//     {
//         delievery = 100;
//         discount = 0.0;
//     }
//     else if(order >= 1000 && order < 1500)
//     {
//         delievery = 200;
//         discount = 0.0;
//     }
//     else if(order < 1000)
//     {
//         delievery = 300;
//         discount = 0.0;
//     }
//     total = (order + delievery) - discount;
//     printf("\nOrder Value =%.2f\n", order);
//     printf("Discount =%.2f\n", discount);
//     printf("Delievery =%.2f\n", delievery);
//     printf("Final Amount =%.2f\n", total);
//     printf("-----Thank you-----\n");
//     return 0;
// }

// //LCM finder
// //finding lcm
// #include <stdio.h>
// int main()
// {
//     int num1, num2, lcm;

//     printf("Enter Number 1:");
//     scanf("%d", &num1);
//     printf("Enter Number 1:");
//     scanf("%d", &num2);

//     lcm = (num1 > num2) ? num1 : num2;

//     while(1)
//     {
//         if(lcm % num1 == 0 && lcm % num2 == 0)
//         {
//             printf("The LCM of %d and %d is:%d", num1, num2, lcm);
//             break;
//         }
//         lcm++;
//     }

//     return 0;
// }
// ////////////////////////////////////////////////////////////////////////
// //simple calculator
// #include <stdio.h>
// int main()
// {
//     float operand1, operand2;
//     char operator;
//     float result;
//     char choice;
//     //first value
//     do
//     {
//     printf("======Calculator======\n");
//     printf("Enter First Value: ");
//     scanf("%f", &operand1);
//     //operator
//     printf("Enter Operator: ");
//     scanf(" %c", &operator);
//     //second operator
//     printf("Enter Second Value: ");
//     scanf("%f", &operand2);
//     //operations
//     if(operator == '+')
//     {
//         result = operand1 + operand2;
//     }
//     else if(operator == '-')
//     {
//         result = operand1 - operand2;
//     }
//     else if(operator == '*')
//     {
//         result = operand1*operand2;
//     }
//     else if(operator == '/')
//     {
//         if(operand2 == 0)
//         {
//             printf("Division Error\n");
//         }
//         result = (int)operand1/operand2;
//     }
//     else
//     {
//         printf("Invalid operator\n");
//     }
//         printf("if opearand1 = %.2f, operand2 = %.2f\nif operator '%c'\nThe Result is: %.2f", operand1, operand2, operator, result);
//         printf("\nDo you want to perform another Calculation?(Y or N): ");
//         scanf(" %c", &choice);
//     }
//     while(choice == 'Y' || choice == 'y');
//     if(choice == 'n' || choice == 'N')
//     {
//         printf("Exited Calculator");
//     }
//     return 0;
// }
// /////////////////////////////////////////////////////////////////////////////////
// //sorting numbers
// #include <stdio.h>
// int main()
// {
//     int num1, num2, num3;
//     int smallest, middle, largest;
//     printf("Enter Number1:");
//     scanf("%d", &num1);
//     printf("Enter Number2:");
//     scanf("%d", &num2);
//     printf("Enter Number3:");
//     scanf("%d", &num3);
//     printf("Num1 = %d, Num2 = %d, Num3 = %d\n", num1, num2, num3);
//     if( num1 <= num2 && num1 <= num3)
//     {
//         smallest = num1;
//         if(num2 <= num3)
//         {
//             middle = num2;
//             largest = num3;
//         }
//         else
//         {
//             middle = num3;
//             largest = num2;
//         }
//     }
//     else if(num2 <= num1 && num2 <= num3)
//     {
//         smallest = num2;
//         if(num1 <= num3)
//         {
//             middle = num1;
//             largest = num3;
//         }
//         else
//         {
//             middle = num3;
//             largest = num1;
//         }
//     }
//     else
//     {
//         smallest = num3;
//         if(num1 <= num2)
//         {
//             middle = num1;
//             largest = num2;
//         }
//         else
//         {
//             middle = num2;
//             largest = num1;
//         }
//     }
//     printf("In Sorted Order: %d, %d, %d", smallest, middle, largest);
//     return 0;
// }
// /////////////////////////////////////////////////////////////////////////////////////////
// //time conversion
// // converts time in seconds to hours, minutes, and seconds.
// #include <stdio.h>
// int main()
// {
//     int o_seconds;
//     printf("Enter time in Seconds: ");
//     scanf("%d", &o_seconds);
//     int hours, minutes, seconds;
//     hours = o_seconds / 3600;
//     minutes = (o_seconds % 3600) / 60;
//     seconds = o_seconds % 60;
//     printf("%d Seconds = %d Hours %d Minutes %d Seconds\n", o_seconds, hours, minutes, seconds);
//     return 0;
// }
// //////////////////////////////////////////////////////////////
// // Triangle Type Checker
// #include <stdio.h>
// int main()
// {
//     int x, y, z;
//     printf("Enter First Side: ");
//     scanf("%d", &x);
//     printf("Enter Second Side: ");
//     scanf("%d", &y);
//     printf("Enter third Side: ");
//     scanf("%d", &z);

//     char *triangle_type =
//     (x == y && y == z && x == z) ? "Equilateral":
//     (x == y || x == z || y ==z ) ? "Isosecles" : "Scalane";

//     printf("x = %d, y = %d, z = %d\n", x, y, z);
//     printf("The Triangle is %s", triangle_type);
//     return 0;
// }
/////////////////////////////////////////////////
// Banking system
//  #include <stdio.h>
//  int main()
//  {
//      float total_balance = 5000;
//      float deposit, withdraw, transfer;
//      float receiver_account = 1000;
//      float fee = 0.02;
//      int bank_choice;
//      char trans_choice, end_choice;
//      // Using Do While
//      do
//      {
//          // Giving Options to Costumer
//          printf("\n---------Welcome to Habib Bank---------\n");
//          printf("1.Deposit Money\t\t");
//          printf("2.Withdraw Money\n");
//          printf("3.Check Balance\t\t");
//          printf("4.Transfer Money\n");
//          printf("5.View Mini History\t");
//          printf("6.Exit\n");
//          // Giving Choice From User
//          printf("\nSelect Service Options(1-6):");
//          scanf("%d", &bank_choice);
//          printf("----------------------------------------\n");
//          // Using Switch Case
//          switch (bank_choice)
//          {
//              // Deposit Section
//          case 1:
//          {
//              printf("Enter your Deposit:");
//              scanf("%f", &deposit);
//              if (deposit > 0 && deposit < 10000)
//              {
//                  total_balance += deposit;
//                  printf("%.2f$ has been Deposited  Successfully!\n", deposit);
//                  printf("Your New Balance is:%.2f$\n", total_balance);
//                  printf("Thanks for using Habib Bank!\n");
//                  printf("----------------------------------------\n");
//              }
//              else
//              {
//                  printf("Invalid Deposit, You Should enter amount between 1$-10000$\n");
//              }
//              break;
//          }
//              // Withdrawal Section
//          case 2:
//          {
//              printf("Enter Withdrawal Amount: ");
//              scanf("%f", &withdraw);
//              if (withdraw > 0 && withdraw <= total_balance)
//              {
//                  total_balance -= withdraw;
//                  printf("Withdrawal of %.2f$ has been done\n", withdraw);
//                  printf("Your New Balance is:%.2f$\n", total_balance);
//                  printf("Thanks for using Habib Bank!\n");
//                  printf("----------------------------------------\n");
//              }
//              else
//              {
//                  printf("Invalid Withdawal Request!,You have charged 50$ fine\n");
//                  total_balance -= 50;
//                  printf("You Balance is:%.2f\n", total_balance);
//                  printf("Good Luck for Next time!\n");
//                  printf("----------------------------------------\n");
//              }
//               break;
//          }
//          break;
//          // Check Balance Section
//          case 3:
//          {
//              printf("Your Current Balance is: %.2f$\n", total_balance);
//              printf("Thanks for using Habib Bank!\n");
//              printf("----------------------------------------\n");
//              break;
//          }

//         // Transfer Section
//         case 4:
//         {
//             printf("Enter Amount To Transfer:");
//             scanf("%f", &transfer);
//             if (transfer <= total_balance && transfer > 0)
//             {
//                 fee = 0.02 * transfer;
//                 total_balance -= (transfer + fee);
//                 receiver_account += transfer;
//                 printf("%.2f$ has been Transfered Successfully!\n", transfer);
//                 printf("Transaction fee 2%%: %.2f\n", fee);
//                 printf("Your New Balance: %.2f$\n", total_balance);
//                 printf("Receivers Account New balance: %.2f$\n", receiver_account);
//                 printf("Thanks for using Habib Bank!\n");
//                 printf("----------------------------------------\n");
//             }
//             else
//             {
//                 printf("Insufficient Funds For Money transfer!\n");
//                 printf("----------------------------------------\n");
//             }
//             break;
//         }
//             // Mini history section
//         case 5:
//         {
//         	printf("We will Intoduce our Mini History Soon!\n");
//         	printf("----------------------------------------\n");
//         }
//         break;
//         // Exit Section
//         case 6:
//         {
//             printf("Are you sure to want exit (y/n):");
//             scanf(" %c", &end_choice);
//             if (end_choice == 'Y' || end_choice == 'y')
//             {
//                 printf("Thanks for using Habib Bank!\n");
//                 return 0;
//             }
//             else
//             {
//                 printf("...Starting the Program Again...\n");
//             }
//             break;
//         }
//         default:
//             printf("Invalid Selection, Try Again\n");
//             break;
//         }
//         // Asking from user for another transaction
//         printf("Do you want to perform another transaction(y/n): ");
//         scanf(" %c", &trans_choice);
//     } while (trans_choice == 'Y' || trans_choice == 'y');

//     return 0;
// }
///////////////////////////////////////////////////
// notes breakdown
//  #include <stdio.h>
//  int main()
//  {
//      int amount, total;

//     printf("Enter Amount: ");
//     scanf("%d", &amount);

//     total = (int)amount / 100;
//     printf("%d Notes of 100\n", total);

//     amount = amount - (total * 100);
//     total = (int)amount / 50;
//     printf("%d Notes of 50\n", total);

//     amount = amount - (total * 50);
//     total = (int)amount / 20;
//     printf("%d Notes of 20\n", total);

//     amount = amount - (total * 20);
//     total = (int)amount / 10;
//     printf("%d Notes of 10\n", total);

//     amount = amount - (total * 10);
//     total = (int)amount / 5;
//     printf("%d Notes of 5\n", total);

//     amount = amount - (total * 5);
//     total = (int)amount / 2;
//     printf("%d Notes of 2\n", total);

//     amount = amount - (total * 2);
//     total = (int)amount / 1;
//     printf("%d Notes of 1\n", total);
//     return 0;
// }
///////////////////////////////////////////////////////////
// preprocessor version
//  #include <stdio.h>
//  #include <time.h>
//  #define VERSION 1
//  ///#define VERSION 2
//  //#define VERSION 3
//  int main()
//  {
//      time_t tm;
//      time(&tm);
//      printf("Date/Time: %s\n\n", ctime(&tm));
//      #if VERSION == 1

//         printf("Version 1: Basic Functions\n");

//     #elif VERSION == 2
//     {
//         printf("Version 2: Advanced Features\n");
//     }
//     #elif VERSION == 3
//     {
//         printf("Version 2: Experimental features\n");
//     }
//     #else
//         printf("Unknown Version!");
//     #endif
// }
//////////////////////////////////////////////////
// time conversion from hours to min sec
//  #include <stdio.h>
//  int main()
//  {
//      int time, hours, minutes, seconds;

//     printf("Enter Time(Seconds): ");
//     scanf("%d", &time);

//     hours = (time / 3600);
//     minutes = (time % 3600) / 60;
//     seconds = (time % 60);

//     printf("H:M:S: %d:%d:%d\n", hours, minutes, seconds);
//     return 0;
// }
//////////////////////////////////////////////////////////////////////