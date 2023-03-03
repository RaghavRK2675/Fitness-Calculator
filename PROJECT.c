#include<stdio.h>
void vo2max_calculations(char, int, float, float);
int main()
{
char name,gender;
int age,maximum_heart_rate;
float bmi,weight,height,minimum_heart_rate,vo2max;

printf("\t\t\t\t\t\tFitness Calculator");

///Credentials,calculations and medical details///

printf("\nEnter your name                                          :");
gets(name);
printf("\nEnter your age                                           :");
scanf("%d",&age);
printf("\nEnter your gender (Enter 'M' for male and 'F' for female):");
gender=getche();
printf("\nEnter your weight (in Kg only)                           :");
scanf("%f",&weight);
printf("\nEnter your height (in m only)                            :");
scanf("%f",&height);
maximum_heart_rate=(220-age);

printf("\nMeasure your minimum heart rate by pressing the first (index) finger and middle finger of your other hand on the inside of your wrist, at the base of your thumb");
printf("\n\n(NOTE: The average minimum heart rate of a human being is in range of b/w: 60-100 beats per minute)");
printf("\n\nEnter your minimum heart rate:");
scanf("%f",&minimum_heart_rate);

bmi=((weight)/(height*height));                              //bmi formula

vo2max=(15*((maximum_heart_rate/minimum_heart_rate)));       //vo2max formula



///<---Credentials,calculations and medical details--->///



///Conditions for different BMI values for age group 2-20///

if(age<=1)
{
    printf("BMI value cannot be concluded for an individual having age of 1 year or less");
}

if(age>=2 && age<20)
{

if(bmi<5)
{
    printf("\nBMI          :%.2f",bmi);
    printf("\nWeight Status: Underweight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);
}
if(bmi>=5 && bmi<=85)
{
    printf("\nBMI        :%.2f",bmi);
    printf("Weight Status: Healthy Weight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);   
}
if(bmi>=85 && bmi<=95)
{
    printf("\nBMI        :%.2f",bmi);
    printf("Weight Status: At risk of overweight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);
}
if(bmi>95)
{
    printf("\nBMI        :%.2f",bmi);
    printf("Weight Status: Overweight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);
}
}

///<---Conditions for different BMI values for age group 2-20-->///




///Conditions for different BMI values for age group 20 and greater///

if(age>=20)
{

if(bmi<18.5)
{
    printf("\nBMI        :%.2f",bmi);
    printf("Weight Status: Underweight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);
}
if(bmi>=18.5 && bmi<=24.9)
{
    printf("\nBMI        :%.2f",bmi);
    printf("Weight Status: Healthy weight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);
}
if(bmi>=25 && bmi<=29.9)
{
    printf("\nBMI        :%.2f",bmi);
    printf("Weight Status: Overweight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);
}
if(bmi>=30)
{
    printf("\nBMI        :%.2f",bmi);
    printf("Weight Status: Obesity");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);
}
}
}


///<---Conditions for different BMI values for age group 20 and greater-->///

