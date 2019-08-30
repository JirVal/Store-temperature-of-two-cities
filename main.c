// Module: Foundation to Computer Science
// Name: Jiri Valcikevic
// Student number: 100422488
// Deadline date: 23/03/2018
// Program name: C program to store temperature of two cities for a week and display it.

#include <stdio.h>
#define GRN   "\x1B[32m"
#define RESET "\x1B[0m"
#define YEL   "\x1B[33m"
#define MAG   "\x1B[35m"
#define RED   "\x1B[31m"
#define BLU   "\x1B[34m"

const int numberOfCities = 2;
const int daysInWeek = 7;

int main()
{
    int temperature[numberOfCities][daysInWeek];
    
    printf(YEL"Program to store temperatures in a week for a two cities\n"RESET);
    printf(YEL"--------------------------------------------------------\n"RESET);
    
    for (int i = 0; i < numberOfCities; ++i) 
    {
        printf(BLU"\n\tStore the temperature for city n.%d\n"RESET, i+1);
        printf(BLU"\t----------------------------------\n"RESET);
        for(int j = 0; j < daysInWeek; ++j) 
        {
            printf("\tCity %d, Day %d: ", i+1 , j+1);
        scanf("%d", &temperature[i][j],"\n");
        }
    }

    printf(MAG"\n\n\t----Displaying values:----\n"RESET);
    printf(MAG"\t--------------------------\n"RESET);
    
    
    for (int i = 0; i < numberOfCities; ++i)
    {
        printf(RED"\n\t----Values of city n.%d----\n" RESET, i+1);

        for(int j = 0; j < daysInWeek; ++j)
        {
            printf("\tCity %d, Day %d = "GRN"%d°Celsius\n" RESET, i+1, j+1, temperature[i][j]);
        }
        printf(RED"\t--------------------------\n"RESET);
    }
    return 0;
}





