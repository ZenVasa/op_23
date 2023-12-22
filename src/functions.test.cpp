#include "functions.h"
#include <catch2/catch.hpp>
#include <iostream>

TEST_CASE("Максимум")
{
    CHECK(max(1 , 2) == 2);
    CHECK(max(-1 , 2) == 2);
    CHECK(max(2 , -1) == 2);
    CHECK(max(0 , -1) == 0);
}

TEST_CASE("Сумма")
{
    CHECK(sum(10 , 5) == 15);
    CHECK(sum(-10 , 5) == -5);
    CHECK(sum(0 , 5) == 5);
}

TEST_CASE("Площадь прямоугольника нормальная")
{
    CHECK(screan_area(1080 , 720) == 777600);
}

TEST_CASE("Площадь прямоугольника ошибочная")
{
    CHECK_THROWS(screan_area(-100 , 200) );
    CHECK_THROWS(screan_area(-100 , -200) );
    CHECK_THROWS(screan_area(100 , -200) );
    CHECK_THROWS(screan_area(0 , 200) );
    CHECK_THROWS(screan_area(100 , 0) );
}



TEST_CASE("Поиск разности max и min элемента динамического массива")
{
    CHECK(contrast({7, 15 ,2, 45, 24}) == 43);
    CHECK(contrast({1, 2, 3, 4, 5, 6, 7, 8}) == 7);
    CHECK(contrast({40, 10, 5, 7, 9}) == 35);

    CHECK(contrast({-2, 5, 10}) == 12);
    CHECK(contrast({10, 5, -2}) == 12);

    CHECK(contrast({0, 5, 10}) == 10);

}

TEST_CASE("Поиск разности max и min элемента динамического массива (способ 2)")
{
    CHECK(contrast_2({7, 15 ,2, 45, 24}) == 43);
    CHECK(contrast_2({1, 2, 3, 4, 5, 6, 7, 8}) == 7);
    CHECK(contrast_2({40, 10, 5, 7, 9}) == 35);

    CHECK(contrast_2({-2, 5, 10}) == 12);
    CHECK(contrast_2({10, 5, -2}) == 12);

    CHECK(contrast_2({0, 5, 10}) == 10);

}