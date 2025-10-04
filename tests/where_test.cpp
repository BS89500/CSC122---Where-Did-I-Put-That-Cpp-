#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/where.hpp"

TEST_CASE( "where Test" ) {
    REQUIRE( findString("The quick brown fox", 'e') == 2 );
    REQUIRE( findString("The quick brown fox", "e") == 2);
    REQUIRE( findString("The quick brown fox", ' ') == 3);
    REQUIRE( findString("The quick brown fox", "quick") == 4);
    REQUIRE( findString("The quick brown fox", "quiet") == -1);


}
