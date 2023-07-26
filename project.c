//A software that calculates how many dozens of eggs z company produces in a day

#include <stdio.h>

int main()
{
  int eggs;
  printf("\nHow many eggs did z company produce today\nPlease input the value: ");
  scanf("%i", &eggs);

  double dozen_eggs = eggs/12.0;

  printf("\nToday, z company produced %lf dozens of eggs\n", dozen_eggs);


  
  return 0;
}
