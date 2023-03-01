#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{

    //first Output
    printf("\n\nSmall C programmes [Version 1.1]\n(c) Daniel Corporation. All rights reserved\n(if don't know how to use it try with the command 'help'\n\n");

    while(1)
    { 
        //Declaration
        char command[30];

        //Input
        printf("Enter your command: ");
        scanf("%s", command);

        //Version
        if (strcmp(command, "version")==0)
        {
            printf("\n                              cccccccc\n");
            printf("                            cccccccccccccc\n");
            printf("                           cccc\n");
            printf("                           ccc\n");
            printf("                           ccc\n");
            printf("                           ccc\n");
            printf("                           cccc\n");
            printf("                           cccccccccccccccc\n");
            printf("                                cccccc\n");
            printf("\n\n\n");

            printf("VERSION of 'SMALL C PROGRAMMES' == 1.2\n\n");
        }

        //Help
        if (strcmp(command, "help")==0)
        {
            printf("\nList of all commands you can use:\n\n");
            printf("help:           (gives you a list of all commands)\n");
            printf("version:        (shows you what version of the programme you are using)\n");
            printf("calc:           (a casual calculator ONLY WITH WHOLE NUMBERS!)\n");
            printf("numsort:        (enter 3 digits and it will sort it in ascending order)\n");
            printf("rtriangle:      (calculates the hypotenuse, perimeter and the area of a right-angled triangle)\n");
            printf("creditcalc:     (calculates your capital after x months)\n");
            printf("tempcalc:       (it calculates Fahrenheit into Celsius and backwards too)\n");
            printf("physicsspeed:   (calculates the average velocy)\n");
            printf("fractioncalc:   (it calculates out the result of 2 fractions by using your operator)\n");
            printf("equasioncalc:   (calculates equasions)\n");
            printf("exit            (to exit the programme)\n\n");
        }

        //exit
        if (strcmp(command, "exit")==0)
        {
            printf("Thanks for using small C programmes\n");
            exit(1);
        }

        //Calc:
        if (strcmp(command, "calc")==0)
        {
            //declaration calc
            int number1 = 0;
            int number2 = 0;
            int result = 0;
            char operator;

            //Input calc
            printf("\nInput the first number: ");
            scanf("%d", &number1);

            printf("Input the operator: ");
            fflush(stdin);
            scanf("%c", &operator);

            printf("Input the second number: ");
            scanf("%d", &number2);

            printf("----------------------------------\n");

            //If-Statements calc
            if (operator == '+')
            {
                result = number1 + number2;

                printf("%d + %d = %d\n", number1, number2, result);
            }

            if (operator == '-')
            {
                result = number1 - number2;

                printf("%d - %d = %d\n", number1, number2, result);
            }

            if (operator == '*')
            {
                result = number1 * number2;

                printf("%d * %d = %d", number1, number2, result);
            }

            if (operator == '/')
            {
                if (number2 == 0)
                {

                    printf("Syntax error (division by 0)\n");

                }

                else
                {
                result = number1 / number2;
                
                printf("%d / %d = %d", number1, number2, result);
                }
            }
        }


        //Numsort:
        if (strcmp(command, "numsort")==0)
        {
            //declaration numsort
            int num1 = 0;
            int num2 = 0;
            int num3 = 0;
            int temp = 0;
        
            //Input numsort
            printf("\nEnter the first number: ");
            scanf("%d", &num1);

            printf("Enter the second number: ");
            scanf("%d", &num2);

            printf("Enter the third number: ");
            scanf("%d", &num3);

            printf("----------------------------------\n");

            printf("Entered numbers: %d - %d - %d\n", num1, num2, num3);

            //If-Statements numsort and type-cast
            if (num1 > num2)
            {
                temp = num1;
                num1 = num2;
                num2 = temp;
            }

            if (num2 > num3)
            {
                temp = num2;
                num2 = num3;
                num3 = temp;
            }

            if (num1 > num2)
            {
                temp = num1;
                num1 = num2;
                num2 = temp;
            }

            //Output numsort

            printf("Entered sorted numbers: %d - %d - %d\n", num1, num2, num3);
        }

        if (strcmp(command, "rtriangle")==0)
        {
            //declaration rtiangle
            double a = 0.0;
            double b = 0.0;
            double hyp = 0.0;
            double perimeter = 0.0;
            double area = 0.0;

            //Input rtriangle
            printf("\nEnter the 'a' site of the right-angled triangle: ");
            scanf("%lf", &a);

            printf("Enter the 'b' site of the right-angled triangle: ");
            scanf("%lf", &b);

            printf("----------------------------------\n");

            //Calculation rtriangle
            hyp = sqrt(pow(a,2) + pow(b,2));
            area = (a * b) / 2;
            perimeter = a + b + hyp;       

            //Output rtiangle
            printf("Hypotenuse = %.4lf\n", hyp);
            printf("Area = %.4lf\n", area);
            printf("Perimeter = %.4lf\n", perimeter);
        }

        if (strcmp(command, "creditcalc")==0)
        {
            //declaration creditcalc
            double monthlyRate = 0.0;    
            double numberOfMonths = 0.0;
            double interestRate = 0.0;
            double totalCapital = 0.0;
            double q = 0.0;

            //Input creditcalc
            printf("\nMonthly rate in EUR: ");
            scanf("%lf", &monthlyRate);

            printf("Term in months: ");
            scanf("%lf", &numberOfMonths);

            printf("Interest rate in %%: ");
            scanf("%lf", &interestRate);

            printf("----------------------------------\n");

            //calculation creditcalc
            q = 1.0 + interestRate / (12 * 100);
            totalCapital = monthlyRate * (1.0 - pow(q,numberOfMonths)) / (1.0 - q);

            //Output creditcalc
            printf("Total capital paid after %.0lf months: %.2lf EUR\n\n", numberOfMonths, totalCapital);
        }

        if (strcmp(command, "tempcalc")==0)
        {
            //declaration tempcalc
            char fahrenheitOrCelsius[100];

            printf("\nDo you want to change Fahrenheit to Celsius / Celsius to Fahrenheit\n\n");
            printf("(to change Fahrenheit to Celsius write 'fahrenheit' / to change Celsius to Fahrenheit write 'celsius'.)\n\n");
            scanf("%s", fahrenheitOrCelsius);

            if (strcmp(fahrenheitOrCelsius, "fahrenheit")==0)
            {
                //declaration for fahrenheit
                double fahrenheit = 0.0;
                double celsius = 0.0;

                //Input for fahrenheit
                printf("Enter Fahrenheit: ");
                scanf("%lf", &fahrenheit);

                printf("----------------------------------\n");

                //calculation for fahrenheit
                celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

                //Output for fahrenheit
                printf("%.2lf Fahrenheit are %.2lf Celsius\n\n", fahrenheit, celsius);
            }

            if (strcmp(fahrenheitOrCelsius, "celsius")==0)
            {
                //declaration for celsius
                double fahrenheit1 = 0.0;
                double celsius1 = 0.0;

                //Input for celsius
                printf("\nEnter Celsius: ");
                scanf("%lf", &celsius1);

                printf("----------------------------------\n");

                //calculation for celsius
                fahrenheit1 = celsius1 * 1.8 + 32.0;

                //Output for celsius
                printf("%.2lf Celsius are %.2lf Fahrenheit\n\n", celsius1, fahrenheit1);
            }
        }

        if (strcmp(command, "physicsspeed")==0)
        {
            char vorsort[10];

            printf("\nIf you want to calculate V / T / S do the following instruction.\n\n");
            printf("To calculate V write 'v' | to calculate T write 't' | to calculate S write 's'\n");
            scanf("%s", vorsort);

            if (strcmp(vorsort, "v")==0)
            {
                //declaration for v
                double v0 = 0.0;
                double t0 = 0.0;
                double s0 = 0.0;

                //Input for v
                printf("\nEnter 't': ");
                scanf("%lf", &t0);

                printf("Enter 's': ");
                scanf("%lf", &s0);

                printf("----------------------------------\n");

                //Calculation for v
                v0 = s0 / t0;

                //Output for v
                printf("v = %.2lf\n m/s\n\n", v0);
            }

            if (strcmp(vorsort, "t")==0)
            {
                //declaration for t
                double v1 = 0.0;
                double t1 = 0.0;
                double s1 = 0.0;

                //Input for t
                printf("Enter 'v': ");
                scanf("%lf", &v1);

                printf("Enter 's': ");
                scanf("%lf", &s1);

                printf("----------------------------------\n");

                //Calculation for t
                t1 = s1 / v1;

                //Output for t
                printf("t = %2.lf\n sec\n\n", t1);
            }

            if (strcmp(vorsort, "s")==0)
            {
                //declaration for s
                double v2 = 0.0;
                double t2 = 0.0;
                double s2 = 0.0;

                //Input for s
                printf("Enter 'v': ");
                scanf("%lf", &v2);

                printf("Enter 't': ");
                scanf("%lf", &t2);

                printf("----------------------------------\n");

                //Calculation for s
                s2 = t2 * v2;

                //Output for s
                printf("s = %.2lf\n m\n\n", s2);
            }
        }

        if (strcmp(command, "fractioncalc")==0)
        {
            //declaration fractioncalc
            int numerator1 = 0;
            int numerator2 = 0;
            int denominator1 = 0;
            int denominator2 = 0;
            int resultNumerator = 0;
            int resultDenominator = 0;
            char operator;

            //Input fractioncalc
            printf("\nNumber 1 - numerator: ");
            scanf("%d", &numerator1);

            printf("Number 1 - denominator: ");
            scanf("%d", &denominator1);

            printf("Enter the operator (+|-|*|/): ");
            fflush(stdin);
            scanf("%c", &operator);

            printf("Number 2 - numerator: ");
            scanf("%d", &numerator2);

            printf("Number 2 - denominator: ");
            scanf("%d", &denominator2);

            //If-Statement-Block fractioncalc
            if (operator == '+')
            {

                printf("Entered calculation: %d     %d      ?\n", numerator1, numerator2);
                printf("                     __  +  __   =  __\n");
                printf("                     %d     %d      ?\n", denominator1, denominator2);
                printf("----------------------------------\n");

                //Calculation for '+'
                resultNumerator = numerator1 * denominator2 + denominator1 * numerator2;
                resultDenominator = denominator1 * denominator2;

                //Output of '+'
                printf("Result of calculation:  %d     %d       %d\n", numerator1, numerator2, resultNumerator);
                printf("                        __  +  __   =__\n");
                printf("                        %d     %d       %d\n", denominator1, denominator2, resultDenominator);
            }

            if (operator == '-')
            {
                printf("Entered calculation: %d     %d      ?\n", numerator1, numerator2);
                printf("                     __  -  __   =  __\n");
                printf("                     %d     %d      ?\n", denominator1, denominator2);
                printf("----------------------------------\n");

                //Calculation for '-'
                resultNumerator = numerator1 * denominator1 - denominator1 * numerator2;
                resultDenominator = denominator1 * denominator2;

                //Output for '-'
                printf("Result of calculation:  %d     %d       %d\n", numerator1, numerator2, resultNumerator);
                printf("                        __  -  __   =__\n");
                printf("                        %d     %d       %d\n", denominator1, denominator2, resultDenominator);                
            }

            if (operator == '*')
            {
                printf("Entered calculation: %d     %d      ?\n", numerator1, numerator2);
                printf("                     __  *  __   =  __\n");
                printf("                     %d     %d      ?\n", denominator1, denominator2);
                printf("----------------------------------\n");

                //Calculation for '*'
                resultNumerator = numerator1 * numerator2;
                resultDenominator = denominator1 * denominator2;

                //Output
                printf("Result of calculation:  %d     %d       %d\n", numerator1, numerator2, resultNumerator);
                printf("                        __  *  __   =__\n");
                printf("                        %d     %d       %d\n", denominator1, denominator2, resultDenominator);
            }

            if (operator == '/')
            {
                printf("Entered calculation: %d     %d      ?\n", numerator1, numerator2);
                printf("                     __  /  __   =  __\n");
                printf("                     %d     %d      ?\n", denominator1, denominator2);
                printf("----------------------------------\n");

                //Calculation for '/'
                resultNumerator = numerator1 * denominator2;
                resultDenominator = numerator2 * denominator1;
                
                //Output for '/'
                printf("Result of calculation:  %d     %d       %d\n", numerator1, numerator2, resultNumerator);
                printf("                        __  /  __   =__\n");
                printf("                        %d     %d       %d\n", denominator1, denominator2, resultDenominator);
            }
       }
    }

    return 0;
}