#include <stdio.h>

int main()
{
   int grade = 100;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade >= 80) 
    {
        printf("A (4.0)\n");
    } 
    else 
        if (grade >= 79) 
        {
            printf("B+ (3.5)\n");
        } 
        else 
            if (grade >= 64) 
            {
                printf("B (3.0)\n");
            } 
            else 
                if (grade >= 69) 
                {
                    printf("C+ (2.5)\n");
                } 
                else 
                   if (grade >= 64) 
                   {
                    printf("C (2.0)\n");
                }
                else
                    if (grade >= 59) 
                    {
                        printf("D+ (1.5)\n");
                    } 
                    else 
                    
                        if (grade >= 54) 
                        {
                            printf("D (1.0)\n");
                        } 
                        else 
                        {
                            printf("F (0.0)\n");
                        }

    return 0;
}