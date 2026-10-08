#include "extra-task-1.h"
#include <assert.h>
#include <cmath>

double seconds_difference(double time_1, double time_2) {
  return time_2 - time_1;
}

double hours_difference(double time_1, double time_2) {
  return seconds_difference(time_1, time_2) / 3600;
}

double to_float_hours(int hours, int minutes, int seconds) {
  assert(seconds < 60);
  assert(seconds >= 0);
  assert(minutes < 60);
  assert(minutes >= 0);
  assert(hours >= 0);

  double sec_to_hours{static_cast<double>(seconds) / 3600.0};
  double min_to_hours{static_cast<double>(minutes) / 60.0};
  return static_cast<double>(hours) + min_to_hours + sec_to_hours;
}

double to_24_hour_clock(double hours) {
  assert(hours >= 0.0);
  return fmod(hours, 24);
}

int get_hours(int seconds) { return seconds / 3600; }

int get_minutes(int seconds) {
  auto hours{get_hours(seconds)};
  return (seconds - hours * 3600) / 60;
}

int get_seconds(int seconds) {
  auto hours{get_hours(seconds)};
  auto minutes{get_minutes(seconds)};
  return seconds - hours * 3600 - minutes * 60;
}

double time_to_utc(int utc_offset, double time) {
  return fmod(time - utc_offset, 24.0);
}

double time_from_utc(int utc_offset, double time) {
  auto result{fmod(time + utc_offset, 24.0)};
  if (result < 0.0) {
    result += 24.0;
  }
  return result;
}
