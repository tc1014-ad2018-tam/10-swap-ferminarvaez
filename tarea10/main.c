int main() {
    double num1;
    double num2;
    double num3;
    
    printf("Give me one value: \n");
    scanf("%lf", &num1);
    printf("Give me another one: \n");
    scanf("%lf", &num2);
    printf("Give me another one: \n");
    scanf("%lf", &num3);
    
    if (num3>num1 && num3>num2 && num2>num1) {
        printf("\nThe highest is %lf\n", num3);
        printf("The middle one is %lf\n", num2);
        printf("The lowest is %lf\n", num1);
    }
    
    if (num3>num1 && num1>num2) {
        printf("\nThe highest is %lf\n", num3);
        printf("The middle one is %lf\n", num1);
        printf("The lowest is %lf\n", num2);
    }
    
    if (num2>num1 && num2>num3 && num3>num1) {
        printf("\nThe highest is %lf\n", num2);
        printf("The middle one is %lf\n", num3);
        printf("The lowest is %lf\n", num1);
    }
    
    if (num2>num1 && num1>num3) {
        printf("\nThe highest is %lf\n", num2);
        printf("The middle one is %lf\n", num1);
        printf("The lowest is %lf\n", num3);
    }
    
    if (num1>num3 && num1>num2 && num3>num2) {
        printf("\nThe highest is %lf\n", num1);
        printf("The middle one is %lf\n", num3);
        printf("The lowest is %lf\n", num2);
    }
    
    if (num1>num2 && num2>num1) {
        printf("\nThe highest is %lf\n", num1);
        printf("The middle one is %lf\n", num2);
        printf("The lowest is %lf\n", num3);
    }
    return 0;
}

