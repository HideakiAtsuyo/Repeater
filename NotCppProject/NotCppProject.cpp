#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    std::wcout << "Tell me anything you want!" << std::endl;
    std::string a;
    std::getline(std::cin, a);
    std::cout << "You want: " << a << std::endl;
    system("pause");
}