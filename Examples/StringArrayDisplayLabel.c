#include<stdio.h>
#include<conio.h>
void main()
{
    char subject[4][20] = { "Java ", "C#   ", "C    ","Skill" };
    float results[2][4];
    
    char months[12][10] = { "Jan ", "Feb ", "Mar ","Apr ", "May ", "June", "July", "Aug ", "Sept", "Oct ", "Nov ", "Dec " };
    int months_data[4][12];
    
    
    int i, j;
    
    for (i = 0;i < 2;i++)
    {
        for (j = 0;j < 4;j++)
        {
            printf("Please enter grade for %s", subject[j]);
            scanf("%f", &results[i][j]);
        }
    }
    
    
    printf("Stud \t1\t  2\n");
    
    
    for (j = 0;j < 4;j++)
    {
        printf("%s\t%.1f\t%.1f\n", subject[j],results[0][j],results[1][j]);
    }
    
    
    for (i = 0;i < 4;i++)
    {
        
        printf("Please enter the data for year %d\n",i+1);
        
        for (j = 0;j < 12;j++)
        {
            printf("Please enter amount for %s", months[j]);
            scanf("%d", &months_data[i][j]);
        }
    }
    
    
    ////// Want to display the data like the following
    /////  Year     1   2   3   4
    ////    Jan     X   Y   Z   R
    ////    FEB     A   B   C   D
    
    
    //// Option 1
    printf("Year \t  1\t  2\t  3\t  4\n");
    
    
    for (j = 0;j < 12;j++)
    {
            printf("%s\t%3d\t%3d\t%3d\t%3d\n", months[j],months_data[0][j],months_data[1][j],months_data[2][j],months_data[3][j]);
    }
    
    //// Option 2
    
    //// Option 1
    printf("Year \t  1\t  2\t  3\t  4\n");
    
    
    for (j = 0;j < 12;j++)
    {
        printf("%s", months[j]);
        for(i=0;i<4;i++)
        {
            printf("\t%3d", months_data[i][j]);
        }
        printf("\n");
    }
    
    getch();
    
}
