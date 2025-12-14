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
// #include<stdio.h>
// void swap(int *x , int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp; 
//     return;
// }
// int main()
// {
//     int a = 2;
//     int b = 9; 
//     swap(&a, &b);
//     printf("The value of a is: %d\n", a);
//     printf("The value of b is: %d", b);
//     return 0;
// }