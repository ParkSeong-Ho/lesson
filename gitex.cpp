#include <iostream>
#include <fmt/core.h>

int main(){
    fmt::print("안녕하세요\n");
    fmt::print("Hello, {}!\n","wsl");

    std::string s= fmt::format("The answer is {}.",42);

    return 0;
}