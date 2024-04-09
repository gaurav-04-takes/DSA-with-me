#include <iostream>
using namespace std;

void reverse(char string[])
{
    int i, j, length = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    for (i = 0, j = length - 1; i <= j; i++, j--)
    {

        int temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}

int main()
{
    char string[] = "ABCDE";
    cout << "Before recerse :" << string << endl;
    reverse(string);
    cout << "After Revrse :" << string << endl;
    return 0;
}