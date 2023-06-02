#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> //including bool for the is_anagram function

//create scan_word function making parameter occurrences a pointer
void scan_word(int *occurrences)
{
    char c; 

    //use while loop to repeatedly count the number of times the letters is repeated in a word 
    while ((c=getchar()) != '\n') 
    {
        if (isalpha(c)){
            //change letters to occurrences
            //use toupper like in initial code
            *(occurrences+ (toupper(c) - 'A')) += 1;
        }
    }

}

//creating a bool is_anagram fucntion declaring occurrences 1 and 2 as parameters
bool is_anagram(int *occurrences1, int *occurrences2)
{
    int same, i;

    //use for loop to transverse through both occurrences to compare them
    for (i=0; i<26; i++) 
    {
    //change letters from initial code to occurrences and adding on from the first index until all indices are checked
        if (*(occurrences1 + i) != *(occurrences2 + i))
        {
        //if the number of times the letter is repeated is not the same for both words the it will return false
            return false;
        }
    } //otherwise, it returns true
    return true;

}

int main (void) 
{
    //declaring all arguments that will be used to call on the functions
    //declaring occurrences one and two as modifiable values
    int i, occurrences[26], occurrences1[26] = {0}, occurrences2[26] = {0};

    //ask user input for first word and call on scan_word function carrying occurrences1 argument
    printf ("Enter first word: ");
    scan_word(occurrences1);

    //ask user input for second word and call on scan_word function carrying occurrences2 argument
    printf ("Enter second word: ");
    scan_word(occurrences2);

    //call on is_anagram function carrying both occurences 1 and 2
    //using if to check the returning value from the previously called function
    //and print the results accordingly
    if (is_anagram(occurrences1, occurrences2)==true) 
    {
        printf("The words are anagrams.\n");
    }
    if (is_anagram(occurrences1, occurrences2)==false)
    {
        printf("The words are not anagrams.\n");
    }

    //terminate program
    return 0;
}

