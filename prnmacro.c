#define PRN(n) printf("%.2lf\n", (double)n)

#include <stdio.h>
#include <stdlib.h>

int main(){
int n1, n2;

    n1 = 1416;
    n2 = n1 / 2;

PRN(n1);
PRN(n2);

system("PAUSE");

return 0;
}