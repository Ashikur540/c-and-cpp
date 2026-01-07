#include <iostream>
#include <string>

int main()
{
    // Example without spaces
    std::string str = "helloollyo";

    int freq[256] = {0};

    // 1. Fill the frequency array
    for (int i = 0; i < str.length(); i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    // 2. Print results in order of appearance
    for (int i = 0; i < str.length(); i++)
    {
        unsigned char ch = str[i];

        // Only print if the count is greater than 0
        if (freq[ch] > 0)
        {
            std::cout << (char)ch << " : " << freq[ch] << std::endl;

            // Set to 0 so we don't print the same character again
            freq[ch] = 0;
        }
    }

    return 0;
}