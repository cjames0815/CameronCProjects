//pre processor directives

// include C header file
#include "./headers/Pointers.h"

//write code for functions declared in Pointers.h

//this function prints out its own address to stdout
void printAddress(void){
    printf("The printAddress function is stored at memory location %p.\n", printAddress);
}

//this function returns the address of the global 
//variable
int * getAddress(void){
    //declare a pointer to an int
    //the star is needed when declaring a pointer
    int*ptr;

    //get the address of the global variable 
    // and store it inthe pointer
    //the ampersand is needed when getting the address 
    //of the variable 
    ptr =&i;

    // return the address in pointer 
    // neither the ampersand or the star are needed when 
    //using an address in a pointer
    return ptr;
}

//this fucntion returns the value at an address of
//the global variable i
int getDataAtAddress(void){
    //declare a pointer to an int
    //the star is needed when declaring a pointer
    int*ptr;

    //get the address of the global variable i 
    // and store it inthe pointer
    //the ampersand is needed when getting the address 
    //of the variable 
    ptr =&i;

    // return the value stored at the address in the pointer 
    //the star is needed when accessing a value at an 
    //address in a pointer
    return *ptr;
};

// this function changes the value at the address of 
//the global variable j
double storeDataAddress(void){
    //declare a pointer to an double
    //the star is needed when declaring a pointer
    double*ptr;

    //get the address of the global variable j
    // and store it in the pointer
    //the ampersand is needed when getting the address 
    //of the variable 
    ptr =&j;

    //change the value in the global variable j 
    // by using pointer
    //the star is needed when accessing the value 
    // in a pointer
    ptr = &j;

    // return the value stored at the address in the pointer 
    //the star is needed when accessing a value at an 
    //address in a pointer
    return *ptr;
};

// this function returns the size (memory allocation in bytes)
// of the value in the global variable
int getDoubleBytes(void){

    //declare a pointer to an double
    //the star is needed when declaring a pointer
    double*ptr;

    //get the address of the global variable j
    // and store it in the pointer
    //the ampersand is needed when getting the address 
    //of the variable 
    ptr =&j;

    //change the value in the global variable j 
    // by using pointer
    //the ampersand is needed when accessing the value 
    // in a pointer
    ptr = &j;

    // return the size of the value in the pointer 
    //the star is needed when accessing a value at an 
    //address in a pointer
    return sizeof(*ptr);
}


int getPointerToDoubleBytes(void){
    //declare a pointer to an double
    //the star is needed when declaring a pointer
    double*ptr;

    //get the address of the global variable j
    // and store it in the pointer
    //the ampersand is needed when getting the address 
    //of the variable 
    ptr =&j;

    //change the value in the global variable j 
    // by using pointer
    //the ampersand is needed when accessing the value 
    // in a pointer
    ptr = &j;

    // return the size of the pointer
    //neither the star nor ampersand are needed 
    // when using an address in a pointer
    return sizeof(ptr);
}

int getIntBytes(void){

//declare a pointer to an double
    //the star is needed when declaring a pointer
    int*ptr;

    //get the address of the global variable i
    // and store it in the pointer
    //the ampersand is needed when getting the address 
    //of the variable 
    ptr =&i;

    //change the value in the global variable i 
    // by using pointer
    //the ampersand is needed when accessing the value 
    // in a pointer
    ptr = &i;

    // return the size of the pointer
    //neither the star nor ampersand are needed 
    // when using an address in a pointer
    return sizeof(*ptr);
}

int getPointerToIntBytes(void){
      //declare a pointer to an int
    //the star is needed when declaring a pointer
    int*ptr;

    //get the address of the global variable i 
    // and store it inthe pointer
    //the ampersand is needed when getting the address 
    //of the variable 
    ptr =&i;

    // return the value stored at the address in the pointer 
    //the star is needed when accessing a value at an 
    //address in a pointer
    return *ptr;
}
//this function prints the address of a pointer to a 
//double that stores NULL
int getPointerToIntBytes(void) {
     //declare a pointer to an double
    //the star is needed when declaring a pointer
    double*ptr;

    //stroing NULL in pointer
    //NULL is an address where no data exists
    ptr =NULL;

    //check of pointer is NOT NULL
    //neither the ampersand nor the star are needed 
    //when using an address in a pointer 
    // NOT NULL - True
    // NULL - False
    if (ptr) {
        //neither the ampersand nor the star are needed 
    //when using an address in a pointer 
        printf("THe address of the pointer to a double that does not store NULL is %p.\n", ptr);
     } else {
        //neither the ampersand nor the star are needed 
    //when using an address in a pointer 
        printf("The address of the pointer to a double that does store NULL is %p.\n", ptr);
     }

 
}

