                                             ///Start of program///

#include<stdio.h>
void vo2max_calculations(char, int, float, float);
int main()
{
char name[50],gender;
int age,maximum_heart_rate;
float bmi,weight,height,minimum_heart_rate,vo2max;

printf("  =================================================================== Fitness Calculator ===================================================================\n");
printf("\n* Enter your Details/Credentials for Registration\n\n");
                ///Credentials,calculations and medical details///

printf("\n>> Enter your name                                            : ");
gets(name);
printf("\n>> Enter your age (In years)                                  : ");
scanf("%d",&age);
printf("\n>> Enter your gender (Enter 'M' for male and 'F' for female)  : ");
gender=getche();
printf("\n\n>> Enter your weight (In Kg only)                             : ");
scanf("%f",&weight);
printf("\n>> Enter your height (In m only)                              : ");
scanf("%f",&height);
maximum_heart_rate=(220-age);

printf("\n>>> To measure your minimum heart rate/pulse at your wrist, place 2 fingers between the bone and the tendon over your radial artery which is located on the thumb side of your wrist. When you feel your pulse, count the number of beats in 15 seconds. Multiply this number by 4 to calculate your beats per minute");
printf("\n\n> (NOTE: The average minimum heart rate of a human being is in range of b/w: 60-100 beats per minute)");
printf("\n\n>> Enter your minimum heart rate: ");
scanf("%f",&minimum_heart_rate);

bmi=((weight)/(height*height));                                              //BMI formula

vo2max=(15*((maximum_heart_rate/minimum_heart_rate)));                      //VO2max formula



                ///<---Credentials,calculations and medical details--->///



                ///Conditions for different BMI values for age group of 1 & 2-20///

if(age<=1)
{
    printf("\nBMI value cannot be concluded for an individual having age of 1 year or less");
}

if(age>=2 && age<20)
{

if(bmi<5)
{
    printf("\n--> BMI              : %.2f",bmi);
    printf("\n--> Weight Status    : Underweight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
if(bmi>=5 && bmi<=85)
{
    printf("\n--> BMI              : %.2f",bmi);
    printf("\n--> Weight Status    : Healthy Weight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
if(bmi>=85 && bmi<=95)
{
    printf("\n--> BMI              : %.2f",bmi);
    printf("\n--> Weight Status    : At risk of overweight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
if(bmi>95)
{
    printf("\n--> BMI              : %.2f",bmi);
    printf("\n--> Weight Status    : Overweight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
}

                ///<---Conditions for different BMI values for age group 1 & 2-20-->///




                ///Conditions for different BMI values for age group 20 and greater///

if(age>=20)
{

if(bmi<18.5)
{
    printf("\n--> BMI              : %.2f",bmi);
    printf("\n--> Weight Status    : Underweight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
if(bmi>=18.5 && bmi<=24.9)
{
    printf("\n--> BMI              : %.2f",bmi);
    printf("\n--> Weight Status    : Healthy weight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
if(bmi>=25 && bmi<=29.9)
{
    printf("\n--> BMI              : %.2f",bmi);
    printf("\n--> Weight Status    : Overweight");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
if(bmi>=30)
{
    printf("\n--> BMI              : %.2f",bmi);
    printf("\n--> Weight Status    : Obesity");
    vo2max_calculations(gender, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
}
}


                ///<---Conditions for different BMI values for age group 20 and greater-->///





                ///Function for calculation of VO2max and displaying VO2max related details///


void vo2max_calculations(char sex, int max_heart_rate, float min_heart_rate, float vo2max)
{

    //Conditions for different VO2max levels for males//

    if(sex=='M')
    {
        if(vo2max<35)
        {
            printf("\n--> VO2max           : %.2f",vo2max);
            printf("\n--> VO2max status    : Bad\n");
            printf("\n~ Fitness level: Bad\n");
        }

        else if(vo2max>=35 && vo2max<=40)
        {
            printf("\n--> VO2max           : %.2f",vo2max);
            printf("\n--> VO2max status    : Average\n");
            printf("\n~ Fitness level: Average\n");
        }
        else if(vo2max>=45 && vo2max<=50)
        {
            printf("\n--> VO2max           : %.2f",vo2max);
            printf("\n--> VO2max status    : Good\n");
            printf("\n~ Fitness level: Good\n");
        }
        else if(vo2max>=60)
        {
            printf("\n--> VO2max           : %.2f",vo2max);
            printf("\n--> VO2max status    : Excellent\n");
            printf("\n~ Fitness level: Excellent\n");
        }
    }

    //<---Conditions for different VO2max levels for males--->//


    //Conditions for different VO2max levels for females//

    if(sex=='F')
    {
        if(vo2max<35)
        {
            printf("\n--> VO2max           : %.2f",vo2max);
            printf("\n--> VO2max status    : Bad\n");
            printf("\n~ Fitness level: Bad\n");
        }

        else if(vo2max>=35 && vo2max<=40)
        {
            printf("\n--> VO2max           : %.2f",vo2max);
            printf("\n--> VO2max status    : Average\n");
            printf("\n~ Fitness level: Average\n");
        }
        else if(vo2max>=38 && vo2max<=42)
        {
            printf("\n--> VO2max           : %.2f",vo2max);
            printf("\n--> VO2max status    : Good\n");
            printf("\n~ Fitness level: Good\n");
        }
        else if(vo2max>=50)
        {
            printf("\n--> VO2max           : %.2f",vo2max);
            printf("\n--> VO2max status    : Excellent\n");
            printf("\n~ Fitness level: Excellent\n");
        }
    }

                 //<---Conditions for different VO2max levels for females--->//

}

        ///<---Function for calculation of VO2max and displaying VO2max related details--->///
