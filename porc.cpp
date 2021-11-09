#include <iostream>
#include <fstream>

int main()
{
    std::fstream f("aa.txt", std::ios::in | std::ios::out);
    f.seekp(2);
    f << "saf";

}
