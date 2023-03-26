#include <iostream>
#include <vector>
#include "functions/base64.hpp"


std::string TwoStringWeirdo(std::string A_0, std::string A_1)
{
    int length = A_0.length();
    int length2 = A_1.length();
    char* array = new char[length];
    for (int i = 0; i < length; i++)
    {
        array[i] = static_cast<char>(static_cast<int>(A_0[i]) ^ static_cast<int>(A_1[i % length2]));
    }
    std::string result(array, length);
    delete[] array;
    return result;
}

auto main() -> int {

    std::vector<std::string> maw = { "BQ==", "QA==", "AQ==", "Cg==", "LA==", "LA==", "Gw==", "Rw==", "AQ==", "Fw==", "EA==", "Qw==", "AQ==", "QA==", "LA==", "LA==", "GA==", "QA==", "Cg==", "FA==", "QA==", "HQ==" };
    int num{ 0 };

    while (num < maw.size()) {
        std::cout << TwoStringWeirdo(base64_decode(maw[num]), "s0h4rd");
        num++;
    }
}