/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int mark1 , mark2 ,sum;
	float average;
	 
	printf("enter the first subject mark:"); 
	scanf("%d", &mark1);
	
	printf("enter the second subject mark:"); 
	scanf("%d", &mark2);

	sum = (mark1 + mark2);


	average = (sum/2);

	printf("average is %.2f", average);
  
  
  return 0;
}

