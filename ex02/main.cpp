#include "Array.hpp"




int main(void)
{
  std::cout << BLUE << "=== Testing Array Template Class ===" << RESET
            << std::endl;

  try
  {
    // Test 1: Default constructor (empty array)
    std::cout << GREEN << "\n1. Testing default constructor:" << RESET
              << std::endl;
    Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;

    // Test 2: Parameterized constructor with int
    std::cout << GREEN
              << "\n2. Testing parameterized constructor with int:" << RESET
              << std::endl;
    Array<int> intArray(5);
    std::cout << "Int array size: " << intArray.size() << std::endl;

    // Fill the array
    for (unsigned int i = 0; i < intArray.size(); i++)
    {
      intArray[i] = i * 10;
    }
    printArray(intArray, "Int array");

    // Test 3: Array with double
    std::cout << GREEN << "\n3. Testing with double data type:" << RESET
              << std::endl;
    Array<double> doubleArray(4);
    for (unsigned int i = 0; i < doubleArray.size(); i++)
    {
      doubleArray[i] = (i + 1) * 3.14;
    }
    printArray(doubleArray, "Double array");

    // Test 4: Array with std::string
    std::cout << GREEN << "\n4. Testing with std::string data type:" << RESET
              << std::endl;
    Array<std::string> stringArray(3);
    stringArray[0] = "Hello";
    stringArray[1] = "World";
    stringArray[2] = "42!";
    printArray(stringArray, "String array");

    // Test 5: Copy constructor
    std::cout << GREEN << "\n5. Testing copy constructor:" << RESET
              << std::endl;
    Array<int> copiedArray(intArray);
    printArray(copiedArray, "Copied array");

    // Modify original to test deep copy
    intArray[0] = 999;
    printArray(intArray, "Original after modification");
    printArray(copiedArray, "Copy after original modification");

    // Test 6: Assignment operator
    std::cout << GREEN << "\n6. Testing assignment operator:" << RESET
              << std::endl;
    Array<int> assignedArray(2);
    assignedArray[0] = 1;
    assignedArray[1] = 2;
    std::cout << "Before assignment: ";
    printArray(assignedArray, "assigned array");

    assignedArray = intArray;
    printArray(assignedArray, "After assignment");

    // Test 7: Const array and const operator[]
    std::cout << GREEN << "\n7. Testing const array access:" << RESET
              << std::endl;
    const Array<int> constArray(intArray);
    printArray(constArray, "Const array");

    // Test 8: Self-assignment
    std::cout << GREEN << "\n8. Testing self-assignment:" << RESET << std::endl;
    assignedArray = assignedArray;
    printArray(assignedArray, "After self-assignment");

    // Test 9: Exception handling - out of bounds access
    std::cout << GREEN << "\n9. Testing exception handling:" << RESET
              << std::endl;
    try
    {
      std::cout << "Trying to access index 10 in array of size "
                << intArray.size() << std::endl;
      std::cout << intArray[10] << std::endl;
    }
    catch (const std::exception& e)
    {
      std::cout << RED << "Exception caught: " << e.what() << RESET
                << std::endl;
    }

    try
    {
      std::cout << "Trying to access index 5 in const array of size "
                << constArray.size() << std::endl;
      std::cout << constArray[5] << std::endl;
    }
    catch (const std::exception& e)
    {
      std::cout << RED << "Exception caught: " << e.what() << RESET
                << std::endl;
    }

    // Test 10: Large array
    std::cout << GREEN << "\n10. Testing large array:" << RESET << std::endl;
    Array<int> largeArray(1000);
    for (unsigned int i = 0; i < largeArray.size(); i++)
    {
      largeArray[i] = i;
    }
    std::cout << "Large array created with size: " << largeArray.size()
              << std::endl;
    std::cout << "First element: " << largeArray[0]
              << ", Last element: " << largeArray[999] << std::endl;

    // Test 11: Default initialization behavior
    std::cout << GREEN << "\n11. Testing default initialization" << RESET
              << std::endl;
    int* a = new int();
    std::cout << "Default initialized int value: " << *a << std::endl;

    // Test with Array constructor using unsigned int n
    std::cout << "Testing Array constructor with unsigned int n:" << std::endl;
    Array<int> defaultArray(3);
    for (unsigned int i = 0; i < defaultArray.size(); i++)
    {
      std::cout << "defaultArray[" << i << "] = " << defaultArray[i]
                << std::endl;
    }

    delete a;

    std::cout << BLUE << "\n=== All tests completed successfully! ===" << RESET
              << std::endl;
  }
  catch (const std::exception& e)
  {
    std::cout << RED << "Unexpected exception: " << e.what() << RESET
              << std::endl;
    return 1;
  }

  return 0;
}

// int main(void)
// {
//     std::cout << WHITE << "=== INT ARRAY TEST ===" << RESET << std::endl;
//     Array<int> intArray(5);
//     for (unsigned int i = 0; i < intArray.size(); i++)
//         intArray[i] = i * 10;

//     std::cout << "Contents: ";
//     for (unsigned int i = 0; i < intArray.size(); i++)
//         std::cout << intArray[i] << " ";
//     std::cout << std::endl;

//     std::cout << "Copy constructor test..." << std::endl;
//     Array<int> intCopy(intArray);
//     intCopy[0] = 999;
//     std::cout << "Original: " << intArray[0] << ", Copy: " << intCopy[0] << std::endl;

//     std::cout << RED << "\n=== STRING ARRAY TEST ===" << RESET << std::endl;
//     Array<std::string> strArray(3);
//     strArray[0] = "Hello";
//     strArray[1] = "World";
//     strArray[2] = "!";
//     for (unsigned int i = 0; i < strArray.size(); i++)
//         std::cout << strArray[i] << " ";
//     std::cout << std::endl;

//     std::cout << "Assignment operator test..." << std::endl;
//     Array<std::string> strCopy;
//     strCopy = strArray;
//     strCopy[1] = "42";
//     std::cout << "Original: " << strArray[1] << ", Copy: " << strCopy[1] << std::endl;

//     std::cout << GREEN << "\n=== DOUBLE ARRAY TEST ===" << RESET << std::endl;
//     Array<double> dblArray(4);
//     for (unsigned int i = 0; i < dblArray.size(); i++)
//         dblArray[i] = i * 0.5;
//     for (unsigned int i = 0; i < dblArray.size(); i++)
//         std::cout << dblArray[i] << " ";
//     std::cout << std::endl;

//     std::cout << YELLOW << "\n=== OUT OF RANGE TEST ===" << RESET << std::endl;
//     try {
//         std::cout << "Accessing index 10..." << std::endl;
//         std::cout << intArray[10] << std::endl;
//     }
//     catch (std::exception &e) {
//         std::cerr << RED << "Caught exception: " << e.what() << RESET << std::endl;
//     }

//     std::cout << MAGENTA << "\n=== CONST ARRAY TEST ===" << RESET << std::endl;
//     const Array<int> constArray(intArray);
//     for (unsigned int i = 0; i < constArray.size(); i++)
//         std::cout << constArray[i] << " ";
//     std::cout << std::endl;

//     return (0);
// }
