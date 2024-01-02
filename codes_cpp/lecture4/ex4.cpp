#include <iostream>
#include <stdexcept>

//t each of the following types are caught
void throwChar() {
    throw 'L';
}

void throwInt() {
    throw 77;
}

void throwLong() {
    throw 1234567890L;
}

void throwString() {
    throw std::string("I love cpp");
}

void throwCharPointer() {
    throw "Exception: This is a char pointer";
}

void throwIntPtr() {
    throw new int(100);
}

int main() {
    try {
        // uncomment and run each one of these functions 
        // throwChar();
        // throwInt();
        // throwLong();
        // throwString();
        // throwCharPointer();
        throwIntPtr();
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
        // Clean up the dynamically allocated memory
        delete p;  
        return 6;
    }
    catch (...) {
        std::cerr << "Caught an unknown exception" << std::endl;
        return 7;
    }

    std::cout << "No exceptions were thrown." << std::endl;
    return 0;
}
