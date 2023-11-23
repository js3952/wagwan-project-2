#include "mbed.h"

DigitalOut a(D6), b(D7), c(D8), d(D9), e(D10), f(D11), g(D12);

class Display{

public:
//led combos for each letter
void off(){
    a = false;
    b = false;
    c = false;
    d = false;
    e = false;
    f = false;
    g = false;
}
void A(){
    a = true;
    b = true;
    c = true;
    d = true;
    e = true;
    g = true;
}
void B(){
    c = true;
    d = true;
    e = true;
    f = true;
    g = true;
}
void C(){
    d = true;
    e = true;
    g = true;
}
void D(){
    b = true;
    c = true;
    d = true;
    e = true;
    g = true;
}
void E(){
    a = true;
    d = true;
    e = true;
    f = true;
    g = true;
}
void F(){
    a = true;
    e = true;
    f = true;
    g = true;
}
void G(){
    a = true;
    c = true;
    d = true;
    e = true;
    f = true;
}
void H(){
    c = true;
    e = true;
    f = true;
    g = true;
}
void I(){
    a = true;
    e = true;
}
void J(){
    a = true;
    c = true;
    d = true;
}
void K(){
    a = true;
    c = true;
    e = true;
    f = true;
    g = true;
}
void L(){
    d = true;
    e = true;
    f = true;
}
void M(){
    a = true;
    c = true;
    e = true;
    g = true;
}
void N(){
    c = true;
    e = true;
    g = true;
}
void O(){
    c = true;
    d = true;
    e = true;
    g = true;
}
void P(){
    a = true;
    b = true;
    e = true;
    f = true;
    g = true;
}
void Q(){
    a = true;
    b = true;
    c = true;
    f = true;
    g = true;
}
void R(){
    e = true;
    g = true;
}
void S(){
    a = true;
    c = true;
    d = true;
    f = true;
}
void T(){
    d = true;
    e = true;
    f = true;
    g = true;

}
void U(){
    c = true;
    d = true;
    e = true;
}
void V(){
    b = true;
    d = true;
    f = true;
}
void W(){
    b = true;
    d = true;
    f = true;
    g = true;
}
void X(){
    c = true;
    e = true;
}
void Y(){
    b = true;
    c = true;
    d = true;
    f = true;
    g = true;
}
void Z(){
    a = true;
    b = true;
    d = true;
    e = true;
    }
//creates a pointer that moved across the string and sends values to display7 function
Display(char name_[20], int x){
    //runs 20 time, haven't yet figured out how to use the number of characters entered 
    for(int i=0; i<sizeof(name_[20]); ++i){
        display7(name_[i], x);
        }
}
//tries to call the appropriate funtion for each letter in the string. also doesn't work yet and all the values are wrong
void display7(char letter, int x){

        if(letter == 'a'){
        A();
    }
        if(letter == 'b'){
        B();
    }
        if(letter == 'c'){
        C();
    }
        if(letter == 'd'){
        D();
    }
        if(letter == 'e'){
        E();
    }
        if(letter == 'f'){
        F();
    }
        if(letter == 'g'){
        G();
    }
        if(letter == 'h'){
        H();
    }
        if(letter == 'i'){
        I();
    }
        if(letter == 'j'){
        J();
    }
        if(letter == 'k'){
        K();
    }
        if(letter == 'l'){
        L();
    }
        if(letter == 'm'){
        M();
    }
        if(letter == 'n'){
        N();
    }
        if(letter == 'o'){
        O();
    }
        if(letter == 'p'){
        P();
    }
        if(letter == 'q'){
        Q();
    }
        if(letter == 'r'){
     
        R();
    }
        if(letter == 's'){
        S();
    }
        if(letter == 't'){
        T();
    }
        if(letter == 'u'){
        U();
    }
        if(letter == 'v'){
        V();
    }
        if(letter == 'w'){
        W();
    }
        if(letter == 'x'){
        X();
    }
        if(letter == 'y'){
        Y();
    }
        if(letter == 'z'){
        Z();
    }
    thread_sleep_for(x);
    off();
    }
};

int main()
{
    //gets two names, assigns them to strings used in Display class
    printf("Enter your first name (up to 20 characters)\n");
    char firstnamein[20];
    scanf("%s",firstnamein);
    printf("Enter your last name (up to 20 characters)\n");
    char lastnamein[20];
    scanf("%s",lastnamein);

    printf("displaying now\n");
//creates two Displays
Display firstname(firstnamein, 500);
Display lastname(lastnamein, 500);
}