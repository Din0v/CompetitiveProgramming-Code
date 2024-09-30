# include <stdio.h>

int main() {

for( int i = 0; i < 60; i++)  				//|
	printf ("_");  					//|
   	printf("\n");					//|   this is the upper line code for formatting. 
        printf("\n");					//|
							//|
//                           -------------------------------------

  int x = 1, y = 2, z[10];  // three variables
  int *ip; // this is a pointer p with the unary derefrencing operator that when applied to a pointer it access the object that the pointer points to. 
  
  	ip = &x; // the ip pointer is now storing the address in memory of the variable x 
  	
  	printf("the value of x is %d \n", x);  
  	
  	
  	printf("the address of x is %p", ip);
  	printf("\n");
  	printf("the current value of y is: %d", y);
  	printf("\n");
  	y = *ip ; // now Y has been assigned the value of the pointer ip which is the value of X. 
  	
  	printf("the current value of y after the change is: %d", y );
  	printf("\n");
  	
  	*ip = 100 ; // x is now 0 
  		y = *ip ; 
  	printf("the current value of y is: %d \n", y);
  	printf("the value of x is %d \n", x);  
  	
  	
  	
// 				-------------------------------------------

for( int i = 0; i < 60; i++)  				//|
	printf ("_");  					//|
   	printf("\n");					//|   this is the lower line code for formatting. 
        printf("\n");					//|
							//|
}
