#include <stdio.h>
#include <time.h>
#include "gigasecond.h"

time_t gigasecond_after(time_t current_date)
{
  current_date+=1000000000;
  return current_date;
}