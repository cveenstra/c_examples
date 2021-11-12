#include <stdio.h>
int main() {
   
    int i = 1;
    while( i <= 10){

        int j = 1;
        while( j <= 10){
            printf("%*d", 4,j*i);
            j++;
        }
        i++;
        printf("\n");
    }

   return 0;
}