/*CF problem of vanya's socks found here
https://codeforces.com/problemset/problem/581/A
cosa ho imparato ? 
che bisogna fare attenzione ai casi speciali nel mio caso era 
il caso d'ugualianza !!*/

# include <stdio.h>

int main(){ 
    int r, b; 
    scanf("%d %d", &r, &b);

    int hipster, normal;
    if(r==b){
        printf("%d %d", r, 0);
    }
    else if(r>b){ 
        hipster = b;
        normal = (r-b)/2;

        printf("%d %d", hipster, normal);
    }
    else if(r<b){
        hipster = r;
        normal = (b-r)/2;
        printf("%d %d", hipster, normal);
    }
}

// other more efficient solution of using the aboslute Value!! and the ternary operator ? : 

int a,b;
int main(){
	scanf("%d%d",&a,&b);
	printf("%d %d",a<b?a:b,abs(a-b)/2);
}