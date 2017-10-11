#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hamming.h"
int compute(char *string_1 ,char *string_2)
{
  int count=0;
  if(string_1!=NULL&&string_2!=NULL)
  {
    if(strlen(string_1)!=strlen(string_2))
      return -1;
    else if(strcmp(string_1,string_2)==0)
      return 0;
    else
    {
      int i=0;
      while(string_1[i]!='\0')
      {
        if(string_1[i]!=string_2[i])
          count++;
        i++;
      }
      return count;
    }
  }
  else
    return -1;
  return 0;
}