#include <iostream>
using namespace std;

void lowerToUpper()
{
    char name[] = "gaurav";
    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] = int(name[i]) - 32;
    }
    cout << name << endl;
}

void upperToLower()
{
    char name[] = "GAURAV";
    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] = int(name[i]) + 32;
    }
    cout << name << endl;
}

void changeCase()
{
    char name[] = "gAurAv04";
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 65 && name[i] <= 91)
        {
            name[i] += 32;
        }
        else if (name[i] >= 'a' && name[i] <= 122)
        {
            name[i] -= 32;
        }
    }
    cout << name << endl;
}

int main()
{
    lowerToUpper();
    upperToLower();
    changeCase();

    return 0;
}