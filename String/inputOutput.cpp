#include <iostream>
using namespace std;

int main()
{
    // char name[10] = {'G', 'a', 'u', 'r', 'a', 'v', '\0'};
    // cout << name << endl;
    // char S[10];
    // cout << "Enter S[]\n";
    // cin.get(S);
    // cout << S;

    char name[10] = {'G', 'a', 'u', 'r', 'a', 'v', '\0'};
    int length = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    cout << "Length is : " << length << endl;
    return 0;
}