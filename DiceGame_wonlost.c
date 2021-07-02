#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int die1,die2,die_total;
  srand((unsigned int)time(NULL));
  
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",die1 = (rand()%6) + 1);
  printf("Die 2: %d\n",die2 = (rand()%6) + 1);
  printf("Total value : %d\n", die_total = die1 + die2);
  if(die_total > 7)
    {
      printf("You won!\n");
    }
  else
    {
      printf("You lost!\n");
    }
  return 0;
}
