#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// You are to develop the function 
// randchar() as a separate file (random.c) 
// and include it in your repository. 
// The function randchar() is a character function 
// that returns a random character from ‘A’ – ‘Z’. The character is used in 
// the main program to generate a random 7 letter word.

char randchar(){
        char letters[] = "ABCDEFGHIJKLMNPQRSTUVWXYZ"; 
        int randomNum = rand() % 25;
        return  letters[randomNum];
	// another  way
	//printf("%c", letters[randomNum]);
	//return 0;
}       

