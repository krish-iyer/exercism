#include "anagram.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>



struct Vector anagrams_for(char *buffer, struct Vector Vin)
{
  //struct Vector out;
  int y=0;
  while(Vin.vec[y]!='\0')
  {
    char *str;
    str=Vin.vec[y];
    int i=0,k=0,count=0,count1=0,x=0,cont=0;
    while(buffer[k]!='\0')
    {
        i=0;count=0;count1=0,x=0;
        while(buffer[x]!='\0')
        {
          if(tolower(buffer[k])==tolower(buffer[x])&&x!=k)
            count1++;
          x++;
        }
        char letter=tolower(buffer[k]);
        while(tolower(str[i])!='\0')
        {
          if(tolower(str[i])==letter)
            count++;
          i++;

        }
        if(count-1==count1)
        {
            cont++;
        }
        k++;
    }
    unsigned int cons=cont;
    if(cons==strlen(buffer))
    {
          return Vin;
    }
    y++;
  }
  return Vin;
}