/*This is a Gcd function taken from the cryptography book 
*/


int gcd(int x, int y){
    int g;
    if(x<0){
        x = -x;
    }
    if(y<0){
        y = -y;
    }
    if(x + y == 0){
        return -1;
    }

    g = y;
    
    while(x>0){
        g = x;
        x = y%x;
        y = g;

    }
    return g;
}

