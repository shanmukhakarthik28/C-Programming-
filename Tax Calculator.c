#include <stdio.h>

int main()
{
    //     Calculate income tax paid by an employee to the government as per the slabs
    // mentioned below:
    // Income Slab
    // 2.5 – 5.0L
    // 5.0L - 10.0L
    // Above 10.0L
    // Tax
    // 5%
    // 20%
    // 30%
    // Note that there is no tax below 2.5L. Take income amount as an input from the user.
    int income;
    float tax=0;
    printf("Enter INCOME ");
    scanf("%d",&income);
    if(income<250000){
           tax = 0;
    }
    if(income>250000 && income<=500000){
        tax = 0.05 * (income - 250000);
    }
    if(income>500000 && income<=1000000){
        tax= 0.05 * (500000-250000) + 0.2 * (income-500000);
    }
    else{
        tax = 0.05 *( 500000-250000) + (1000000-500000)* 0.2 + 0.3 * ( income-1000000);
    }
    printf("Tax Applied is %.3f",tax);
    // can use %.3f to get 3 decimal value in answer

    return 0;
}