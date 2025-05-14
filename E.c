#include <stdio.h>
#include <stdlib.h>

void linha(int);
void esp(int);

int main(){
esp(30);
linha(20);
esp(30);
    printf("\xDB UM PROGRAMA EM C \xDB\n");
esp(30);
linha(20);

system("PAUSE");

return 0;
}

void linha(int n){
for (int j = 1; j <= n; j++){
    printf("\xDB");
}
printf("\n");
}

void esp(int n){
for (int i = 0; i < n; i++){
    printf(" ");
}

}