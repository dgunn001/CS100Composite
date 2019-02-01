#include "SevenOpMock.h"
#include "c-echo.h"
#include <iostream>

int main(int argv, char** argc) {
    std::cout << echo(argv, argc);
}
