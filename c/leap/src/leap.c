#include<stdio.h>
#include<stdbool.h>
#include "leap.h"
bool is_leap_year(int buffer)
{
  if(buffer%4==0)
    if(buffer%100==0)
        return buffer%400==0;
    else
      return true;
  else
    return false;
}