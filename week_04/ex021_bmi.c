#include <stdio.h>

int main()
{
    float weight, height_cm, height_m, bmi;

    printf("Input Weight (kg):\n");
    scanf("%f", &weight);
    printf("Input Height (cm):\n");
    scanf("%f", &height_cm);

    height_m = height_cm / 100.0;

    bmi = weight / (height_m * height_m);

    printf("Output BMI: %.2f\n", bmi);

    if (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Normal\n");
    }
    else if (bmi >= 25.0 && bmi <= 29.9)
    {
        printf("Overweight\n");
    }
    else
    {
        printf("Obese\n");
    }

    return 0;
}