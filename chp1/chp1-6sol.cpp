#include <iostream>
#include <string>

int main() {
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;
    return 0;
}


// 예제 실행 두 단어 입력 결과
//What is your name? Samuel Beckett
//Hello, Samuel
//And what is yours? Beckett
//Hello, Beckett; nice to meet you too!

