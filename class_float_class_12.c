#include<stdio.h>

int main (void)

{
    float weight_1 = 12.4679;
    printf("weight %f\n",weight_1);
    
    
    float Rupees = 50.35;
    printf("Rupees %f\n",Rupees);
    
    
    float Bank_Blance = 5864.2357078;
    printf("Bank Blance %f\n", Bank_Blance);
    
    float Total_money = Bank_Blance + Rupees;
    printf("Total money is:%f\n", Total_money);
    
    float subtractin = Bank_Blance - Rupees;
    printf("subtractin is:%f\n",subtractin);
    
    float multiplication = Bank_Blance * Rupees;
    printf("multiplication is:%f\n",multiplication);
    
    float division = Bank_Blance / Rupees;
    printf("division is: %f\n",division);
}

