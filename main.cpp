#include "extra-task-1.h"
#include <assert.h>
#include <iostream>

int main() {
  std::cout << "\t\tfunction: seconds_difference" << std::endl;
  assert(seconds_difference(1.0, 1.0) == 0.0);
  assert(seconds_difference(1.1, 1.0) == 1.0 - 1.1);
  assert(seconds_difference(1.0, 2.0) == 1.0);
  assert(seconds_difference(111.0, -111.0) == -222.0);
  assert(seconds_difference(-5.0, -5.0) == 0.0);
  assert(seconds_difference(-50.0, 50.0) == 100.0);
  assert(seconds_difference(0.0, 0.12345) == 0.12345);
  std::cout << "all asserts have passed.\n" << std::endl;

  std::cout << "\t\tfunction: hours_difference" << std::endl;
  assert(hours_difference(1.0, 1.0) == 0.0);
  assert(hours_difference(1.1, 1.0) == (1.0 - 1.1) / 3600);
  assert(hours_difference(1.0, 2.0) == (1.0) / 3600);
  assert(hours_difference(111.0, -111.0) == -222.0 / 3600);
  assert(hours_difference(-5.0, -5.0) == 0.0 / 3600);
  assert(hours_difference(-50.0, 50.0) == 100.0 / 3600);
  assert(hours_difference(0.0, 0.12345) == 0.12345 / 3600);
  std::cout << "all asserts have passed.\n" << std::endl;

  return 0;
}
