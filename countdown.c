void countdown_at_idx(int* ptr, int idx);

int SIZEOFINT = 4;
int VALUESSIZE = 20;

void countdown_at_idx(int* ptr, int idx) {

  int isEven;

  if (*(ptr + idx) % 2 == 0)
    isEven = 1;
  else
    isEven = 0;

  while (*(ptr + idx) > 0) {
    if (isEven)
      *(ptr + idx) = *(ptr + idx) - 2;
    else
      *(ptr + idx) = *(ptr + idx) - 1;
  }

}

int main(int argc, int* argv) {
  int i;
  int* values;

  initLibrary();

  values = malloc(VALUESSIZE * SIZEOFINT);

  i = 0;

  while (i < VALUESSIZE) {
    *(values + i) = i;
    i = i + 1;
  }

  i = 0;

  while (i < VALUESSIZE) {
    printInteger(*(values + i));
    println();
    i = i + 1;
  }

  i = 0;

  while (i < VALUESSIZE) {
    countdown_at_idx(values, i);
    i = i + 1;
  }

  i = 0;

  while (i < VALUESSIZE) {
    printInteger(*(values + i));
    println();
    i = i + 1;
  }

}
