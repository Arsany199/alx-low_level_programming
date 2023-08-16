#include <stdio.h>

void positive_or_negative(int i) {
  if (i > 0) {
    printf("positive\n");
  } else if (i < 0) {
    printf("negative\n");
  } else {
    printf("zero\n");
  }
}
