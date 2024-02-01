//pre-processor directives 


// include needed C and header files 
#include "BasicIo.c"
#include "Decisions.c"
#include "Loop.c"
#include "Functions.c"
#include "Pointers.c"

int main(void){
    /*BasicIo*/
    //output();
    //input();

    /*Decisions*/
    //decisions1();
    //decisions2();
    //decisions3();
    //decisions4();
    //decisions5();
    //decision6();

    /*Loops*/
    //loops1();
    //loops2();
    //loops3();
    //loops4();
    //loops5();
    //recursion(START);
    
    /*Functions*/
    //declare 3 character arrays 
    //char student[] = "Sue Ceklosky";
    //char language[] = "C";
    //char programmer[] = "Dennis Richie";

    //congratulate1(student,language,programmer);
    //congratulate2(student,language,programmer);

    //printf ("%.1f degrees celsius = %.1f degrees fahrenheit.\n", 0.0, fahrenheitFromCelsius(0.0));
    //printf ("%.1f degrees celsius = %.1f degrees fahrenheit.\n", 100.0, fahrenheitFromCelsius(0.0));
        /*Pointers*/
    printAddress();
    printf("The global variable i stores its value at memory location %p. \n", getAddress());
    printf("The global variable i stores the value %d. \n", getDataAtAddress());
    printf("The global variable j now stores the value %.2f. \n", storeDataAddress());
    printf("The size of the value in the global variable j is %d bytes.\n", getDoubleBytes());
    printf("The size of the pointer to the global variable j is %d bytes.\n",getPointerToDoubleBytes());
    printf("The global variable i stores the value %d. \n", getIntBytes());
    printf("The global variable i stores the value %d. \n", getPointerToIntBytes());
}  

    