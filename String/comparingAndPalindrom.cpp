#include <iostream>
using namespace std;

void compareString(char string1[], char string2[])
{
    int i, j;
    for (i = 0, j = 0; string2[j] != '\0' && string1[i] != '\0'; i++, j++)
    {
        if ((string1[j] != string2[i]))
        {
            break;
        }
    }
    if (string1[j] == string2[i])
        cout << "Both The String are same..." << endl;
    else if (string1[j] > string2[i])
        cout << " string 1 is biggere" << endl;
    else
        cout << "string 2 is biggere\n";
}

bool isPalendrom(char str[])
{
    int i, j, length = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    for (i = 0, j = length - 1; str[i] != '\0'; i++, j--)
    {
        if (str[i] != str[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char string1[] = "ABCD";
    char string2[] = "ABeCDe";
    compareString(string1, string2);

    char str[] = "MADAMa";

    if (isPalendrom(str))
        cout << "Palendrom";
    else
        cout << "Not a Palendrom";
    return 0;
}