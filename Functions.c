//pre-processor directives

// include Functions.h header file
#include "./headers/Functions.h"

//write code for functions declared in Functions.h'

// this function uses parmeters all having the char * type
// strings don't exist as a type in C like they do in Java or Python.
// in C strings are treated like an array of characters and are
//referred to as the char * type 
//when you have a * in a parameter (or variable), it meand the parameter 
//(or variable) is a pointer 
//pointers refer to memory locations instead of holding values
//char * means the parameters refer to a memory location that stores 
//an array of charaters 
//this iis how C deals with strings 
//you could als have int *, or float *, or double * types. 
void congratulate1(char *student, char * language, char *programmer){
    //display a message to stdout
    printf("%s has done as much %s programming as %s. \n", student, language, programmer);

}

//this function uses the strlen function in string.h
void congratulate2(char *student, char *language, char *programmer){
    //declare and initialize local variable by 
    //calling strlen
    int days = strlen(programmer);

    //display a message to stdout
    printf("%s has done as much %s programming as %s. \n", student, language, programmer,days);
}

//this function converts a celsius  temputure to a 
// fahrenheit tmeperature and returns it 
float fahrenheitFromCelsius(float celsius) {
    //use macro expression for conversion 
    return FAHRENHEIT(celsius);
}