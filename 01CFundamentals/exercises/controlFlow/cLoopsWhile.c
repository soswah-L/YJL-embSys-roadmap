#include <stdio.h>

int main (void){

    int counter = 5;

    while (counter != 0){
        puts("I'm an awesomesauce!");
        counter--;
    }
    
    counter = 5;

    while (counter){
        puts("Peanut butter jelly sandwich");
        counter--;
    }

    counter = 5;

    while (counter--)
        puts("OOGA BOOGA");


    return 0;
}