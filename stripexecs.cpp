// just a handy little file for removing all executables.

#include <iostream>
#include <filesystem>
#include <string>

using namespace std;

namespace fs = std::filesystem;

void deleteExecutables(const fs::path &dir)
{
    for (const auto &entry : fs::directory_iterator(dir))
    {
        if (entry.is_directory())
        {
            deleteExecutables(entry.path());
        }
        else
        {
            if (entry.path().extension() == ".exe" && entry.path().filename() != "stripexecs.exe")
            {
                std::cout << "deleting exe at :: " << entry.path();
                fs::remove(entry.path());
            }
        }
    }
}

int main()
{
    fs::path currentDir = fs::current_path();
    deleteExecutables(currentDir);
    std::cout << "removed all executables." << std::endl;
    return 0;
}
