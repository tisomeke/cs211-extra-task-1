#include "extra-task-1.h"
#include <assert.h>
#include <iostream>

int main() {
  std::cout << "      function: seconds_difference" << std::endl;
  assert(seconds_difference(1.0, 1.0)==0.0);
  assert(seconds_difference(1.1, 1.0)==-0.1);
  assert(seconds_difference(1.0, 2.0)==1.0);
  assert(seconds_difference(111.0, -111.0)==-222.0);
  assert(seconds_difference(-5.0, -5.0)==0.0);
  assert(seconds_difference(-50.0, 50.0)==100.0);
  assert(seconds_difference(0.0, 0.12345)==0.12345);


  //return 0;
}
