#include <stdio.h>
#include <math.h>
float discriminant(float a, float b,float c);
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
    d = discriminant(a,b,c);
    if (d< 0){
	printf("\t\nImaginary\n");
}
	else {
	printf("\t\nReal\n");
			
}
    
    printf("\n\t a = %f b = %f c = %f",a,b,c);
    printf("\n\t The discriminant is %f ",d);
        printf("\n\t ************* \n");
    return 0;
}
 
 
float discriminant (float a, float b, float c){
        float d = (b*b-4*a*c); 
        return d;
}
