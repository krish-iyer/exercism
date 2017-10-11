#include<stdio.h>
#include <stdbool.h>
#include <ctype.h>


bool isIsogram(char* buffer)
{
  int i=0,j;
  while(buffer[i]!='\0')
  {
    char letter=buffer[i];
    for(j=0;buffer[j]!='\0'&&j!=i;j++)
    {
      if(tolower(letter)<='z'&&tolower(letter)>='a')
      if(tolower(buffer[j])==tolower(letter))
        return false;

    }
    i++;
  }
  if((i-1)==j||buffer==NULL)
    return true;
  return true;
}