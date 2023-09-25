#include <stdio.h>

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  int i = 2;
  while (i * i <= n) {
    while (n % i == 0) {
      printf("%d ", i);
      n /= i;
    }
    i++;
  }

  if (n > 1) {
    printf("%d *", n);
  }

  printf("\n");

  return 0;
}

