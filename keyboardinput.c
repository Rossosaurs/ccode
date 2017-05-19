#include <stdio.h>
#include <math.h>
float squareroot (float a, float b,float c);
float main(){
    float a,b,c,d;
    printf("\n\t *********\n");
    printf("\t Type in 3 values for a,b and c. Type Enter after each input.\n");
    printf("\t Input a:");
    scanf("%f", &a );
    printf("\t Input b:");
    scanf("%f", &b );
    printf("\t Input c:");
    scanf("%f", &c );
    d = squareroot(a,b,c);
    printf("\n\t a = %f b = %f c = %f",a,b,c);
    printf("\n\t The square root of a+b+c is %f ",d);
        printf("\n\t ************* \n");
    return 0;
}
 
 
float squareroot (float a, float b, float c){
        float d = sqrt(a+b+c);
        return d;
}
