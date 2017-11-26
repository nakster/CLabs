
//  main.c
//  Lab5
//  Created by Martin Hynes on 06/11/2016.
//  Copyright © 2016 Martin Hynes. All rights reserved.
//

#include <stdio.h>
#include <conio.h>

void main()
{
    
    
    //Declare all variables
    int choice;
    float smallest;
    float biggest;
    float interval;
    float loop_cnt;
    float converted;
    
    // Read in the users conversion request
    printf("Please enter 1 to convert inches to cm or 2 to converted from cm to inches\n");
    scanf("%d",&choice);
    
    
    // Read in the range and the steps
    printf("Please enter the smallest number to convert\n");
    scanf("%f",&smallest);
    
    printf("Please enter the largest number to convert\n");
    scanf("%f",&biggest);
    
    printf("Please enter the interval\n");
    scanf("%f",&interval);
    
    // Repeat starting at the smallest part of the range to the upper part of the range in steps defined by the interval
    for(loop_cnt=smallest;loop_cnt<=biggest;loop_cnt=loop_cnt+interval)
    {
        //If inches to cm conversion
        if(choice==1)
        {
            converted=loop_cnt*2.54;
            printf("%f inches = %f cms\n",loop_cnt, converted);
        }
        
        // if cm to inches conversion
        if(choice==2)
        {
            converted=loop_cnt/2.54;
            printf("%f cm = %f inches\n",loop_cnt, converted);
        }
    }
    
    getch();
    
}
