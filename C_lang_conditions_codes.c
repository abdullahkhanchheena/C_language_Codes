// /////////////////////////////////////////////
// // absolute number
// #include<stdio.h>
// int main()
// {
//     int number,absolute;
//     printf("Enter Number: ");
//     scanf("%d", &number);
//     if (number<0)
//     {
//         absolute = -number;
//     }else
//     {
//         absolute = number;
//     }
//     printf("The Absolute of %d is = %d", number, absolute);
//     return 0;
// }
// //////////////////////////////////////////
// //age chaecker
// #include<stdio.h>
// int main ()
// {
//     int age;
//     printf("Enter Number: ");
//     scanf("%d", &age);
//     if (age>=18)
//     {
//         printf("User Is Adult Now!");
//     }else if ( age>=12&&age<18 )
//     {
//         printf("User Is Teenager!");
//     }else
//     {
//         printf("User Is Child!");
//     }
//     return 0;
// }
// /////////////////////////////////////////////////////
// // divisibleof3and5
// #include<stdio.h>
// int main()
// {
//     int number;
//     printf("Enter Number: ");
//     scanf("%d", &number);
//     if ( number%3==0&&number%5==0 )
//     {
//         printf("The Number '%d' is divisible by 3 or 5",number);
//     }else
//     {
//         printf("The Number '%d' is not divisible by 3 or 5",number);
//     }
//     return 0;
// }
// //////////////////////////////////////////////////////
// //grade check
// #include<stdio.h>
// int main()
// {
//     char grade;
//     printf("Enter Grade (A, B, C, D, F): ");
//     scanf("%c", &grade);
//     if ( grade=='A' )
//     {
//         printf("You secured 90%% marks!");
//     }else if ( grade=='B' )
//     {
//         printf("You secured 80%% marks!");
//     }else if ( grade=='C' )
//     {
//         printf("You secured 70%% marks!");
//     }else if ( grade=='D' )
//     {
//         printf("You secured 60%% marks!");
//     }else
//     {
//         printf("You are Failed!");
//     }
//     return 0;
// }
// /////////////////////////////////////////////////////////////////
// //guess game
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     int num;
//     int guess;
//     int isguessed;

//     srand(time(0));
//     num = rand() % 100;
//     isguessed = 0;
//     while (!isguessed)
//     {
//         printf("Enter an integer in the range (0-99): ");
//         scanf("%d", &guess);
//         if ( guess == num )
//         {
//             printf("You entered the correct number!\n");
//             isguessed = 1;
//         }else if ( guess<num )
//         {
//             printf("Your guess is lower than the number!\n");
//         }else
//         {
//             printf("Your guess is higher than the number!\n");
//         }
//     }
//     return 0;
// }
// ////////////////////////////////////////////////////////////////////////////
// //largest and smallest
// #include<stdio.h>
// int main()
// {
//     int num1,num2,num3;
//     printf("Enter First Number: ");
//     scanf("%d", &num1);
//      printf("Enter Second Number: ");
//     scanf("%d", &num2);
//      printf("Enter Third Number: ");
//     scanf("%d", &num3);
//     if ( num1>num2 && num1>num3 )
//     {
//         printf("The Largest Number is %d",num1);
//     }else if ( num2>num3 && num2>num1 )
//     {
//         printf("The Largest Number is %d",num2);
//     }else
//     {
//         printf("The Largest Number is %d",num3);
//     }
//     return 0;
// }
// ////////////////////////////////////////////////////////////////////////////////
// //leap year
// #include<stdio.h>
// int main()
// {
//     int year;
//     printf("Enter Year: ");
//     scanf("%d", &year);
//     if ( year%4 ==0 )
//     {
//         printf("%d is a leap year",year);
//     }else
//     {
//         printf("%d is not a leap year",year);
//     }

// }
// ////////////////////////////////////////////////////////////////////////////////
// // month check
// #include<stdio.h>
// int main()
// {
//     int month;
//     printf("Enter a Month:");
//     scanf("%d", &month);
//     switch (month)
//     {
//     case 1:
//         printf("January");
//         break;
//         case 2:
//         printf("February");
//         break;
//         case 3:
//         printf("March");
//         break;
//         case 4:
//         printf("April");
//         break;
//         case 5:
//         printf("May");
//         break;
//         case 6:
//         printf("June");
//         break;
//         case 7:
//         printf("July");
//         break;
//         case 8:
//         printf("August");
//         break;
//         case 9:
//         printf("September");
//         break;
//         case 10:
//         printf("October");
//         break;
//         case 11:
//         printf("November");
//         break;
//         case 12:
//         printf("December");
//         break;
//     default:
//         break;
//     }
//     return 0;
// }
// ///////////////////////////////////////////////////////////////
// // upperlower case letters
// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter a Character: ");
//     scanf("%c", &ch);
//     if (ch>='A' && ch<='Z')
//     {
//         printf("Entered Character is Uppercase");
//     }else
//     {
//         printf("Entered Character is Lowercase");
//     }
//     return 0;
// }
// ///////////////////////////////////////////////////////////
// //vowel
// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter An Alphabet: ");
//     scanf("%c", &ch);
//     if ( ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
//     {
//         printf("Entered Alphabet '%c' Is Vowel!",ch);
//     }else
//     {
//         printf("Entered Alphabet '%c' Is Consonant!",ch);
//     }
//     return 0;
// }