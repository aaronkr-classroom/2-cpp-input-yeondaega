#include <iostream>
#include <string>

int main() {
    {
        const std::string s = "a string";
        std::cout << s << std::endl;
        {
            const std::string s = "another string";
            std::cout << s << std::endl;
        }
    }
    return 0;
}


// }}을 변경하면 중첩된 코드가 올바르게 작동되지 않기 때문에 수정할 수 없다.