#include<stdio.h>
void credentials(char name, int age, float weight, float height, float bmi, float vo2max);
int main()
{
char name;
int age,maximum_heart_rate;
float bmi,weight,height,minimum_heart_rate,vo2max;

printf("\t\t\t\t\t\tFitness Calculator");

///Credentials,calculations and medical details///

printf("\nEnter your name:");
scanf("%s",&name);
printf("\nEnter your age:");
scanf("%d",&age);
printf("\nEnter your weight (in Kg only):");
scanf("%f",&weight);
printf("\nEnter your height (in m only):");
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

if(2<=age<20)
{

if(bmi<5)
{
    
}
if(bmi>=5 && bmi<=85)
{
    
}
if(bmi>=85 && bmi<=95)
{
    
}
if(bmi>95)
{

}
}

///<---Conditions for different BMI values for age group 2-20-->///




///Conditions for different BMI values for age group 20 and greater///

if(age>=20)
{

if(bmi<18.5)
{
    
    printf("Weight Status: Underweight");
}
if(bmi>=18.5 && bmi<=24.9)
{
    
    printf("Weight Status: Healthy weight");
}
if(bmi>=25 && bmi<=29.9)
{
    
    printf("Weight Status: Overweight");
}
if(bmi>=30)
{
    
    printf("Weight Status: Obesity");
}
}
}


///<---Conditions for different BMI values for age group 20 and greater-->///

void credentials(char name, int age, float weight, float height, float bmi, float vo2max)
{
    printf("Name:%s\n",name);
    printf("Age:%d\n",age);
    printf("Weight:%f\n",weight);
    printf("Height:%f\n",height);
    printf("BMI:%f",bmi);
    printf("VO2 max:%f",vo2max);
}