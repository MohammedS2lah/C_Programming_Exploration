/*
Tutorial: C Program to Count Number of Alphabets and Words in a Sentence
In this tutorial, we will create a C program that counts the number of alphabets and words in a sentence. 
The program ends the sentence input when it encounters a period (.).

Problem Statement:
Write a C program that takes a sentence as input and calculates the following:
    1) The number of alphabet characters (A-Z or a-z) in the sentence.
    2) The number of words in the sentence (assuming words are separated by spaces or newlines).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char charac;
    int char_count = 0, word_count = 0;

    printf("Enter the sentence to count (end with a '.'): \n");

    charac = getchar();   // Read the first character from user input

    while (charac != '.') {
        // Check if the character is an alphabet (uppercase or lowercase)
        if ((charac >= 'A' && charac <= 'Z') || (charac >= 'a' && charac <= 'z')) {
            char_count++;  // Increment alphabet count
        }

        // Check if the character is a space or newline, indicating a word boundary
        if (charac == ' ' || charac == '\n') {
            word_count++;  // Increment word count
        }

        charac = getchar();  // Read the next character
    }

    // Account for the last word if the sentence ends with a period
    if (charac == '.') {
        word_count++;
    }

    printf("\nNumber of words: %d\n", word_count);
    printf("Number of alphabets: %d\n", char_count);

    return 0;
}

