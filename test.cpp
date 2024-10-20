
#include <iostream>
#include "include/libsha.hpp"

int main()
{
    std::string sGrape = "grape";

    std::cout << "String test:" << std::endl;
    std::cout << sha256(sGrape) << "\n" << (sha256(sGrape) == "0f78fcc486f5315418fbf095e71c0675ee07d318e5ac4d150050cd8e57966496") << std::endl;

    std::cout << "File stream test:" << std::endl;

    std::fstream testfile("shatest.txt", std::ios_base::binary | std::ios_base::in);
    std::string file_sha = sha256(testfile);

    std::cout << file_sha << "\n" << (file_sha == "e263ab4c647fe12801039513c42a4ff974e9612502855c98e1e4993460ce6f70") << std::endl;

    std::cout << "File stream test w/ pos:" << std::endl;

    testfile.seekg(0, std::ios_base::end);
    file_sha = sha256(testfile, 0, testfile.tellg());

    std::cout << file_sha << "\n" << (file_sha == "e263ab4c647fe12801039513c42a4ff974e9612502855c98e1e4993460ce6f70");
}

