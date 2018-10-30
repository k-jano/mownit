#include <stdio.h>
#include <float.h>

int main(void){
    printf("\n-----SINGLE PRECISION-----\n");
    float myVal = 1.0;
    float myEps = 1.0;

    while(myVal+(float)(myEps *0.5)!=myVal)
        myEps*=0.5;
    
    printf("My epsilon: %g\n", myEps);
    printf("Definied in float.h: %g\n", FLT_EPSILON);

    printf("\n-----DOUBLE PRECISION-----\n");

    double myValD = 1.0;
    double myEpsD = 1.0;

    while(myValD + (double)(myEpsD*0.5)!=myValD)
        myEpsD*=0.5;

    printf("My epsilon: %g\n", myEpsD);
    printf("Definied in float.h: %g\n", DBL_EPSILON);
}