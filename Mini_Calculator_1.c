//Project Mini-Calculator -01

#include<stdio.h>

int main(){

    //declaring variables
    float num1,num2;
    int number1,number2;
    char opera_tor;

    //intro heading
    printf("\t\t\t\t\t\t\tMini-Calculator\n");
    printf("\t\t\t\t\t================================================\n");


    printf("\n\n-----------------------------------------------------------------------------\n");
    printf("|*****Notes*****                                                            |\n");
    printf("|--to calculate square root of any number use '$' sign--                    |\n");
    printf("|--to calculate square root of any number use this format: 'number$0'--     |\n");
    printf("-----------------------------------------------------------------------------\n\n\n");

    //primary inputs
    printf("\t\t\t\t\t\tEnter your calculation:\n\t\t\t\t\t\t");
    scanf("%f %c %f",&num1,&opera_tor,&num2);
    switch(opera_tor){
    case '+':
        printf("\t\t\t\t\t\t%.4f %c %.4f= %.4f",num1,opera_tor,num2,num1+num2);
        break;
    case '-':
        printf("\t\t\t\t\t\t%.4f %c %.4f= %.4f",num1,opera_tor,num2,num1-num2);
        break;
    case '*':
        printf("\t\t\t\t\t\t%.4f %c %.4f= %.4f",num1,opera_tor,num2,num1*num2);
        break;
    case '/':
        printf("\t\t\t\t\t\t%.4f %c %.4f= %.4f",num1,opera_tor,num2,num1/num2);
        break;
    case '%':
        number1=num1;
        number2=num2;
        printf("\t\t\t\t\t\t%d %c %d= %d",number1,opera_tor,number2,number1%number2);
        break;
    case '^':
        printf("\t\t\t\t\t\t%.4f %c %.4f= %.4f",num1,opera_tor,num2,pow(num1,num2));
        break;
    case '$':
        num2=0;
        printf("\t\t\t\t\t\troot(%.4f)= %.4f",num1,sqrt(num1));
        break;
    }

}
