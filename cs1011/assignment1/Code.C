// Q1

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

//Q 2
#include <stdio.h>
int main(){

    int units, first, second, third, fourth, finalp;
    units = 375;
    
if (units<= 100)
{first = (units*2);
        finalp = first;}
            
else  if (units <= 200)
    {first = (100*2);
        second = (units-100)*3;
        finalp = first+second;}

else  if (units <= 300)
{first = (100*2);
        second = (100)*3;
        third = (units-200)*4;
        finalp = first+second+third;}

else  if (units > 300)
{first = (100*2);
        second = (100)*3;
        third = (100)*4;
        fourth = (units - 300)*6;
        finalp = first+second+third+fourth;}
else 
        printf("Number entered is wrong.");
        
         
printf("The total electricity bill is: %d \n", finalp);
    return 0;
}
