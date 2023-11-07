#include <stdbool.h>
#include <stdio.h>

int main(){
    bool decaying = true;
    int initial_mass;
    float mass;
    initial_mass = mass = 40;
    mass = (float) mass;
    int decay_count = 0;

    while(decaying){
        mass /= 2;
        decay_count++;
        if(mass <= 0.5){
            decaying = false;
        }
        printf("Decayed\n");
    }

    printf("The Uranium block of %d grammes  decayed %d times leaving %.3f grams of uranium", initial_mass, decay_count, mass);

    return 0;
}