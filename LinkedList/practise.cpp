#include <iostream>
#include <vector>
#include <string>

int main() {
    // Create a vector of strings
    std::vector<std::string> string_vector;

    // Define the number of elements you want in the vector
    int num_elements = 5;

    // Use a loop to populate the string vector
    for (int i = 0; i < num_elements; i++) {
        string_vector.push_back("Element ");
    }

    // Print the string vector
    for (const std::string& element : string_vector) {
        std::cout << element << std::endl;
    }

    return 0;
}
