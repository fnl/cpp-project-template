#include "catch2/catch.hpp"
#include "sample.h"

TEST_CASE("Sample test") {
    sample_lib::sample s(4);
    REQUIRE(s.get_value() == 4);
}