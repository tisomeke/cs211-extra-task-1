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

/*
    Implement three functions
        * get_hours
        * get_minutes
        * get_seconds
    They are used to determine the hours part, minutes part and seconds part
    of a time in seconds. E.g.:

    >>> get_hours(3800)
    1

    >>> get_minutes(3800)
    3

    >>> get_seconds(3800)
    20

    In other words, if 3800 seconds have elapsed since midnight,
    it is currently 01:03:20 (hh:mm:ss).
*/

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
  /*
      Return UTC time in time zone utc_offset.

      >>> time_from_utc(+0, 12.0)
      12.0

      >>> time_from_utc(+1, 12.0)
      13.0

      >>> time_from_utc(-1, 12.0)
      11.0

      >>> time_from_utc(+6, 6.0)
      12.0

      >>> time_from_utc(-7, 6.0)
      23.0

      >>> time_from_utc(-1, 0.0)
      23.0

      >>> time_from_utc(-1, 23.0)
      22.0

      >>> time_from_utc(+1, 23.0)
      0.0
  */
  return 0;
}
