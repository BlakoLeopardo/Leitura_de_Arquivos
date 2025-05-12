#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void inverte(void);

int main(){
    inverte();
    printf("\n");
    system("PAUSE");

return 0;
}

void inverte(){
char ch;

if((ch=getche()) != '\r'){
    inverte();
}

printf("%c", ch);    
}