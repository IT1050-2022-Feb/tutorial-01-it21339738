/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int no1,no2;
  float average;
  printf("Enter thr first number\n");
  scanf("%d",&no1);
  printf("Enter the second number\n");
  scanf("%d",&no2);
   
   average =(no1 + no2)/2;
   printf("The average is:%2f",average);
  return 0;
}

