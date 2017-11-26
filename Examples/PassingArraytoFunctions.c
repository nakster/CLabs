#include<stdio.h>
#include<conio.h>


/// When creating a function that recieved a 2D Array only the number of columns needs
/// to be specified. The num_rows in the array is sent as a function parameter.
/// Effectively this function can take any 2D Array with 10 columns
int maxarray2d(int array[][10],int num_rows);


/// When creating a function that recieved a 1D Array the length of the array doesnt need to be specified.
/// The num_rows in the array is sent as a function parameter. Effectively this function can take any 1D Array
int maxarray1d(int array[],int length);


void main()
{
    // Declare the two matricies and the loop counters
    int array2d[7][10];
    int array1d[3];
    int max;
    int i, j;
    
    
    /// Use loop to get first matrix
    for (i = 0;i < 7;i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("Please enter row %d and column %d of matrix one\n", i+1, j+1);
            scanf("%d", &array2d[i][j]);
        }
    }
    
    /// Use loop to get first matrix
    for (i = 0;i < 3;i++)
    {
        printf("Please enter index %d of the 1dim Array\n", i+1);
        scanf("%d", &array1d[i]);
    }
    
    
    max = maxarray2d(array2d,7);
    printf("The max value in the 2D array is %d\n",max);
    
    
    max = maxarray1d(array1d,3);
    printf("The max value in the 2D array is %d\n",max);
    
    
    /// Display the 2D Array
    for (i = 0;i < 7;i++)
    {
        printf("\n");
        for (j = 0; j < 10; j++)
        {
            printf("%d ", array2d[i][j]);
        }
    }
    
    /// Display the 1D Array
    
    printf("\n");
    
    for (i = 0;i < 3;i++)
    {
            printf("%d ", array1d[i]);
    }
    
   getch();
}


int maxarray2d(int array[][10], int num_rows)
{
    int maxvalue;
    int i,j;
    
    maxvalue = array[0][0];
    
    
    for (i = 0;i < num_rows;i++)
    {
        for (j = 0; j < 10; j++)
        {
            if(array[i][j]>maxvalue)
                maxvalue = array[i][j];
        }
    }
    
    
    return maxvalue;
    
}


int maxarray1d(int array[], int length)
{
    
    int maxvalue;
    int i,j;
    
    maxvalue = array[0];
    
    
    for (i = 0;i < length;i++)
    {
                    if(array[i]>maxvalue)
                        maxvalue = array[i];
    }
    
    
    return maxvalue;
    
}
