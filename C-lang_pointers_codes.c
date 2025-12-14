// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     int *p = &x;
//     printf("value of x: %d\n", x);
//     printf("Address of x: %p\n", &x);
//     printf("value of p: %p\n", p);
//     printf("address of p %p\n", &p);
//     printf("value of *p: %d\n", *p);
//     return 0;
// }
// ///////////////////////////////////////////////
// #include <stdio.h>
// void double_num(int *x)
// {

//     printf("Enter NUmber: ");
//     scanf("%d", x);
//     *x = (*x) * (*x);
//     printf("%d\n", *x);
// }
// int main()
// {
//     int value;
//     int array[3] = {2,5,7};
//     int *p;
//     printf ("& array = %p\n", & array);
//     printf (" array = %p\n", array);
//     printf ("& array [0] = %p\n", & array [0]) ;
//     printf (" array [0] = %d\n", array [0]) ;
//     printf ("& array [1] = %p\n", & array [1]) ;
//     printf (" array [1] = %d\n", array [1]) ;
//     printf ("& array [2] = %p\n", & array [2]) ;
//     printf (" array [2] = %d\n", array [2]) ;

//     printf ("\n p = array \n"); p = array ;
//     printf ("\n p = %p\n", p);
//     printf ("*p = %d\n", *p );
//     printf ("\n p ++;\n"); p ++;
//     printf ("p = %p\n", p);
//     printf ("*p = %d\n", *p );
//     printf ("\n p ++;\n"); p ++;
//     printf ("p = %p\n", p);
//     printf ("*p = %d\n", *p );
//     return 0;
// }
// ////////////////////////////////////////////////////

// Swaping of two numbers using pointers and functions
// #include <stdio.h>
// void swap(int *x, int *y) // functino which is called in main
// {
//     int temp; // initializing temp whcih helps us in swaping
//     temp = *x;
//     *x = *y;
//     *y = temp;
//     return; // returningswaped value
// }
// int main() // Main function
// {
//     int a = 2;
//     int b = 9;
//     swap(&a, &b);                         // Calling function for operation
//     printf("The value of a is: %d\n", a); // printing value of a
//     printf("The value of b is: %d", b);   // printing value of b
//     return 0;
// }
////////////////////////////////////

// Simple question
// #include <stdio.h>
// void fun(int *p)
// {
//     *p = *p+10;
//     *p++;
//     *p = *p+20;
// }
// int main()
// {
//     int a[2] = {5,5};
//     fun(a);
//     printf("%d %d ", a[0], a[1]);
//     return 0;
// }
/////////////////////////////////////////////

// Simple Question
// #include <stdio.h>
// void change(int *p)
// {
//     int x = 50;
//     p = &x;
//     *p = 100;
// }
// int main()
// {
//     int a = 5;
//     change(&a);
//     printf("%d ", a);
//     return 0;
// }
///////////////////////////////////////////////////////////////

// Adding two numbers using pointer and function
// #include <stdio.h>
// int add(int *p, int *q)
// {
//     int result = *p+*q;

// }
// int main()
// {
//     int a = 5, b= 5;//declaring and initializing functions

//     printf("Sum is: %d",add(&a, &b)); //printing and calling function
//     return 0;
// }
///////////////////////////////////////////////////////////

// Finding maximum number between two numbers
// #include <stdio.h>
// int main()
// {
//     int first, second;             // declaring variables
//     printf("Enter First Number:"); // taking first number
//     scanf("%d", &first);

//     printf("Enter Second Number: "); // taking second number
//     scanf("%d", &second);
//     // taking pointer of first and second

//     int *p = &first;  // pointing to first
//     int *q = &second; // pointing to second
//     // applying condition
//     if (*p > *q)
//     {
//         printf("Fist number (%d) is Maximum.", *p);
//     }
//     else
//     {
//         printf("Second number (%d) is Maximum.", *q);
//     }
//     return 0;
// }
////////////////////////////////////////////////////////////////

// Printing Array using Pointers
// #include <stdio.h>
// int main()
// {
//     int size; // taking size of array from user

//     printf("Enter the size if Array: "); // taking size from user
//     scanf("%d", &size);

//     int arr[size]; // declaring and initializing array with size

//     int *p = arr; // taking pointer of array

//     // taking input from user using loop
//     printf("\nEnter Elements in Array:\n\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter Element in Index %d: ", i);
//         scanf("%d", (p + i));
//     }
//     // printing array
//     printf("\nEntered Elements in Array are: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", *(p + i));
//     }
//     return 0;
// }
////////////////////////////////////////////////////////

// Finding Largest Element In the Array using pointer
// #include <stdio.h>
// #include <limits.h> //taking library limits which helps for all +ve -ve Values in chacking largest
// int main()
// {

//     int size; // taking size of array from user

//     printf("Enter the size if Array: "); // taking size from user
//     scanf("%d", &size);

//     if (size<= 0)
//     {
//         printf("incvalid ");
//         return 1;
//     }
    

//     int arr[size]; // declaring and initializing array with size

//     int *p = arr; // taking pointer of array

//     // taking input from user using loop
//     printf("\nEnter Elements in Array:\n\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter Element in Index %d: ", i);
//         scanf("%d", (p + i));
//     }
//     // taking largest variable for storing largest number in it
//     int largest = INT_MIN;

//     // for loop for chacking largest element in array
//     for (int i = 0; i < size; i++)
//     {
//         if (largest < *(p + i))
//         {
//             largest = *(p + i);
//         }
//     }
//     // printing largest element in Array
//     printf("Largest Element in Array is: %d", largest);
//     return 0;
// }
/////////////////////////////////////////////////////////////////
