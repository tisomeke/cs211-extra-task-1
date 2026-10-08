#include "extra-task-1.h"
#include <assert.h>
#include <cfloat>
#include <cmath>
#include <iostream>

bool float_almost_equal(double a, double b) {
  return fabs(a - b) <= DBL_EPSILON;
}

int main() {
  std::cout << "\t\tfunction: seconds_difference" << std::endl;
  assert(float_almost_equal(seconds_difference(1.0, 1.0), 0.0));
  assert(float_almost_equal(seconds_difference(1.1, 1.0), -0.1));
  assert(float_almost_equal(seconds_difference(1.0, 2.0), 1.0));
  assert(float_almost_equal(seconds_difference(111.0, -111.0), -222.0));
  assert(float_almost_equal(seconds_difference(-5.0, -5.0), 0.0));
  assert(float_almost_equal(seconds_difference(-50.0, 50.0), 100.0));
  assert(float_almost_equal(seconds_difference(0.0, 0.12345), 0.12345));
  std::cout << "all asserts have passed.\n" << std::endl;

  std::cout << "\t\tfunction: hours_difference" << std::endl;
  assert(float_almost_equal(hours_difference(1.0, 1.0), 0.0));
  assert(float_almost_equal(hours_difference(1.1, 1.0), (1.0 - 1.1) / 3600));
  assert(float_almost_equal(hours_difference(1.0, 2.0), (1.0) / 3600));
  assert(float_almost_equal(hours_difference(111.0, -111.0), -222.0 / 3600));
  assert(float_almost_equal(hours_difference(-5.0, -5.0), 0.0 / 3600));
  assert(float_almost_equal(hours_difference(-50.0, 50.0), 100.0 / 3600));
  assert(float_almost_equal(hours_difference(0.0, 0.12345), 0.12345 / 3600));
  std::cout << "all asserts have passed.\n" << std::endl;

  std::cout << "\t\tfunction: to_float_hours" << std::endl;
  assert(float_almost_equal(to_float_hours(1, 0, 0), 1.0));
  assert(float_almost_equal(to_float_hours(1, 10, 0), (1.0 + 10.0 / 60.0)));
  assert(float_almost_equal(to_float_hours(3, 2, 30),
                            (3.0 + 2.0 / 60.0 + 30.0 / 3600.0)));
  assert(
      float_almost_equal(to_float_hours(111, 0, 20), (111.0 + 20.0 / 3600.0)));
  assert(float_almost_equal(to_float_hours(0, 0, 0), 0.0));
  assert(float_almost_equal(to_float_hours(50, 50, 50),
                            (50.0 + 50.0 / 60.0 + 50.0 / 3600.0)));
  assert(float_almost_equal(to_float_hours(59, 59, 59),
                            (59.0 + 59.0 / 60.0 + 59.0 / 3600.0)));
  std::cout << "all asserts have passed.\n" << std::endl;

  return 0;
}
