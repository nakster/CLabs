#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Define th structure for an employee
typedef struct {
    char name[30];
    int number;
    float hours;
    float rate;
}employee_t;


void main()
{
    // Declare Variables
    employee_t emp;
    int num_of_emp;
    FILE* filep;
    int i;
    int result;
    int previous = 0;
    
    // Open file to read employee in the system
    filep = fopen("Employees.txt", "r");
    //If file exists
    if (filep != NULL)
    {
        //Read to the end of the files
        while (!feof(filep))
        {
            //Read in structure parameters
            result = fscanf(filep, "%s %d %f %F", emp.name, &emp.number, &emp.hours, &emp.rate);
            //Display each employee
            
            if(result>0)
                printf("%s %d %f %f\n", emp.name, emp.number, emp.hours, emp.rate);
            
        }
    }
    
    // Close the files
    if(filep!=NULL)
        fclose(filep);
    
    // Ask user to enter the number of new employees
    printf("How many new employees do you want to either\n");
    scanf("%d", &num_of_emp);
    
    // Open file to append new data
    filep = fopen("Employees.txt", "a");
    
    // Read each new employee
    for (i = 0;i < num_of_emp;i++)
    {
        //Read data
        printf("Enter employee name\n");
        scanf("%s", emp.name);
        
        printf("Enter employee number\n");
        scanf("%d", &emp.number);
        
        printf("Enter the hours worked\n");
        scanf("%f",&emp.hours);
        
        printf("Enter the hourly rate\n");
        scanf("%f", &emp.rate);
        
        
        fprintf(filep, "%s %d %f %f\n", emp.name, emp.number, emp.hours, emp.rate);
    }
    //Close file
    fclose(filep);
    getch();
}
