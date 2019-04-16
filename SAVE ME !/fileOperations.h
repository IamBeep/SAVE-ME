#define _FILEOPERATION_H
#ifdef _FILEOPERATION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct animal{
    char animalName[50];
};

void listAllWords(animal *list){
	FILE *wordList = fopen("word.txt", "r");

    animal AnimalList[6];

    for(int i = 0; i < 6; i++){
        fscanf(wordList, "%s", &AnimalList[i].animalName);
    }
    for(int i = 0; i < 6; i++){

    printf("%s\n", AnimalList[i].animalName);
    }

	for(int i = 0; i < 6; i++){
		list[i] = AnimalList[i];
	}

    fclose(wordList);
}
#endif