                                             ///===========================================Fitness Calculator===========================================///



                                             ///--------------------------------------------================--------------------------------------------///
                                             ///--------------------------------------------Start of program--------------------------------------------///
                                             ///--------------------------------------------================--------------------------------------------///





                                             ///--------------------------------------------====================================================================================--------------------------------------------///
                                             ///--------------------------------------------Preprocessor Directives, Functions declaration, Main function, Variables declaration--------------------------------------------///
                                             ///--------------------------------------------====================================================================================--------------------------------------------///




#include<stdio.h>
void vo2max_calculations(char, int, int, float, float);
void details(char[50], int, char, float, float);
int main()
{
char name[50],gender;
int age,maximum_heart_rate,i=16,j=3,l=236,m=233,n=175,o=253;
float bmi,weight,height,minimum_heart_rate,vo2max;



                                             ///--------------------------------------------===========================--------------------------------------------///
                                             ///--------------------------------------------<<<Body of main function>>>--------------------------------------------///
                                             ///--------------------------------------------===========================--------------------------------------------///



printf("  =================================================================== %c Fitness Calculator %c ===============================================================\n",j,j);
printf("  \n============================================================================================================================================================");
printf("\t\t\t\t\t\t\t\t  * Details/Credentials for Registration *\n");



                                             ///--------------------------------------------=============================================--------------------------------------------///
                                             ///--------------------------------------------Bio Data gathering and calculations algorithm--------------------------------------------///
                                             ///--------------------------------------------=============================================--------------------------------------------///



printf("\n%c Enter your name                                            : ",i);
gets(name);
printf("\n%c Enter your age (In years)                                  : ",i);
scanf("%d",&age);
printf("\n%c Enter your gender (Enter 'M' for male and 'F' for female)  : ",i);
gender=getche();
printf("\n\n%c Enter your weight (In Kg only)                             : ",i);
scanf("%f",&weight);
printf("\n%c Enter your height (In m only)                              : ",i);
scanf("%f",&height);
maximum_heart_rate=(220-age);

printf("\n%c To measure your minimum heart rate/pulse at your wrist, place 2 fingers between the bone and the tendon over your radial artery which is located on the thumb side of your wrist. When you feel your pulse, count the number of beats in 15 seconds. Multiply this number by 4 to calculate your beats per minute.",l);
printf("\n\n%c NOTE: The average minimum heart rate of a human being is in range of b/w: 60-100 beats per minute.",m);
printf("\n\n%c Enter your minimum heart rate: ",i);
scanf("%f",&minimum_heart_rate);
printf("============================================================================================================================================================\n");

bmi=((weight)/(height*height));                                              //BMI formula

vo2max=(15*((maximum_heart_rate/minimum_heart_rate)));                      //VO2max formula



                                             ///--------------------------------------------====================================================--------------------------------------------///
                                             ///--------------------------------------------End of Bio Data gathering and calculations algorithm--------------------------------------------///
                                             ///--------------------------------------------====================================================--------------------------------------------///



                                             ///--------------------------------------------=============================================================--------------------------------------------///
                                             ///--------------------------------------------Conditions for different BMI values for age group of 1 & 2-20--------------------------------------------///
                                             ///--------------------------------------------=============================================================--------------------------------------------///



if(age<=1)
{
    printf("\nBMI value cannot be concluded for an individual having age of 1 year or less");
}

if(age>=2 && age<20)
{

if(bmi<5)
{
    details(name, age, gender, weight, height);
    printf("\n%c BMI           : %.2f kg/m%c",n,bmi,o);
    printf("\n%c Weight Status : Underweight",n);
    vo2max_calculations(gender, age, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
if(bmi>=5 && bmi<=85)
{
    details(name, age, gender, weight, height);
    printf("\n%c BMI           : %.2f kg/m%c",n,bmi,o);
    printf("\n%c Weight Status : Healthy Weight",n);
    vo2max_calculations(gender, age, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
if(bmi>=85 && bmi<=95)
{
    details(name, age, gender, weight, height);
    printf("\n%c BMI           : %.2f kg/m%c",n,bmi,o);
    printf("\n%c Weight Status : At risk of overweight",n);
    vo2max_calculations(gender, age, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
if(bmi>95)
{
    details(name, age, gender, weight, height);
    printf("\n%c BMI           : %.2f kg/m%c",n,bmi,o);
    printf("\n%c Weight Status : Overweight",n);
    vo2max_calculations(gender, age, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
}



                                             ///--------------------------------------------=============================================================--------------------------------------------///
                                             ///--------------------------------------------End of Conditions for different BMI values for age group of 1 & 2-20--------------------------------------------///
                                             ///--------------------------------------------=============================================================--------------------------------------------///



                                             ///--------------------------------------------=================================================================--------------------------------------------///
                                             ///--------------------------------------------Conditions for different BMI values for age group of 20 & greater--------------------------------------------///
                                             ///--------------------------------------------=================================================================--------------------------------------------///



if(age>=20)
{

if(bmi<18.5)
{
    details(name, age, gender, weight, height);
    printf("\n%c BMI           : %.2f kg/m%c",n,bmi,o);
    printf("\n%c Weight Status : Underweight",n);
    vo2max_calculations(gender, age, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
if(bmi>=18.5 && bmi<=24.9)
{
    details(name, age, gender, weight, height);
    printf("\n%c BMI           : %.2f kg/m%c",n,bmi,o);
    printf("\n%c Weight Status : Healthy weight",n);
    vo2max_calculations(gender, age, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
if(bmi>=25 && bmi<=29.9)
{
    details(name, age, gender, weight, height);
    printf("\n%c BMI           : %.2f kg/m%c",n,bmi,o);
    printf("\n%c Weight Status : Overweight",n);
    vo2max_calculations(gender, age, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
if(bmi>=30)
{
    details(name, age, gender, weight, height);
    printf("\n%c BMI           : %.2f kg/m%c",n,bmi,o);
    printf("\n%c Weight Status : Obesity",n);
    vo2max_calculations(gender, age, maximum_heart_rate, minimum_heart_rate, vo2max);                    //Function call for displaying VO2max related information
}
}
}



                                             ///--------------------------------------------========================================================================--------------------------------------------///
                                             ///--------------------------------------------End of Conditions for different BMI values for age group of 20 & greater--------------------------------------------///
                                             ///--------------------------------------------========================================================================--------------------------------------------///



                                             ///--------------------------------------------========================================================================--------------------------------------------///
                                             ///--------------------------------------------Function for calculation of VO2max and displaying VO2max related details--------------------------------------------///
                                             ///--------------------------------------------========================================================================--------------------------------------------///



void vo2max_calculations(char sex,int age, int max_heart_rate, float min_heart_rate, float vo2max)
{

   

                                             ///--------------------------------------------==================================================--------------------------------------------///
                                             ///--------------------------------------------Conditions for different VO2max levels for females--------------------------------------------///
                                             ///--------------------------------------------==================================================--------------------------------------------///



    int n=175;

    if(sex=='F' || sex=='f')
    {

        if(age<18)
        {
            if(vo2max<28)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=28 && vo2max<=32)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>32 && vo2max<33)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=33 && vo2max<=37)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>37 && vo2max<38)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=38 && vo2max<=41)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>41 && vo2max<42)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=42 && vo2max<=46)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>46 && vo2max<47)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=47 && vo2max<=56)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }


            if(vo2max>56)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }
        }


        if(age>=18 && age<=25)
        {

          if(vo2max<28)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=28 && vo2max<=32)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>32 && vo2max<33)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=33 && vo2max<=37)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>37 && vo2max<38)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=38 && vo2max<=41)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>41 && vo2max<42)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=42 && vo2max<=46)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>46 && vo2max<47)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=47 && vo2max<=56)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }


            if(vo2max>56)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }

        }

        if(age>=26 && age<=35)
        {
            if(vo2max<26)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=26 && vo2max<=30)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>30 && vo2max<31)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=31 && vo2max<=34)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>34 && vo2max<35)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=35 && vo2max<=38)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>38 && vo2max<39)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=39 && vo2max<=44)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>44 && vo2max<45)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=45 && vo2max<=52)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }


            if(vo2max>52)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }
        }

        if(age>=36 && age<=45)
        {
            if(vo2max<22)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=22 && vo2max<=26)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>26 && vo2max<27)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=27 && vo2max<=30)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>30 && vo2max<31)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=31 && vo2max<=33)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>33 && vo2max<34)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=34 && vo2max<=37)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>37 && vo2max<38)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=38 && vo2max<=45)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>45)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }
        }

        if(age>=46 && age<=55)
        {
            if(vo2max<20)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=20 && vo2max<=24)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>24 && vo2max<25)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=25 && vo2max<=27)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>27 && vo2max<28)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=28 && vo2max<=30)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>30 && vo2max<31)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=31 && vo2max<=33)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>33 && vo2max<34)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=34 && vo2max<=40)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>40)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }
        }

        if(age>=56 && age<=65)
        {
            if(vo2max<18)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=18 && vo2max<=21)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>21 && vo2max<22)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=22 && vo2max<=24)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>24 && vo2max<25)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=25 && vo2max<=27)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>27 && vo2max<28)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=28 && vo2max<=31)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>31 && vo2max<32)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=32 && vo2max<=37)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>37)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }
        }

        if(age>=65)
        {
            if(vo2max<17)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=17 && vo2max<=18)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>18 && vo2max<19)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=19 && vo2max<=21)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>21 && vo2max<22)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=22 && vo2max<=24)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>24 && vo2max<25)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=25 && vo2max<=27)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>27 && vo2max<28)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=28 && vo2max<=32)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>32)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }

    }
    }
        
   

                                             ///--------------------------------------------=========================================================--------------------------------------------///
                                             ///--------------------------------------------End of Conditions for different VO2max levels for females--------------------------------------------///
                                             ///--------------------------------------------=========================================================--------------------------------------------///



                                             ///--------------------------------------------================================================--------------------------------------------///
                                             ///--------------------------------------------Conditions for different VO2max levels for males--------------------------------------------///
                                             ///--------------------------------------------================================================--------------------------------------------///



    if(sex=='M' || sex=='m')
    {
        if(age<18)
        {
            if(vo2max<30)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=30 && vo2max<=36)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>36 && vo2max<37)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=37 && vo2max<=41)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>41 && vo2max<42)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=42 && vo2max<=46)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>46 && vo2max<47)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=47 && vo2max<=51)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>51 && vo2max<52)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=52 && vo2max<=60)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }


            if(vo2max>60)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }
        }


        if(age>=18 && age<=25)
        {
           if(vo2max<30)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=30 && vo2max<=36)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>36 && vo2max<37)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=37 && vo2max<=41)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>41 && vo2max<42)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=42 && vo2max<=46)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>46 && vo2max<47)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=47 && vo2max<=51)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>51 && vo2max<52)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=52 && vo2max<=60)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }


            if(vo2max>60)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }
        }

        if(age>=26 && age<=35)
        {
            if(vo2max<30)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=30 && vo2max<=34)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>34 && vo2max<35)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=35 && vo2max<=39)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>39 && vo2max<40)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=40 && vo2max<=42)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>42 && vo2max<43)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=43 && vo2max<=48)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>48 && vo2max<49)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=49 && vo2max<=56)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }


            if(vo2max>56)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }
        }

        if(age>=36 && age<=45)
        {
            if(vo2max<26)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=26 && vo2max<=30)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>30 && vo2max<31)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=31 && vo2max<=34)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>34 && vo2max<35)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=35 && vo2max<=38)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>38 && vo2max<39)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=39 && vo2max<=42)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>42 && vo2max<43)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=43 && vo2max<=51)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>51)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }
        }

        if(age>=46 && age<=55)
        {
            if(vo2max<25)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=25 && vo2max<=28)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>28 && vo2max<29)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=29 && vo2max<=31)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>31 && vo2max<32)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=32 && vo2max<=35)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>35 && vo2max<36)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=36 && vo2max<=38)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>38 && vo2max<39)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=39 && vo2max<=45)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>45)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }
        }

        if(age>=56 && age<=65)
        {
            if(vo2max<22)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=22 && vo2max<=25)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>25 && vo2max<26)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=26 && vo2max<=29)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>29 && vo2max<30)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=30 && vo2max<=31)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>31 && vo2max<32)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=32 && vo2max<=35)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>35 && vo2max<36)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=36 && vo2max<=41)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>41)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }
        }

        if(age>=65)
        {
            if(vo2max<20)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Very poor",n);
                printf("\n%c Fitness level : Very poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=20 && vo2max<=21)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>21 && vo2max<22)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Poor",n);
                printf("\n%c Fitness level : Poor\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=22 && vo2max<=25)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>25 && vo2max<26)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Below average",n);
                printf("\n%c Fitness level : Below average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=26 && vo2max<=28)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>28 && vo2max<29)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Average",n);
                printf("\n%c Fitness level : Average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=29 && vo2max<=32)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>32 && vo2max<33)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Above average",n);
                printf("\n%c Fitness level : Above average\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>=33 && vo2max<=37)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Good",n);
                printf("\n%c Fitness level : Good\n",n);
                printf("============================================================================================================================================================");
            }

            if(vo2max>37)
            {
                printf("\n%c VO2max        : %.2f ml/kg/min",n,vo2max);
                printf("\n%c VO2max status : Excellent",n);
                printf("\n%c Fitness level : Excellent\n",n);
                printf("============================================================================================================================================================");
            }
        }


    }
}



                                             ///--------------------------------------------=======================================================--------------------------------------------///
                                             ///--------------------------------------------End of Conditions for different VO2max levels for males--------------------------------------------///
                                             ///--------------------------------------------=======================================================--------------------------------------------///



                                             ///--------------------------------------------===============================================================================--------------------------------------------///
                                             ///--------------------------------------------End of Function for calculation of VO2max and displaying VO2max related details--------------------------------------------///
                                             ///--------------------------------------------===============================================================================--------------------------------------------///



                                             ///--------------------------------------------=======================================--------------------------------------------///
                                             ///--------------------------------------------Function for displaying service details--------------------------------------------///
                                             ///--------------------------------------------=======================================--------------------------------------------///



void details(char full_name[50], int person_age, char person_gender, float person_weight, float person_height)
{
    int n=175,o=16,p=17;

    printf("\n\t\t\t\t\t\t                  %c Details saved successfully %c",o,p);
    printf("  \n\n============================================================================================================================================================");
    printf("\n\t\t\t\t\t\t\t\t       * Service Details *");
    printf("\n%c Name          : ",n);
    puts(full_name);
    printf("%c Age           : %d years",n,person_age);
    if(person_gender=='M' || person_gender=='m')
    {
        printf("\n%c Gender        : Male",n);
    }
    else
    {
        printf("\n%c Gender        : Female",n);
    }
    printf("\n%c Weight        : %.2f kg",n,person_weight);
    printf("\n%c Height        : %.2f m",n,person_height);

}



                                             ///--------------------------------------------==============================================--------------------------------------------///
                                             ///--------------------------------------------End of Function for displaying service details--------------------------------------------///
                                             ///--------------------------------------------==============================================--------------------------------------------///



                                             ///--------------------------------------------================--------------------------------------------///
                                             ///--------------------------------------------End of program----------------------------------------------///
                                             ///--------------------------------------------================--------------------------------------------///


