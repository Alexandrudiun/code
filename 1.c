#include <stdio.h>
#include <csbootcamp.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>




int main()
{
     int n;
    // printf("Enter the first value:");
    // scanf("%d", &n);
    
    n = get_int("introdu n");
    
    for(int i = 1; i <= n; i++)
    {
        if(i%7==0)
        {
            printf("Merry ");
        }
        else if (i%11==0)
        {
            printf("MerryChristmas ");
        }
        else if (i%77==0)
        {
            printf("Christmas ");
        }
        else 
        {
            printf("%i ",i);
        }
        
        
        
    }
}
