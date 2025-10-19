#include "Array.hpp"




int main(void)
{
  std::cout << WHITE << "=== Testing Array Template Class ===" << RESET
            << std::endl;

  try
  {
    // Test 1: Default constructor (empty array)
    std::cout << GREEN << "\n1. Testing default constructor:" << RESET << std::endl;
    Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;

    // Test 2: Parameterized constructor with int
    std::cout << GREEN << "\n2. Testing parameterized constructor with int:" << RESET << std::endl;
    Array<int> intArray(5);
    std::cout << "Int array size: " << intArray.size() << std::endl;

    // Fill the array
    for (size_t i = 0; i < intArray.size(); i++)
    {
      intArray[i] = i * 10;
    }
    printArray(intArray, "Int array");

    // Test 3: Array with double
    std::cout << GREEN << "\n3. Testing with double data type:" << RESET << std::endl;

    Array<double> doubleArray(4);
    for (size_t i = 0; i < doubleArray.size(); i++)
    {
      doubleArray[i] = (i + 1) * 22/7.0;
    }
    printArray(doubleArray, "Double array");

    // Test 4: Array with std::string
    std::cout << GREEN << "\n4. Testing with std::string data type:" << RESET << std::endl;

    Array<std::string> stringArray(4);
    stringArray[0] = "Hello";
    stringArray[1] = "Abdallah";
    stringArray[2] = "student at";
    stringArray[3] = "42!";
    printArray(stringArray, "String array");

    // Test 5: Copy constructor
    std::cout << GREEN << "\n5. Testing copy constructor:" << RESET << std::endl;

    Array<int> copiedArray(intArray);
    printArray(copiedArray, "Copied array");

    // Modify original to test deep copy
    intArray[0] = 999;
    printArray(intArray, "Original after modification");
    printArray(copiedArray, "Copy after original modification");

    // Test 6: Assignment operator
    std::cout << GREEN << "\n6. Testing assignment operator:" << RESET << std::endl;

    Array<int> assignedArray(2);
    assignedArray[0] = 1;
    assignedArray[1] = 2;
    std::cout << "Before assignment: ";
    printArray(assignedArray, "assigned array");

    assignedArray = intArray;
    printArray(assignedArray, "After assignment");

    // Test 7: Const array and const operator[]
    std::cout << GREEN << "\n7. Testing const array access:" << RESET << std::endl;

    const Array<int> constArray(intArray);
    printArray(constArray, "Const array");

    // Test 8: Self-assignment
    std::cout << GREEN << "\n8. Testing self-assignment:" << RESET << std::endl;

    assignedArray = assignedArray;
    printArray(assignedArray, "After self-assignment");

    // Test 9: Exception handling - out of bounds access
    std::cout << GREEN << "\n9. Testing exception handling:" << RESET << std::endl;

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
      std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    std::cout << WHITE << "\n=== All tests completed successfully! ===" << RESET << std::endl;
  }
  catch (const std::exception& e)
  {
    std::cout << RED << "Unexpected exception: " << e.what() << RESET << std::endl;
    return 1;
  }

  return 0;
}
