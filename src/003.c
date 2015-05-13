#include <stdio.h>
#include <math.h>

#include "test.h"

int isPrime(long n) {
  long i;
  if (n == 2)
    return 1;
  for (i=2; i<=sqrt(n); i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

long largestPrimeFactor(long n) {
  long i;
  long max;
  for(i=2; i<=sqrt(n); i++) {
    if (n % i == 0 && isPrime(i)) {
      if (i > max) {
          max = i;
      }
      if (n / i > i && isPrime(n/i))
        max = n / i;
    }
  }
  if (isPrime(n) && n > max)
    max = n;
  return max;
}

int main(void) {
  /*ASSERT_EQUALS(largestPrimeFactor(83), 83);*/
  /*ASSERT_EQUALS(largestPrimeFactor(82), 41);*/
  ASSERT(!isPrime(8462696833));
  printf("%lu\n", largestPrimeFactor(600851475143LLU));
  return 0;
}
