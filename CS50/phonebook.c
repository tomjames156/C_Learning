#include <stdio.h>
#include <string.h>

int main(){

    typedef struct {
        char name[20];
        char number[20];
    }
    person;

    person phonebook[2] = {{"Tomi", "07068293037"}, {"Jane", "08125887094"}};

    for(int i = 0; i < 2; i++){
        if(strcmp(phonebook[i].name, "Jaye") == 0){
            printf("%s %s", phonebook[i].name, phonebook[i].number);
            return 0;
        }
    }

    printf("Not Found");
    return 0;

}