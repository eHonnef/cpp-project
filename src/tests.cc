#define CATCH_CONFIG_MAIN
// #include "catch/catch.hpp"
#include <catch.hpp>

TEST_CASE("Example", "Example") {
  int a = 10;
  int b = 20;

  REQUIRE_THROWS("algo que gere erro");
  REQUIRE(a != b);
  REQUIRE_FALSE(a == b);
}
