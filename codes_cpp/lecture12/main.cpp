#include <iostream>
#include <memory>
#include "Detector.h"
#include "Detector.cpp"

// int main() {
//     std::cout << "Main function begins." << std::endl;

//     // Dynamically allocate a Detector object using shared_ptr
//     std::shared_ptr<Detector> detectorPtr = std::make_shared<Detector>();

//     // Access the non-static member variable using the shared_ptr
//     std::cout << "Non-Static Var: " << detectorPtr->getNonStaticVar() << std::endl;

//     // Main function ends here, and shared_ptr goes out of scope
//     std::cout << "Main function ends." << std::endl;

//     // The shared_ptr will automatically handle the deallocation of the Detector object when it goes out of scope,
//     // and the Detector's destructor will be called, printing the corresponding message.

//     return 0;
// }



// // Function to process the Detector object
// std::shared_ptr<Detector> processDetector(std::shared_ptr<Detector> detectorPtr) {
//     std::cout << "Processing Detector function begins." << std::endl;

//     // Access the non-static member variable using the shared_ptr
//     std::cout << "Non-Static Var: " << detectorPtr->getNonStaticVar() << std::endl;

//     // Modify the non-static member variable
//     detectorPtr->setNonStaticVar(42);

//     std::cout << "Processing Detector function ends." << std::endl;

//     // Return the modified shared_ptr
//     return detectorPtr;
// }

// int main() {
//     std::cout << "Main function begins." << std::endl;

//     // Dynamically allocate a Detector object using shared_ptr
//     std::shared_ptr<Detector> detectorPtr = std::make_shared<Detector>();

//     // Access the non-static member variable using the shared_ptr
//     std::cout << "Non-Static Var: " << detectorPtr->getNonStaticVar() << std::endl;

//     // Call the processDetector function to perform operations on the Detector object
//     std::shared_ptr<Detector> modifiedDetectorPtr = processDetector(detectorPtr);

//     // Access the modified non-static member variable
//     std::cout << "Modified Non-Static Var: " << modifiedDetectorPtr->getNonStaticVar() << std::endl;

//     // Main function ends here, and shared_ptr goes out of scope
//     std::cout << "Main function ends." << std::endl;

//     // The shared_ptr detectorPtr in the main function is the one that ultimately destroys the object
//     // when it goes out of scope. Both shared_ptr variables share ownership, and the object is deleted
//     // only once when the last shared_ptr goes out of scope.

//     return 0;
// }




#include <iostream>
#include <vector>
#include <memory>

#include "Detector.h" // Make sure to include the correct header file

int main() {
    std::vector<std::shared_ptr<Detector>> detectorVector;

    // Declare several shared_ptr variables and dynamically allocate Detector objects
    std::shared_ptr<Detector> ptr1 = std::make_shared<Detector>();
    std::shared_ptr<Detector> ptr2 = std::make_shared<Detector>();
    std::shared_ptr<Detector> ptr3 = std::make_shared<Detector>();

    // Push the shared_ptr variables into the vector
    detectorVector.push_back(ptr1);
    detectorVector.push_back(ptr2);
    detectorVector.push_back(ptr3);

    // Print the number of Detector objects created
    std::cout << "Number of Detector objects created: " << Detector::getStaticVar() << std::endl;

    return 0;
}
