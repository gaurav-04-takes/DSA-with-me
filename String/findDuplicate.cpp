#include <iostream>
using namespace std;

void checkDuplicate(char str[])
{
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                cout << str[i] << " repeate " << endl;
            }
        }
    }
}

// duplicate using bitwise operation

void bitwiseDuplicate(char str[])
{
    int i, H = 0, x = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        x = 1;
        x = x << str[i] - 97;
        if (x & H)
        {
            cout << str[i] << " repeates" << endl;
        }
        else
        {
            H = x | H;
        }
    }
}

int main()
{
    char str[] = "finding";
    checkDuplicate(str);
    bitwiseDuplicate(str);
    return 0;
}