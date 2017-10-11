#ifndef ANAGRAM_H
#define ANAGRAM_H

#define MAX_STR_LEN 20

struct Vector {
   char (*vec)[MAX_STR_LEN];
   int size;
}Vin;

struct Vector anagrams_for(char *buffer, struct Vector Vin);

#endif