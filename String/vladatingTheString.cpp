#include <iostream>
using namespace std;

int isValid(char *name)
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 65 && name[i] <= 'Z') && !(name[i] >= 'a' && name[i] <= 'z') && !(name[i] >= 48 && name[i] <= 57))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char *name = "Gaur@v123";
    if (isValid(name))
    {
        cout << "Name is Valid...";
    }
    else
    {
        cout << "Name is not Valid...";
    }
    return 0;
}