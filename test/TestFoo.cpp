#include <stdio.h>
#include "Foo.hpp"

int main( int argc, char **argv ) {
    printf("sum(%d, %d) = %d\n", 1, 2, Foo::Sum(1, 2));
}
