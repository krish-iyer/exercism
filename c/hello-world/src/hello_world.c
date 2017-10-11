#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "hello_world.h"

void hello(char *buffer, const char *name)
{

    if(name!=NULL){
      if(*name!='A')
        strcpy(buffer,"Hello, Bob!");
      else
        strcpy(buffer,"Hello, Alice!");
    }
    else{
      strcpy(buffer,"Hello, World!");
    }


}