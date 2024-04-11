#include <stdio.h>
#include <string.h>

int main(){
    char names[5][10] = {"Chad", "Brad", "Jerry", "Brad", "Dekan"};

    for(int i = 0; i < 5; i++){
        if(strcmp(names[i], "Jerry") == 0){
            printf("Found");
            return 0;
        }else{
            printf("%d\n", strcmp(names[i], "Jerry"));
        }
    }

    printf("Not Found");
    return 1;
} 