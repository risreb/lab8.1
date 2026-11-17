#include <iostream>
#include <string>
#include <Windows.h>

class bad_length {};
    
int function(std::string str, int forbidden_length)
{
    if (str.length() == forbidden_length)
    {
        throw bad_length();
    }
    return str.length();
 }


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int forbidden_length;
    std::string str;

    std::cout << "Введите запретную длинну: " << std::endl;
    std::cin >> forbidden_length;

    while (true)
    {
        std::cout << "Введите слово: " << std::endl;
        std::cin >> str;

        try

        {

            int length = function(str, forbidden_length);

            std::cout << "Длина слова \"" << str << "\" равна " << length << std::endl;
        }
        catch (bad_length)

        {
            std::cout << "Вы ввели слово запретной длинны! " << "До свидания! " << std::endl;

            break;

        }

    }

    return 0;
}
