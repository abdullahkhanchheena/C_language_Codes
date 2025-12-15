//////////////////////////////////////////////////////////////////////////////

// //Initializing and printing addresses of array addresses of array
// #include <stdio.h>
// int main()
// {
//     int arr[5] = {1, 1, 2, 1, 1};
//     // printing Addresses of all Arrays
//     printf("%p\n", &arr[0]);
//     printf("%p\n", &arr[1]);
//     printf("%p\n", &arr[2]);
//     printf("%p\n", &arr[3]);
//     printf("%p\n", &arr[4]);
//     return 0;
// }

/////////////////////////////////////////////////

// // Finding  Average of odd numbers
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the Size of Array: ");
//     scanf("%d", &n);

//     // Declaring Desired Variables
//     int arr[n], pos_sum = 0, pos_count = 0;

//     float average; // taking float for average

//     // Taking input From user
//     for (int i = 0; i < n; i++)
//     {
//         printf("ELement in Index %d = ", i);
//         scanf("%d", &arr[i]);
//     }

//     // Doing Operation
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             pos_sum += arr[i];
//             pos_count++;
//         }
//     }

//     // Calculating Average
//     average = (float)pos_sum / pos_count;

//     printf("\nAverage of odd numbers: %.2f\n", average); // Printing Average
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////

// //checking duplicate elemtents in array
// #include <stdio.h>
// int main()
// {
//     int size;
//     printf("\nInput Size of Array: ");
//     scanf("%d", &size);
//     int array[size]; // Declaring and initializing Array with Size
//     int counter = 0; // COunter which checks duplicate numbers

//     // taking input
//     for (int i = 0; i < size; i++)
//     {
//         printf("Element in Index %d is: ", i);
//         scanf("%d", &array[i]);
//     }

//     // checking for duplication
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (array[i] == array[j])
//             {
//                 counter++;
//             }
//         }
//     }
//     printf("\nTotal Number of Duplicate Elements in Array are: %d\n", counter);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////

// // 1st (finding even sum) and 2nd (odd sum) and then 3rd (find their difference between even sum and odd sum)
// #include <stdio.h>
// int main()
// {
//     int n;
//     int odd_sum = 0, even_sum = 0, arr_diff = 0;
//     printf("Enter Array size: ");
//     scanf("%d", &n);
//     int arr[n];
//     // taking input
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("Element in Index %d = ", i);
//         scanf("%d", &arr[i]);
//     }
//     // applying operation
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0) // Checking for even odd
//         {
//             even_sum += arr[i]; // Adding even sum
//         }
//         else
//         {
//             odd_sum += arr[i]; /// Adding odd Sum
//         }
//     }
//     // Calculating Difference between even and odd sum

//     arr_diff = even_sum - odd_sum;
//     // printing even and odd sum and their difference

//     printf("\nEven Sum is: %d\n", even_sum);
//     printf("Odd Sum is: %d\n", odd_sum);
//     printf("Diffrence of array is = %d\n", arr_diff);
//     return 0;
// }

/////////////////////////////////////////////////////////////

// // finding and printing even and odd elements in the Array
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("\nenter array size: ");
//     scanf("%d", &n);

//     int arr[n], odd_arr[n], even_arr[n]; // Declaring and initializing Arrays
//     int j = 0, k = 0;

//     // Taking input
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("element in index %d = ", i);
//         scanf("%d", &arr[i]);
//     }
//     // Calculating even odd elements
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             even_arr[j] = arr[i];
//             j++;
//         }
//         else
//         {
//             odd_arr[k] = arr[i];
//             k++;
//         }
//     }
//     // Printing Even element
//     printf("\nEven elements: ");
//     for (int i = 0; i < j; i++)
//     {
//         printf("%d ", even_arr[i]);
//     }
//     // Printing Odd element
//     printf("\nOdd elements: ");
//     for (int i = 0; i < k; i++)
//     {
//         printf("%d ", odd_arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

///////////////////////////////////////////////////////

// finding that sum is equal to our own limit
//  #include <stdio.h>
//  int main()
//  {
//      int n;
//      printf("Enter the size of array: ");
//      scanf("%d", &n);
//      int arr[n];
//      //input
//      for (int i = 0; i < n; i++)
//      {
//          printf("Element in Index %d = ", i);
//          scanf("%d", &arr[i]);
//      }
//      int limit, triplet = 0;
//      printf("Enter Number which for checking triplet: ");
//      scanf("%d", &limit);
//      //Applying operation by the help of nested loops
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = i+1; j < n; j++)
//          {
//              for (int k = j+1; k < n; k++)
//              {
//                  if (arr[i]+arr[j]+arr[k] == limit)
//                  {
//                      triplet++;
//                  }

//             }

//         }

//     }
//     printf("Total triplets are: %d\n", triplet);
//     return 0;
// }

//////////////////////////////////////////////////////////////

// // Copying of Array from array1 to Array2
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("-------Enter Size of Array-------\n");
//     printf("Enter Number:");
//     scanf("%d", &n);

//     int array1[n], array2[n];

//     printf("\n------Give input in Array-----\n");
//     printf("Input in Array:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter Number in Index(%d):", i);
//         scanf("%d", &array1[i]);
//     }
//     // Copying array from array1 to Array2
//     for (int i = 0; i < n; i++)
//     {
//         array2[i] = array1[i];
//     }
//     printf("Array1:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", array1[i]);
//     }
//     printf("\nArray2:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", array2[i]);
//     }
//     return 0;
// }

/////////////////////////////////////////////////////////////

// //finding largest and second largest in array
// #include <stdio.h>
// #include <limits.h> //it helps us in finding largest and smallest elements in Array
// int main()
// {
//     int i, n;

//     printf("\nElements in Array: ");
//     scanf("%d", &n);

//     int arr[n];
//     int firstmax = INT_MIN;
//     int secmax = INT_MIN;

//     // Taking input
//     for (i = 0; i < n; i++)
//     {
//         printf("Element in Index %d = ", i);
//         scanf("%d", &arr[i]);
//     }
//     // applying operation for largest and smallest
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] > firstmax)
//         {
//             secmax = firstmax; // previous largest becomes 2nd largest
//             firstmax = arr[i]; // update new largest
//         }
//         else if (arr[i] > secmax && arr[i] != firstmax)
//         {
//             secmax = arr[i];
//         }
//     }
//     // Printing output
//     printf("largest element in Array = %d\n", firstmax);
//     printf("Second largest Element in Array = %d\n", secmax);
//     return 0;
// }

//  /////////////////////////////////////////////////////////////////

// // Finding largest and smallest element in array
// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int n;
//     printf("-------Enter Size of Array-------\n");
//     printf("Enter Number:");
//     scanf("%d", &n);

//     int arr[n];
//     int max = INT_MIN, min = INT_MAX;

//     printf("\n------Give input in Array-----\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter Number in index (%d) : ", i);
//         scanf("%d", &arr[i]);
//     }
//     // Finding smallest and largest element
//     for (int i = 0; i < n; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
//     }
//     // printing output
//     printf("Largest Number in Array: %d\n", max);
//     printf("Smallest in Array: %d\n", min);
//     return 0;
// }

// ////////////////////////////////////////////////////////

// //add if(even) +10 and multiply(odd) * 2
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the Size of Array: ");
//     scanf("%d", &n);
//     int arr[n];
//     // taking input from user
//     for (int i = 0; i < n; i++)
//     {
//         printf("Element in Index %d = ", i);
//         scanf("%d", &arr[i]);
//     }
//     //displaying original array
//     printf("Original Array:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     // Applying operation
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             arr[i] *= 2;
//         }
//         else
//         {
//             arr[i] += 10;
//         }
//     }
//     //new array displaying
//     printf("\nNew Array:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// ///////////////////////////////////////////////////////////////////////

// //Finding Sum of all odd values in an Array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of Array: ");
    scanf("%d", &n);

    int arr[n], odd_sum = 0;

    //taking input
    for (int i = 0; i < n; i++)
    {
        printf("Input element in index %d = ", i);
        scanf("%d", &arr[i]);
    }
    //Calculating Sum of odd
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd_sum += arr[i];
        }
    }
    printf("Sum of All odd values is: %d\n", odd_sum);
    return 0;
}