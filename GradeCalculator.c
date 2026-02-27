#include <stdio.h>

int main()
{
    //     Quick Quiz: Write a program to find grade of a student given his marks based on below:
    // 90 – 100 => A
    // 80 – 90 => B
    // 70 – 80 => C
    // 60 – 70 => D
    // 50 – 60 => E
    // <50
    // => F
    char Grade;
    int marks = 65;
    if (marks <= 100 && marks >= 90)
    {
       printf("Grade = 'A'");
    }
    else if (marks <= 90 && marks >= 80)
    {
        printf("Grade = 'B'");
    }
    else if (marks <= 80 && marks >= 70)
    {
        printf("Grade = 'C'");
    }
    else if (marks <= 70 && marks >= 60)
    {
        printf("Grade = 'D'");
    }
    else if (marks <= 60 && marks >= 50)
    {
        printf("Grade = 'E'");
    }
    else
    {
        printf("Grade = 'F'");
    }
    return 0;
}