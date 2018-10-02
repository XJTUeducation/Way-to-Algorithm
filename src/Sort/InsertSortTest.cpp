#include "InsertSort.h"
#include "Util.h"
#include <cstdlib>
#include <iostream>
using namespace std;

#define TEST_MAX 1024
#define MAX 128

int main(void) {
  int s[MAX];
  for (int i = 1; i < MAX; i++) {
    for (int j = 0; j < i; j++) {
      s[j] = rand() % TEST_MAX;
    }
    InsertSort(s, 0, i);
    AssertAscend(s, i);
  }
  return 0;
}

