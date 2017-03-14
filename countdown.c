int VALUESSIZE = 20;
int counter;

void countdown_at_idx(int* ptr, int idx);

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
    counter = counter + 1;
  }

}

int main(int argc, int* argv) {
  int i;
  int* values;

  //initLibrary();

  counter = 0;

  values = malloc(VALUESSIZE * 4);

  i = 0;

  while (i < VALUESSIZE) {
    *(values + i) = i;
    i = i + 1;
  }

  i = 0;

  while (i < VALUESSIZE) {
    countdown_at_idx(values, i);
    i = i + 1;
  }

  return counter;
}
