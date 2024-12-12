#include <stdio.h>
#include <math.h>

//int main(){
/*
    //1 calculate the total sale price
    int originalPrice = 200000;
    float discountPercentage = 0.10;
    float salePrice = originalPrice - (originalPrice*discountPercentage);
    printf("\n\nThe total sale price is UGX %0.1f\n\n", salePrice);
*/
/*
    //2 calculate the final salary after tax
    int originalSalary = 5000000;
    float taxRate = 0.15;
    float salaryAfterTax = originalSalary-(originalSalary*taxRate);
    printf("The salary after tax is UGX%0.1f\n\n", salaryAfterTax);

    //3 Calculate the gross profit
    int salesRevenue = 15000000;
    int cogs = 9000000;
    int grossProfit = salesRevenue - cogs;
    printf("The gross profit is UGX%d\n\n", grossProfit);

    //4 Calculate the return on investment
    int investment = 10000000;
    int profit = 12000000;
    int roi = (investment/profit) * 100;
    printf("The return on investment is UGX%d", roi);

    //5 calculate the monthly loan payment;
    int p = 50000000;
    int r = 0.05;
    int n = 5;
    float m = ((p*r)*(1+r))/((pow(1+r),n)-1);

   */
   


    //return 0;
//}
//******************************************* */
//task 6 google classroom 
//******************************************** */
//qn 11
void discountPrice(float discountRate, int price);
//qn12
void taxAmount(float taxRate, int taxableAmount);
//qn 13
void employeeSalary(float bonusRate, int salary);
//qn 14
void profitLoss(int costPrice, int sellingPrice);
//qn 15
void discountedPrice(float discRate, int originalPrice);
//qn 16
void annual();
//qn 17
void totalCost(int item1, int item2, int item3, int q1, int q2, int q3);
//qn 18
void tx(int txSalary);
//qn 19
void overDue(int noDays);
//qn 20


int main(){

    discountPrice(0.2, 25000);
    taxAmount(0.3, 50000);
    employeeSalary(0.4, 120000);
    profitLoss(10000, 40000);
    discountedPrice(0.32, 50000);
    annual();
    totalCost(3000, 3500, 2000, 2, 3, 5);
    tx(10000000);
    overDue(5);
    return 0;
}

//qn11 soln
void discountPrice(float discountRate, int price){
    float calc =price-(discountRate*price); 
    printf("\nThe discounted price is UGX%0.0f\n", calc);
}

//qn 12 soln
void taxAmount(float taxRate, int taxableAmount){
    float taxCalc = taxRate*taxableAmount;
    printf("\nThe tax value is UGX%0.0f\n", taxCalc);
}

//qn 13 sol
void employeeSalary(float bonusRate, int salary){
    float salaryCalc = salary + (bonusRate*salary);
    printf("\nThe total salary after adding the bonus is UGX%0.0f\n", salaryCalc);
}

//qn 14 soln
void profitLoss(int costPrice, int sellingPrice){
    int PLCalc = sellingPrice - costPrice;
    if (sellingPrice>costPrice){
        printf("\nThe profit is UGX%d\n", PLCalc);
    }
    else{
        printf("\nThe loss is UGX%d\n", PLCalc);
    }
    
}

//qn 15 soln
void discountedPrice(float discRate, int originalPrice){
    float discCalc =originalPrice-(discRate*originalPrice); 
    if (discRate>=0.2){
        printf("\nThe discount price is UGX%0.0f\n", discCalc);
    }
}

//qn 16 soln
void annual(){
   int invValue;
   printf("\nPlease enter your desired investment value\n");
   scanf("%d", &invValue);
   int annualR = 1000000;
   int doubledAmount = invValue*2;
   double years = doubledAmount/annualR;
   if(invValue>1000000){
   printf("Your investment value will take %0.2lf years to double\n", years);
   }
   else{
    printf("Your not eligible for the investment program\n");
   }
}

//qn 17 soln
void totalCost(int item1, int item2, int item3, int q1, int q2, int q3){
    int totCalc = (item1 *q1) + (item2*q2) + (item3*q3);
    printf("\nThe total expense of the company is UGX %d\n", totCalc);
}

//qn 18 soln
void tx(int txSalary){
    if(txSalary<3000000){
        printf("\nThe tax rate is 10%%\n");
    }else if(txSalary<7000000&&txSalary>3000000){
        printf("\nThe tax rate is 15%%\n"); 
    }else{
        printf("\nThe tax rate is 20%%\n");
    }
}

//qn 19 soln
void overDue(int noDays){
    int overdueFee = 4000;
    int odCalc = noDays*overdueFee;
    printf("\nThe total overdue fees are UGX%d\n", odCalc); 
}

//qn20 soln

