#include <stdio.h>
#include <math.h>
float discriminant(float a, float b,float c);
float main(){
    float a,b,c,d,x1,x2;
    float a1,b1,a2,b2;
    printf("\n\t *~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n");
    printf("\t Type in 3 values for a,b and c. Type Enter after each input.\n");
    printf("\t Input a:");
    scanf("%f", &a );
    printf("\t Input b:");
    scanf("%f", &b );
    printf("\t Input c:");
    scanf("%f", &c );
    d = discriminant(a,b,c);
    if (d< 0){
	printf("\t Imaginary\n");
	
	
	d = (d * -1);
	a1 = (-1 * b)/(2*a);
	b1 = (1 * sqrt(d) )/(2*a);
	
	a2 = (-1 * b)/(2*a);
	b2 = (-1 * sqrt(d) )/(2*a);
	printf("\t Imaginary Roots %f + %f i\n",a1,b1);
	printf("\t Imaginary Roots %f + %f i\n",a2,b2);
	
	
	
}
	else {
	printf("\t\nReal\n");
	x1 = ((-1*b)+sqrt(d))/(2*a);
	x2 = ((-1*b)-sqrt(d))/(2*a);
			printf("\t Roots %fand %f\n",x1,x2);
}
  
    printf("\n\t a = %f b = %f c = %f",a,b,c);
    printf("\n\t The discriminant is %f ",d);
        printf("\n\t *~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~* \n");
    return 0;
}
 
 
float discriminant (float a, float b, float c){
        float d = (b*b-4*a*c); 
        return d;
    
}
