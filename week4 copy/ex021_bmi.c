#include <stdio.h>
int main()
{

int height_cm = 250;
int weight_kg = 100;
printf("== BMI Calculator ==\n");
printf("weight(kg): ");
scanf("%d", &weight_kg);
printf("height(cm): ");
scanf("%d", &height_cm);
float height_m = height_cm / 100.0;
printf("BMI: %.2f\n", weight_kg / (height_m * height_m));
float bmi = weight_kg / (height_m * height_m);
if (bmi < 18.5) 
{
    printf("underweight.\n");
}
else if (bmi >= 18.5 && bmi < 24.9)
{
    printf("normal.\n");
}
else if (bmi >= 25.0 && bmi < 29.9)
{
    printf("overweight.\n");
}
else if (bmi >= 30.0)
{
    printf("obese.\n");
}

    return 0;
}