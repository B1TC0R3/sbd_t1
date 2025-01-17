#include <stdio.h>
#include <stdlib.h>

enum { MIN_SIZE_ALLOWED = 32 };

int verify_size(char *list, size_t size) {
  if (size < MIN_SIZE_ALLOWED) {
    /* Handle error condition */
    free(list);
    return -1;
  }
  return 0;
}

void process_list(size_t number) {
  char *list = (char *)malloc(number);
  if (list == NULL) {
    /* Handle allocation error */
  }

  if (verify_size(list, number) == -1) {
      free(list);
      return;
  }

  /* Continue processing list */

  free(list);
}

int main() {
    process_list(10);

    return 0;
}
