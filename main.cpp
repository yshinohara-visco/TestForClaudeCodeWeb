#include <iostream>
#include <string>

int main() {
    for (int i = 1; i <= 100; i++) {
        std::string output = "";

        if (i % 3 == 0) {
            output += "Fizz";
        }
        if (i % 5 == 0) {
            output += "Buzz";
        }
        if (i % 7 == 0) {
            output += "Pop";
        }

        if (output.empty()) {
            std::cout << i << std::endl;
        } else {
            std::cout << output << std::endl;
        }
    }
    return 0;
}
