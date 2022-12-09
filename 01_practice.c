//  THE AREA OF LEANGTH AND BREADTH
// #include<stdio.h>
// int main(){
//     int length,breadth;
//     printf("what is the length of the rectangle\n");
//     scanf("%d",&length);
//     printf("what is the length of the rectangle\n");
//     scanf("%d",&breadth);
//     printf("The area of your rectangle is %d",length*breadth);
//     return 0;
// }

// LEAP YEAR
// #include <stdio.h>

// int main()
// {

//     int year;
//     printf("Enter a year :");
//     scanf("%d", &year);

//     // leap year if perfectly divisible by 400
//     if (year % 400 == 0)
//     {
//         printf("%d  is a leap year. ", year);
//     }
//     // not a leap year if divisible by 100
//     // but divisible by 400
//     else if (year % 100 == 0)
//     {
//         printf("%d is not a leap year.", year);
//     }
//     // leap year if not divisible by 100
//     // but divisible by 4
//     else if (year % 4 == 0)
//     {
//         printf("%d is a leap year.", year);
//     }

//     else
//     {
//         printf("%d is not a leap year.", year);
//     }
//     return 0;
// }
//   CALCULATE THE LENGTH AND BREADTH
// #include<stdio.h>

// int main(){

//     int length=3, breadth=8;
//     int area = length*breadth;
//     printf("The area of this rectangle is \n%d",area);
//     return 0;
// }

// Add the three values in this program.
// #include <stdio.h>

//     int main()
// {   int a;
//     float b;
//     double c;

//     printf("Add the a :\n");
//     scanf("%d", &a);
//     printf("Add the b :\n");
//     scanf("%f", &b);
//     printf("Add the c :\n");
//     scanf("%lf", &c);

//     printf("Add a three values %d");

//     return 0;
// }

//    INCOME TAX CALCUATION
// #include <stdio.h>

// int main()
// {
//     float tax = 0, income;
//     printf("Enter your income :\n");
//     scanf("%f", &income);

//         if (income >= 250000 && income <= 500000)
//     {
//         tax = tax + 0.05 * (income - 250000);
//     }
//     if (income >= 500000 && income <= 1000000)
//     {
//         tax = tax + 0.25 * (income - 500000);
//     }
//     if (income >= 50000000)

//     {
//         tax = tax + 0.37 * (income - 1000000);
//     }
//     printf("Your net income tax to be paid by 26th of this month is %f\n", tax);
//     return 0;
// }

//    CALCULATE THE PI VALUE
// #include<stdio.h>

// int main(){
//     int radius=3;
//     float pi=3.14;
//     printf("The area of this circle is %f",pi*radius*radius);
//     return 0;
// }
//   CALCULATE THE CYLINDER
// #include <stdio.h>

// int main()
// {
//     int radius = 3;
//     float pi = 3.14;
//     printf("The area of this circle is %f\n", pi * radius * radius);
//     int height = 3;
//     printf("volume of this cyclinder is %f\n", pi * radius * radius * height);
//     return 0;
// }
//    CALCULATE THE PERCENTAGE OF 3 SUBJECTS
// #include <stdio.h>

// int main()
// {
//     int physics, chemistry, maths;
//     float total;
//     printf("Enter physics marks\n");
//     scanf("%d", &physics);
//     printf("Enter chemistry marks\n");
//     scanf("%d", &chemistry);
//     printf("Enter maths marks\n");
//     scanf("%d", &maths);
//     total = (physics + chemistry + maths) / 3;
//     if ((total < 40) || physics < 33 || chemistry < 33 || maths < 33)
//     {
//         printf("Your total percentage is %f and are fail\n", total);
//     }
//     else
//     {
//         printf("Your total percentage  is %f and you are pass\n ", total);
//     }

//     return 0;
// }
//    celcsius temperature in fahrenhet
// #include<stdio.h>

// int main(){
//     float celsius = 37, far;
//      far = (celsius*9/5)+32;
//  printf("the value of this celcsius temperature in fahrenhet is %f",far);
//     return 0;
// }
// simple intrest calculate

//    #include<stdio.h>

//    int main(){
//     int principal =100, rate=4 ,year=1;
//     int simpleIntrest=(principal *rate*year);
//     printf("the value of simpleintrest is %d",simpleIntrest);
//     return 0;
//    }
//
//
//   Write a program to determine whether a number is dividible by 97 or not

// #include<stdio.h>

// int main(){
//       int num;
//       printf("Enter the number:\n");
//       scanf("%d",&num);
//       printf("Divisibility test return:%d\n",num%97);
//     return 0;
// }

// calculate income tax paid by on employee to the government as per the s states mentioned below
//  income slab       Tax
// 2.5 lack           5%
// 5.0 lack           20%
// above 10.0 lack    30%
// #include<stdio.h>

// int main(){
//     float tax =0,income;
//     printf("Enter your income:\n");
//     scanf("%f",&income);
//     if(income>=250000&&income<=500000)
//     {
//         tax = tax + 0.05*(income-250000);
//     }
//     if(income>=500000&&income<=1000000)
//     {
//         tax=tax + 0.20*(income-500000);
//     }
//     if (income>=1000000)
//     {
//         tax=tax+0.30*(income-1000000);
//     }
//     printf("Your net income tax to be paid by 26th of this month is :%f\n",tax);
//     return 0;
// }

// character in lowercase or not find it out
//  #include <stdio.h>

// int main()
// { // 97-122= a - z
//     char ch;
//     printf("Enter the character:\n");
//     scanf("%c", &ch);
//     if (ch <= 122 && ch >= 97)
//     {
//         printf("It is lowercase");
//     }
//     else
//     {
//        printf("It is uppercase");
//     }
//     return 0;
// }
// do while loo....................................................
// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     int n;
//     printf("Enter the value of n\n");
//     scanf("%d", &n);
//     do
//     {
//         printf("The number is %d\n", i + 1);
//         i++;
//     } while (i < n);

//     return 0;
// }

//  for loop.............................increment for loop...
// #include<stdio.h>

// int main(){
//     for (int i = 0; i < 10; i++)
//     {
//         /* code */printf("The value of i is %d\n",i);
//     }

//     return 0;
// }
// decrement.......................for loop
// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the vlaue of n\n");
//     scanf("%d",&n);
//     for(n = 5; n;n--)
//     {
//         printf("The n of natural number is %d\n",n);
//     }
//     return 0;
// }

// continue statement..................................

// #include <stdio.h>

// int main()
// {
//     int skip = 5, i = 0;
//     while (i < 10)
//     {
//         i++;
//         if (i != skip)
//         {
//             continue;
//         }
//         else
//         {
//             printf("%d", i);
//         }
//     }

//     return 0;
// }

