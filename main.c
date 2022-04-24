#include <stdio.h>
int main()
{
    char category;
    int tempchoice;
    int currencychoice;
    int distance;
    int F;
    int C;
    int inputINRtoEURO;
    int inputINRtoUSD;
    int inputINRtoCAD;
    float Km;
    float M;
    float In;
    float Cm;
    int FtoC;
    int CtoF;
    float INRtoEURO;
    float INRtoUSD;
    float INRtoCAD;
    
    printf("Welcome to Converter! \n");
    printf("Here is a list of convertion to choose from: \n");
    printf("Temperature(T),Currency(C),Distance(D)");
    printf("Please enter the letter you want to convert.\n");
    scanf("%c",&category);
    
    if(category=='T')
    {
        printf("Welcome to Temperature Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for Fahrenheit to Celsius. \n");
        printf("Enter 2 for Celsius to Fahrenheit. \n");
        scanf("%d",&tempchoice);
        if(tempchoice ==1)
        {
            printf("Please enter the Fahrenheit degree: \n");
            scanf("%d",&F);
            FtoC =  ((F-32) * (5.0/9.0));
            printf("%d Fahrenheit: %d Celsius",F,FtoC);
        }
        else 
        {
            printf("Please enter the Celsius degree: \n");
            scanf("%d",&C);
            CtoF = ((9.0/5.0)*C + 32);
            printf("%d Celsius: %d Fahrenheit",C,CtoF);
        }
    }
    else if(category=='C')
    {
        printf("Welcome to Currency Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for INR to Euro. \n");
        printf("Enter 2 for INR to USD. \n");
        printf("Enter 3 for INR to CAD. \n");
        scanf("%d",&currencychoice);
        
        if(currencychoice == 1)
        {
            printf("Please enter the INR amount: \n");
            scanf("%d",&inputINRtoEURO);
            INRtoEURO = inputINRtoEURO * 0.012;
            printf("%d INR: %.2f EURO",inputINRtoEURO,INRtoEURO);
        }
        else if(currencychoice == 2)
        {
            printf("Please enter the INR amount: \n");
            scanf("%d",&inputINRtoUSD);
            INRtoUSD = inputINRtoUSD * 0.013;
            printf("%d INR: %.2f USD",inputINRtoUSD,INRtoUSD);
        }
        else if(currencychoice == 3) 
        {
            printf("Please enter the INR amount: \n");
            scanf("%d",&inputINRtoCAD);
            INRtoCAD = inputINRtoCAD * 0.017;
            printf("%d INR: %.2f CAD",inputINRtoCAD,INRtoCAD);
        }
    }
    else
    {
        printf("Welcome to Distance converter! \n");
        printf("Here is a list of convertion to choose from: \n");
        printf("Enter 1 for Km to M. \n");
        printf("Enter 2 for In to Cm. \n");
        scanf("%d",&distance);
        if(distance==1)
        {
            printf("Enter the distance in Km: \n");
            scanf("%f",&Km);
            M = Km*1000;
            printf("%.2f Km: %.2f M",Km,M);
        }
        else
        {
            printf("Enter the distance in In: \n");
            scanf("%f",&In);
            Cm = In*2.54;
            printf("%.2f In: %.2f Cm",In,Cm);
        }
    }
    return 0;
}   