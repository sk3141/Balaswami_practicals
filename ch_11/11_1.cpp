#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream input("input.txt");
    if (!input)
    {
        std::cerr << "Cannot open input.txt" << std::endl;
        return 1;
    }

    std::ofstream output("output.txt");
    if (!output)
    {
        std::cerr << "Cannot open output.txt" << std::endl;
        return 1;
    }

    std::string line;

    while(std::getline(input, line))
    {
        bool previousIsSpace = false;
        for (int i = 0; line[i] != '\0'; i++)
        {
            char c = line[i];
            if (c == ' ')
            {
                if (!previousIsSpace)
                {
                    output << c;                    
                }
                previousIsSpace = true;
            }
            else
            {
                output << c;
                previousIsSpace = false;
            }
        }
        output << '\n';
    }
    input.close();
    output.close();
    return 0;
}