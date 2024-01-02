#include <iostream>
#include <stdexcept>

void throwChar() {
    throw 'L';
}

void throwString() {
    std::string testS = "happy";
    throw testS;
}

int main() {
    try {
        // Uncomment and run each one of these functions to test different exception types
        // throwChar();
        throwString();
    }
    catch (char c) {
        std::cerr << "Caught char: " << c << std::endl;
        return 1;
    }
    catch (const std::string& s) {
        std::cerr << "Caught string: " << s << std::endl;
        return 2;
    }
    catch (...) {
        std::cerr << "Caught an unrecognized type" << std::endl;
        return 3;
    }

    std::cout << "No exceptions were thrown." << std::endl;
    return 0;
}

