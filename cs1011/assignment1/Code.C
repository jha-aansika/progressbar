#include <stdio.h>
int main(){
int A, B, C;
int Largest;
printf("Enter 3 Integers (Separated by commas): ");
scanf("%d, %d, %d", &A, &B, &C);
if(A>B && A>C)
  Largest = A;
else if (B>C)
  Largest = B;
else
  Largest = C;

printf("The Largest integer from the given input is %d \n", Largest);
return 0;
        }
