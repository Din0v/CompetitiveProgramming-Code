#include <ctype.h>  // we used it for the iscntrl() 
#include <stdio.h> // we used it for the printf()
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>


struct termios orig_termios; // orig stands for original terminal state. 



void disableRawMode(){
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios); 
    /*Terminal control set attribute and it takes 3 paramenters*/
}

// this functions turns echoing off
void enableRawMode(){ 
    
    tcgetattr(STDIN_FILENO, &orig_termios);
    atexit(disableRawMode); // this comes from the stdlibrary. 
        
    struct termios raw = orig_termios; // this is a data structure which contians those attributes in it. 
    
/*first attribute */   
    tcgetattr(STDIN_FILENO, &raw);
    
/*second attribute */       
    raw.c_lflag &= ~(ECHO | ICANON); // The addition of OR ICANON Disables the Canonical mode so it is either echoing or not. it makes my program quit as soon as i press q no more need to press enter
    
/*third attribute */     
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}




int main (){
    enableRawMode();

    char c;
// the q is for quitting condition which is a potential vulnerability     
    while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q'){ 
// those lines of code allows the raw mode to print the charchters in ascii in the terminal view.    
        if ( iscntrl(c) ){  // iscontrl () tests if the charchter is a control character. 
            printf("%d\n", c);
          } else {
            printf("%d ( '%c')\n", c, c);
        }
        
        }
          return 0; 
}
