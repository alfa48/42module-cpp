
#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(const std::string &str, const std::string &to, const std::string &from)
{
    std::string rstd;
    size_t posInicio = 0;
    size_t posEncontrada = str.find(to, posInicio);

    while (posEncontrada != std::string::npos)
    {
        rstd += str.substr(posInicio, posEncontrada - posInicio);

        rstd += from;

        posInicio = posEncontrada + to.length();

        posEncontrada = str.find(to, posInicio);
    }

    rstd += str.substr(posInicio);

    return rstd;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Not enough arguments" << std::endl;
        return (1);
    }
    std::fstream file;
    file.open(argv[1], std::ios::in);
    if (file.fail())
    {
        std::cout << "File can not be opened" << std::endl;
        return (1);
    }
    else
    {
        std::string file_replace_name = argv[1];
        std::fstream file_replace;
        file_replace_name += ".replace";
        file_replace.open(file_replace_name.c_str(), std::ios::out);
        std::string line;
        if (file.is_open())
        {
            while (getline(file, line))
                file_replace << replaceAll(line, argv[2], argv[3]) << std::endl;
        }
        file_replace.close();
        file.close();
    }
    return 0;
}