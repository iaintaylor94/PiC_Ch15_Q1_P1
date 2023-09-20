// Program to demonstrate the use of various printf formats

#include <stdio.h>

int main(void) {

  // Define Variables
  char c = 'X';
  char s[] = "abcdefghijklmnopqrstuvwxyz";
  int i = 425;
  short int j = 17;
  unsigned int u = 0xf179U;
  long int l = 75000L;
  long long int L = 0x1234567812345678LL;
  float f = 12.978F;
  double d = -97.4583;
  char *cp = &c;
  int *ip = &i;
  int c1, c2;

  // Print Integers
  printf ("Integers:\n");
  printf ("%i %o %x %u\n", i, i, i, i);
  printf ("%x %X %#x %#X\n", i, i, i, i);
  printf ("%+i % i %07i %.7i\n", i, i, i, i); // The rest are pretty simple
  printf ("%i %o %x %u\n", j, j, j, j);
  printf ("%i %o %x %u\n", u, u, u, u);
  printf ("%ld %lo %lx %lu", l, l, l, l);
  printf ("%lli %llo %llx %llu\n", L, L, L, L);
  printf ("\n");

  // Print Floats and Doubles
  printf ("Floats and Doubles\n");
  printf ("%f %e %g\n", f, f, f);
  printf ("%.2f %.2e\n", f, f); // 2 decimal places
  printf ("%.0f %.0e\n", f, f); // 0 decimal places
  printf ("%7.2f %7.2e\n", f, f);   // 7 chars // 2 decimal places
  printf ("%f %e %g\n", d, d, d); 
  printf ("%.*f\n", 3, d);
  printf ("%*.*f\n", 8, 2, d);
  printf ("\n");

  // Print Characters
  printf ("Characters\n");
  printf ("%c\n", c);
  printf ("%3c%3c\n", c, c);
  printf ("%x\n", c);
  printf ("\n");

  // Print Strings
  printf ("Strings\n");
  printf ("%s\n", s);
  printf ("%.5s\n", s);
  printf ("%30s\n", s);
  printf ("%20.5s\n", s);
  printf ("%-20.5s\n", s);
  printf ("\n");

  // Print Pointers
  printf ("Pointers\n");
  printf ("%p %p\n", ip, cp);
  printf ("\n");

  printf ("This%n is fun.%n\n", &c1, &c2);
  printf ("c1 = %i, c2 = %i\n", c1, c2);
  
  return 0;
}