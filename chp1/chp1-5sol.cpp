#include <iostream>
#include <string>

int main() {
    {
        const std::string s = "a string";
        std::string x = s + ", really";
        std::cout << x << std::endl;
    }
    return 0;
}
