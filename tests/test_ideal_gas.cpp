#include "../include/isto/ideal_gas/ideal_gas.hpp"
#include <doctest/doctest.h>
using namespace isto::ideal_gas;

TEST_CASE("ideal_gas.hpp") {
  CHECK(pressure (1.2754, 273.15, 287.0500676) == doctest::Approx(100e3).epsilon(1e-4));
} // TEST_CASE("ideal_gas.hpp")
