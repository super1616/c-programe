#include<stdio.h> // calc 
int main(){
    char op;
    int a,b;
    printf("enter an operator");
    scanf("%c",&op);
    printf("enter two operands: ");
    scanf("%d%d",&a,&b);
    switch (op)
    {
    case '+':
        printf("sum=%d",a+b);
        break;
        case '-':
        printf("substract=%d",a-b);
        break;
        case '*':
        printf("multiply=%d",a*b);
        break;
        case '/':
        printf("divide=%d",a/b);
        break;
        case '%':
        printf("modulus=%d",a%b);
        break;
    default:
    printf("error! operator is not correct");
        break;
    }
    return 0;
}