#include "../hedley.h"

#include <stdio.h>

int main(int argc, char* argv[HEDLEY_ARRAY_PARAM(argc)]) {
  switch (argc) {
    case 2:
      fprintf(stdout, "Argument: %s\n", argv[1]);
      break;
    case 1:
      fprintf(stderr, "Need an argument…\n");
      HEDLEY_FALL_THROUGH;
    default:
      fprintf(stderr, "Invalid number of arguments.\n");
      break;
  }

  return 0;
}
