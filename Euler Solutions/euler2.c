# include <stdio.h>

int main() {
    
  float i, n;
  
  float t1 = 0, t2 = 1;
  
  float nextTerm = t1 + t2 ;
  
  scanf("%f", &n);
  
  printf("fibonacci series: %f, %f,", t1, t2);
    
    for(i = 3; i<=n; ++i){
        
        printf(" %f,", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        
        
    }
        
       

}
