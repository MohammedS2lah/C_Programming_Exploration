// C Program to count number of Alphabets & number of words in a sentence. (word count)

#include <stdio.h>
#include <stdlib.h>


int main() {
    char charac;
    int char_count = 0, word_count = 0;

    printf("Enter the sentence to count: \n");

    charac = getchar();

    while (charac != '.') {

        if ((charac >= 'A' && charac <= 'Z') || (charac >= 'a' && charac <= 'z')) {
            char_count++;
        }


        if (charac == ' ' || charac == '\n') {
            word_count++;
        }

        charac = getchar();
    }

    if (charac == '.') {
        word_count++;
    }

    printf("\nNumber of words: %d\n", word_count);
    printf("Number of alphabets: %d\n", char_count);

    return 0;
}

