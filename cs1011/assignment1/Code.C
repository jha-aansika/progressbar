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


//q3
#include <stdio.h>

int main() {
    // Declare simple variables for the marks
    int math = 78;
    int physics = 65;
    int stats = 82;
    
    int total;
    float average;

    // Perform calculations
    total = math + physics + stats;
    average = total / 3.0; // Using 3.0 gives an exact decimal point result

    // Print the results cleanly
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

//q4
#include <stdio.h>

int main() {
    int n = 5; // Let's assume there are 5 students
    int marks[5] = {85, 92, 45, 76, 88}; // Sample marks array
    int sum = 0;
    int highest = 0;
    float average;

    // Use a simple for loop to check each student's marks
    for (int i = 0; i < n; i++) {
        sum = sum + marks[i]; // Add current mark to total sum
        
        // Check if the current mark is the highest seen so far
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }

    average = (float)sum / n;

    printf("Highest Mark in Class: %d\n", highest);
    printf("Class Average Mark: %.2f\n", average);

    return 0;
}

//q5
#include <stdio.h>

int main() {
    int correctPin = 2580;
    int enteredPin;
    int attempts = 0;

    // Simulated user inputs for 3 attempts (wrong, wrong, correct)
    int inputs[3] = {1111, 2222, 2580}; 

    // Loop runs as long as attempts are under 3
    while (attempts < 3) {
        enteredPin = inputs[attempts]; // Simulating typing a PIN
        attempts = attempts + 1;
        
        printf("Attempt %d: Enter PIN: %d\n", attempts, enteredPin);

        if (enteredPin == correctPin) {
            printf("Access Granted!\n");
            return 0; // Exit the entire program immediately since PIN is correct
        } else {
            printf("Incorrect PIN.\n");
        }
    }

    // If the loop finishes without hitting 'return 0', they ran out of attempts
    printf("Too many wrong attempts. System Locked Out.\n");
    return 0;
}


//q6
#include <stdio.h>

// 1. Function to calculate total marks
int findTotal(int m1, int m2, int m3) {
    return m1 + m2 + m3;
}

// 2. Function to calculate average marks
float findAverage(int total) {
    return total / 3.0;
}

// 3. Function to determine pass or fail status
void checkPassOrFail(int m1, int m2, int m3) {
    // Check if the student scored 40 or above in EVERY subject
    if (m1 >= 40 && m2 >= 40 && m3 >= 40) {
        printf("Result: PASSED\n");
    } else {
        printf("Result: FAILED\n");
    }
}

int main() {
    int sub1 = 78;
    int sub2 = 65;
    int sub3 = 82;
    
    int totalScore;
    float averageScore;

    // Call the functions step-by-step
    totalScore = findTotal(sub1, sub2, sub3);
    averageScore = findAverage(totalScore);

    printf("Total Marks: %d\n", totalScore);
    printf("Average Marks: %.2f\n", averageScore);
    
    // Call the function that prints pass or fail directly
    checkPassOrFail(sub1, sub2, sub3);

    return 0;
}


