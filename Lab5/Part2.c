
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
    int start_pop=1000000;
    int current_pop;
    int births;
    int deaths;
    int year=1;
    
    //Initialise the current population
    current_pop = start_pop;
    
    printf("The starting population is %d\n",start_pop);
    
    
    // Repeat starting at the smallest part of the range to the upper part of the range in steps defined by the interval
    while(current_pop>(start_pop*.10))
    {
        
         // Calculate the births, deaths and the updated population...
        deaths = current_pop*0.06;
        births = current_pop*0.01;
        
        current_pop = current_pop - deaths + births;
        
        printf("In year %d there were %d births and %d deaths. At the end of the end the population is %d\n", year, births, deaths, current_pop);
        
        //Update the year counter
        year++;
    }
    
    getch();
    
}
