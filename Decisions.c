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
        print("%.if is less than 4000.0\n", num);
    }else{
        printf("%.1f is not less than 4000.0\n", num);
    }

    //use an if-else-if statement
    if (num == 0.0){
        printf("%.1f is equal to 0.0\n", num);
    }else if (num > 0.0){
        printf("%.1f is equal to 0.0\n", num);
    }else if (num > 0.0){
        printf("%.1f is equal to 0.0\n", num);
    }

}