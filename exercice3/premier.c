# include <stdio.h>
# include <stdbool.h>
#include <time.h>

bool est_premier(int n)
{
  /* fonction qui verifie si un nombre est premier (version naive) */
}

void get_premier(int n)
{
  /* recuper le nombre premier en utilisant is_prime */
}

bool est_prime_optimisee(int n)
{
/* fonction qui verifie si un nombre est premier (version optimisée) */

}

void get_premier_optimisee(int n)
{
/* recuper le nombre premier en utilisant est_premier_optimisee */
}


int main()
{

  clock_t start, end;
  double cpu_time_used;
  
  int n = 1e7;
  start = clock();
  get_premier(n);
  end = clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("%f\n", cpu_time_used);


  start = clock();
  get_premier_optimisee(n);
  end = clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("%f\n", cpu_time_used);
  
  get_premier_optimisee(n);

}
