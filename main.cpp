#include <iostream>
#include <unordered_map>
#include <sstream>

int main() 
{
    std::string text;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);

    std::istringstream iss(text);
    std::unordered_map<std::string, int> wordFrequency; // Hash table to store word-frequency pairs

    std::string word;
    while (iss >> word) {
        // Clean the word (remove punctuation, convert to lowercase, etc. if needed)
        // For simplicity, assuming input text has words separated by spaces

        // Update word frequency in the hash table
        wordFrequency[word]++; // If word doesn't exist, it will be initialized to 0 and then incremented to 1
    }

    // Print word frequencies
    std::cout << "Word Frequencies:" << std::endl;
    for (const auto& pair : wordFrequency) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}