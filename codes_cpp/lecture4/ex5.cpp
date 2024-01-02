#include <iostream>
#include <stdexcept>

void throwChar() {
    throw 'L';
}

void throwInt() {
    throw 42;
}

void throwLong() {
    throw 1234567890L;
}

void throwString() {
    throw std::string("I Love Cpp");
}

void throwCharPointer() {
    throw "Exception: This is a char pointer";
}

void throwIntPtr() {
    throw new int(100);
}

int main() {
    try {
        // Uncomment and run each one of these functions to test different exception types
        // throwChar();
        // throwInt();
        // throwLong();
        // throwString();
        // throwCharPointer();
        // throwIntPtr();
        // Throw a long pointer (not listed among specific catch blocks)
        throw new long(98765432109876L);
    }
    catch (char c) {
        std::cerr << "Caught char: " << c << std::endl;
        return 1;
    }
    catch (int i) {
        std::cerr << "Caught int: " << i << std::endl;
        return 2;
    }
    catch (long l) {
        std::cerr << "Caught long: " << l << std::endl;
        return 3;
    }
    catch (const std::string& s) {
        std::cerr << "Caught string: " << s << std::endl;
        return 4;
    }
    catch (const char* s) {
        std::cerr << "Caught char pointer: " << s << std::endl;
        return 5;
    }
    catch (int* p) {
        std::cerr << "Caught int pointer: " << *p << std::endl;
        delete p;  // Clean up the dynamically allocated memory
        return 6;
    }
    catch (...) {
        std::cerr << "Caught an unrecognized type" << std::endl;
        return 7;
    }

    std::cout << "No exceptions were thrown." << std::endl;
    return 0;
}
