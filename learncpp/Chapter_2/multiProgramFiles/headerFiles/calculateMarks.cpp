#include "calculateMarks.h" // this is important to check for not matching parameters 

int calculateMarks(int internalMarks, int externalMarks, int extraCredit){ // if you change the parameters any of these over here to double or float, the compiler would throw an error 
    
    return internalMarks + externalMarks + extraCredit;

}