#include <iostream>
using namespace std;

void perm(char str[], int k)
{
    static int A[10] = {0};
    static char res[10];
    int i;
    if (str[k] == '\0')
    {
        res[k] = '\0';
        cout << res << " ";
    }
    else
    {
        for (i = 0; str[i] != '\0'; i++)
        {
            if (A[i] == 0)
            {
                res[k] = str[i];
                A[i] = 1;
                perm(str, k + 1);
                A[i] = 0;
            }
        }
    }
}

int main()
{
    char str[] = "ABC";
    perm(str, 0);
    return 0;
}