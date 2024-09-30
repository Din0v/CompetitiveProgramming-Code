# include <stdio.h>
# include <math.h>

#define max 10 // the length of an array!!
// global Variables
int top =-1;
int stack[max]; //max == 10, array con 11 elementi

void push (int); //prototipo 
int pop();
int findArmstrong(int);

// fa il lavoro di una funzione "chiamante"
void main(){ 
    int n; //where to store the input number 
    printf("Enter a number: ");
    scanf("%d", &n);

    if (findArmstrong(n)) // si passa n alla funzione
        printf("%d is an armstrong number\n", n);
    else    printf("%d is NOT an armstrong number", n);
}

int findArmstrong(int numb){
    int j, remainder, temp, count, value;  // 5 variabili 
    temp = numb;
    count=0;

    while(numb >0){
        remainder=numb%10;
        push(remainder);
        count++;
        numb=numb/10;
    }

    numb=temp;
    value=0;

    while(top>=0){
        j= pop();
        value=value+ pow(j,count);
    }
    if(value==numb)
        return 1;  // la risposta al if della chiamata della Main
    else return 0;
}


void push(int m){
    top++;
    stack[top] = m;
}



int pop(){
    int j;
    if(top ==-1)
        return(top);
    else{
        j=stack[top];
        top--;
        return(j);
    }
}