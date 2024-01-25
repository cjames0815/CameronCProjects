// pre-processor directives

// include BasicIo.h header file
#include "./headers/Decisions.h"

// write code for functions declared in BasicIo.h

//this function uses the comparison operators 
// and the if, if-else, and if-else-if statments

void decisions1(void){
    //declare variable of type float that will be used in conditions
    //initialize it using macro value defined in header file
    float num = NUM;

    //use an if statement
    if (num < 40000.0) {
        printf("%.if is less than 4000.0\n", num);//displayed
    }else{
        printf("%.1f is not less than 4000.0\n", num);
    }

    // use an if-else statement
    if  (num < 40000.0) {
        printf("%.if is less than 4000.0\n", num);
    }else{
        printf("%.1f is not less than 4000.0\n", num);
    }
    
    // change valuein variable 
    num = 0;
    
    //use an if-else-if statement
    if (num == 0.0){
        printf("%.1f is equal to 0.0\n", num); // not displayed
    }else if (num > 0.0){
        printf("%.1f is equal to 0.0\n", num); // not displayed
    }else if (num > 0.0){
        printf("%.1f is equal to 0.0\n", num); // not displayed
    }
}

//this function uses the logical operators
void decisions2(void) {
    //declare variable of type float that will be used in conditions
    //initialize it using macro value defined in header file
    float num = NUM;

    //uses the logical AND operator 
    if (num > 0.0 && num < 40000.0){
        printf("%.1f is between 0.0 and 4000.0\n", num); //dialayed if all conditions are true - displayed
    }

    //change the value in variable
    num += num;

    //use the logical operator
     if (num > 0.0 && num < 40000.0){
        printf("%.1f is between 0.0 and 4000.0\n", num); //dialayed if one conditions is true - displayed
    }
    // use the logical NOT operator
    // the NOT logical operator invereses the bool value its given 
    if (!(num > 0.0 && num < 40000.0)){
        printf("%.1f is between 0.0 and 4000.0\n", num); // displayed
    }
}

// this function
void decisions3(void){
     //declare variable of type float that will be used in conditions
    //initialize it using macro value defined in header file
    float num = NUM;

    // declare and initialize bool variable
    bool isNotBetween = !(num > 0.0 && num < 40000.0); //false

    //use bool variable in an if-else statement
    if (isNotBetween){
        printf("%.1f is not between 0.0 and 40000.0\n", num); //not displayed
    }else{
        printf("%.1f is between 0.0 and 40000.0\n", num); // is displayed
}
}

// this function uses the tenerary operator 
// the tenerary operator is only operator that has 3 operands 
void decisions4(void){
    //declare variable of type float that will be used in conditions
    //initialize it using macro value defined in header file
    float num = NUM;

    // declare and initialize bool variable 
     bool isNotBetween = !(num > 0.0 && num < 40000.0); //false

     //declare a variable of type float 
     //initialize it using the ternary operator 
     // operand 1 is bool expression that gets evaluated
     // operand 2 is the value that gets returned if the bool expression is True 
     // operand 3 is the value that gets returned if the bool expression is False 
     float extra = isNotBetween ? (num - 40000.0) : 0.0; // operand 3 will get assigned to extra

     //display the value in extra
        printf("%.1f\n",extra);
}

// this function uses the switch statement
void decisions5(void){
    //declare variables
    char operation;
    int num1;
    int num2;

    //prompt user to input operation 
    printf("Enter and operation (+, -, *, /,):");
    scanf("%c", &operation);

    //prompt user to input numbers 
    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    //use switch statement to evaluate operation 
    switch (operation)
    {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            break;
        default:
            printf("Invalid operation!");
    }
    
}

// this function illustrates short circuit evaluation 
// this is when the compiler skips the evaluation of 
// sub-expression in a logical expression 
void decision6(void){
    //declare and initialize variables that will be used 
    // in logical expressions 
    int x = 1;
    bool y = true;

    //short circuit evaluation will not occur 
    //because all sub-expression are true
    if (x == 1 && y){
        printf("If block excuted.\n"); // displayed
    }else{
        printf("If block not executed. \n"); // not displayed
    }
    //short circuit evalution will occur because the first sub-expression is false 
    if (x == 0 && y){
        printf("If block excuted.\n"); // not displayed 
    }else{
        printf("If block not executed. \n"); // displayed
    }

//short circuit evaluation will  occur 
    //because all sub-expression is true
     if (x == 1 || y){
        printf("If block excuted.\n"); // displayed
    }else{
        printf("If block not executed. \n"); // not displayed
    }

//short circuit evaluation will not occur 
    //because the first sub-expression is false
    if (x == 0 || y){
        printf("If block excuted.\n"); // displayed
    }else{
        printf("If block not executed. \n"); // not displayed
    }
}


 