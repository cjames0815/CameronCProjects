// pre-processor directives

// include BasicIo.h header file
#include "./headers/BasicIo.h"

// write code for functions declared in BasicIo.h

//this function will use printf and puts to output
//data to stdout (terminal)
void output(void) {
    // printf formats and outputs data to stdout
    // it does not append a new line charaters to 
    // the end of its outputs
    printf("Your first name is %s\n", FIRST_NAME);
    printf("Your last name is %s\n", LAST_NAME);
    printf("Your weight is %.2f and your age is %d\n", WEIGHT, AGE);
    
    //puts outputs a string to stdout
    // it does append a new line character 
    // the of its output
    puts(FIRST_NAME);
    puts(LAST_NAME);
}

//this function will use scanf and fgets to input data from 
void input(void) {
    //declare variables to store input data
    int age;
    char name[]="";//this is a C string
    float weight;
    char fullname[50] = ""; //is is a C string too
    
    //fgets does not stop at the first string token when it 
    //reads in a string
    printf("Enter your full name:");
    fgets(fullname,sizeof fullname, stdin);
    printf("Entered full name is: %s", fullname);
   
    
    //prompt to input age
    printf("Enter your age: ");
    //scanf reads the value from stdin per the
    //type specified in the format specifier
    //and stores it in the address of the specified 
    // variable
    scanf("%d", &age);
    printf("Entered age is: %d\n", age);


    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("Entered name is: %.2f\n", weight);

    printf("Enter your name: ");
    //scanf stops at the first string token when it reads a string
    scanf("%s", &name);
    printf("Entered age is: %s\n", name);

}