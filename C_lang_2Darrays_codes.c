// /////////////////////////////////////////////////////////////////////////
// //students and subjects
// #include <stdio.h>
// int main()
// {
//     int std,sub;
//     printf("Enter No. of students: ");
//     scanf("%d", &std);
//     printf("Enter No. of subjects: ");
//     scanf("%d", &sub);
//     int result[std][sub];
//     //input
//     for (int i = 0; i < std; i++)
//     {
//         for (int j = 0; j < sub; j++)
//         {
//             scanf("%d", &result[i][j]);
//         }

//     }
//     //output
//     printf("\n");
//     for (int i = 0; i < std; i++)
//     {
//         for (int j = 0; j < sub; j++)
//         {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }
//     return  0;
// }
// ///////////////////////////////////////////////////////////////////
// // sum of matrix
// #include <stdio.h>
// int main()
// {
//     int rows, cols;
//     printf("Enter the NUmber of rows: ");
//     scanf("%d", &rows);
//     printf("enter the Number of cols: ");
//     scanf("%d", &cols);
//     int mat[rows][cols], sum = 0;
//     // input
//     printf("Enter Elements in matrix:\n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             scanf("%d", &mat[i][j]);
//         }
//     }
//     //printing Matrix
//     printf("\nMatrix:\n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             printf("%d ", mat[i][j]);
//         }

//         printf("\n");
//     }
//     //sum of matrix
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             sum+=mat[i][j];
//         }
//     }
//     printf("\nSum of given matrix = %d\n", sum);
//     return 0;
// }
// ////////////////////////////////////////////////////////////////////////////////
// // transpose of matrix
// #include <stdio.h>
// int main()
// {
//     int rows, cols, i;
//     printf("Enter the Number of rows: ");
//     scanf("%d", &rows);
//     printf("enter the Number of cols: ");
//     scanf("%d", &cols);
//     int mat[rows][cols];
//     // input
//     printf("Enter Elements in matrix:\n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             scanf("%d", &mat[i][j]);
//         }
//     }
//     // printing array
//     printf("\nOriginal Matrix:\n");
//     for (int i = 0; i < rows; i++)
//     {

//         for (int j = 0; j < cols; j++)
//         {
//             printf("%d ", mat[i][j]);
//         }
//         printf("\n");
//     }
//     // transpose
//     printf("\nTranspose of matrix:\n");
//     for (int i = 0; i < cols; i++)
//     {
//         for (int j = 0; j < rows; j++)
//         {
//             printf("%d ", mat[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////
// //Addition of two matrices
// #include <stdio.h>
// int main()
// {
//     int rows,cols;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);
//     int mat1[rows][cols], mat2[rows][cols], result_mat[rows][cols];
//     //input for 1 matrix
//     printf("\nEnter elements of 1st matrix:\n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             scanf("%d", &mat1[i][j]);
//         }
//     }
//     //input for matrix 2
//     printf("\nEnter elements of 2nd matrix:\n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j< cols; j++)
//         {
//             scanf("%d", &mat2[i][j]);
//         }
//     }
//     //addition operation
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             result_mat[i][j] = mat1[i][j]+mat2[i][j];
//         }

//     }
//     //output
//     printf("\nAddition Matrix:\n");
//     for (int i = 0; i < cols; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             printf("%d  ", result_mat[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////
// // highest and lowest in Array
// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int rows, cols;
//     printf("Enter the NUmber of rows: ");
//     scanf("%d", &rows);
//     printf("enter the Number of cols: ");
//     scanf("%d", &cols);
//     int mat[rows][cols], max = INT_MIN, min = INT_MAX;
//     // input
//     printf("Enter Elements in matrix:\n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             scanf("%d", &mat[i][j]);
//         }
//     }
//     // printing array
//     printf("Matrix:\n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             printf("%d ", mat[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     //finding max and min element
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (max < mat[i][j])
//             {
//                 max = mat[i][j];
//             }
//             if (min > mat[i][j])
//             {
//                 min = mat[i][j];
//             }
//         }
//     }
//     printf("Maximum element in Matrix: %d\n", max);
//     printf("Minimum element in Matrix: %d\n", min);
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////