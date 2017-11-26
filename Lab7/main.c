
//  Created by Martin Hynes on 06/11/2016.
//  Copyright © 2016 Martin Hynes. All rights reserved.


#include <stdio.h>
#include <conio.h>

void main()
{
    
    
    //Declare all variables
    int number_customers;
    int accNo;
    float balance;
    float purchases;
    float credits;
    float creditLimit;
    float newbalance;
    float excessCredit;
    
    // Declare and initalise totals to zero
    float total_credit=0;
    float total_excess_credit=0;
    int number_excessCredit=0;
    
    // Declare max excess variables - if no one exceeds the credit then the accNo will still be -99...
    float max_excess=0;
    int max_excess_accNo=-99;
    
    int counter;
    
    // Read in the number of customers
    printf("Please enter the number of customers\n");
    scanf("%d",&number_customers);
    
    
    // Repeat reading and processing user details for the number of users specified by the user.
    for(counter=0;counter<number_customers;counter++)
    {
    
        // Read in the customer details
        printf("Please enter the account number\n");
        scanf("%d",&accNo);
    
        printf("Please enter the balance\n");
        scanf("%f",&balance);
    
        printf("Please enter the purchases this month\n");
        scanf("%f",&purchases);
        
        printf("Please enter the credits applied this month\n");
        scanf("%f",&credits);
        
        printf("Please enter the account's credit limit\n");
        scanf("%f",&creditLimit);
        
        //Calculate the new balance
        newbalance = balance + purchases - credits;
        
        //Add the new balance to the overall bank credit
        total_credit = total_credit + newbalance;
        
        //Check if the balance exceeds the credit limit
        if(newbalance>creditLimit)
        {
            //Calculate the excess credit
            excessCredit = newbalance - creditLimit;
            
            //Increment the number of customers excedding their credit limit
            number_excessCredit++;
            
            //Display the fact customer exceeded credit
            printf("Acc Number %d has %f excess credit\n", accNo, excessCredit);
            
            //Add the excess to the overall bank excess credit
            total_excess_credit = total_excess_credit + excessCredit;
            
            //Check if this value is the max excess recorded to date
            if(excessCredit > max_excess)
            {
                max_excess = excessCredit;
                max_excess_accNo = accNo;
            }
        }
    
    }
    
    // Displat the results
    printf("The total outstanding credit is: %f\n",total_credit);
    printf("The total outstanding excess credit is: %f\n",total_excess_credit);
    printf("The total number of people with excess credit is: %d\n",number_excessCredit);
    
    //Display the max excess if there was a customer that exceeded their limit..
    if(max_excess_accNo!=-99)
    {
        printf("The acc with max exccess credit is: %d\n",max_excess_accNo);
        printf("The max excess credit is %f\n",max_excess);
    }
    getch();
    
}
