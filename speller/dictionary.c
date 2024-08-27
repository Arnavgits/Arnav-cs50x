// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 1000;

// Hash table
node *table[N];

int total_words = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    unsigned int ctr = 5381;
    int c;

    while(c == *word++)
    {
        ctr = ((ctr << 5) + ctr) + tolower(c);
    }
    return hash % N;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    FILE *n = fopen( dictionary, "r");
    char buffer[LENGTH + 1];

    while((fscanf(n, "%s", buffer)) != EOF)
    {
        int place = hash(buffer);
        int ctr_size = size();
        node * new_node = malloc(sizeof(node));
        strcpy(new_node -> word, buffer);
        new_node -> next = NULL;
        new_node -> next = table[place];
        table[place] -> next = new_node;
    }
    fclose(n);

    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    total_words++;
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
