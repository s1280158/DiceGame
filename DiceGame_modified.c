#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int die1,die2,die_total;
  char name[50];

  printf("What is your name?\n");
  scanf("%s", name);
  printf("Hello, %s!\n", name);

  srand((unsigned int)time(NULL));
  
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",die1 = (rand()%6) + 1);
  printf("Die 2: %d\n",die2 = (rand()%6) + 1);
  printf("Total value : %d\n", die_total = die1 + die2);
  if(die_total > 7)
    {
      printf("%s won!\n", name);
    }
  else
    {
      printf("%s lost!\n", name);
    }
  return 0;
}
