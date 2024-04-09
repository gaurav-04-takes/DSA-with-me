#include <iostream>
using namespace std;

bool isAnagram(char str1[], char str2[])
{
    int hash[26], i, length1 = 0, length2 = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        length1++;
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        length2++;
    }
    if (length1 == length2)
    {
        for (i = 0; i < 26; i++)
        {
            hash[i] = 0;
        }

        for (i = 0; str1[i] != '\0'; i++)
        {
            hash[str1[i] - 97]++;
        }

        for (i = 0; str2[i] != '\0'; i++)
        {
            hash[str2[i] - 97]--;
            if (hash[i] < 0)
            {
                return false;
            }
        }
        return true;

        // for (i = 0; i < 26; i++)
        // {

        // }
    }
    return false;
}

int main()
{
    char str1[] = "decimal";
    char str2[] = "medical";
    if (isAnagram(str1, str2))
    {
        cout << "The string is Anagram";
    }
    else
    {
        cout << "Not An Anagram";
    }
}