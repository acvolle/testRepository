#include <stdio.h>

int main(){
    unsigned char status = 0b10100111;

    if(status & 0b10000000){
        printf("Fehler\n");
        if(status & 0b01000000){
            printf("Übertemperatur\n");
        }
        if(status & 0b00100000){
            printf("Unterspannung\n");
        }
    } else{
        int messwert = status & 15;
    

        printf("%d", messwert);

    }

    



  




    return 0;
}