#include <iostream>
using namespace std;

void countVovelsConsonents()
{
    int i, vCount = 0, cCount = 0;
    char C[] = "How are You";
    for (i = 0; C[i] != '\0'; i++)
    {
        if (C[i] == 'a' || C[i] == 'e' || C[i] == 'i' || C[i] == 'o' || C[i] == 'u' || C[i] == 'A' || C[i] == 'E' || C[i] == 'I' || C[i] == 'O' || C[i] == 'U')
        {
            vCount++;
        }
        else if ((C[i] >= 'A' && C[i <= 'Z']) || (C[i] >= 'a' && C[i] <= 'z'))
        {
            cCount++;
        }
    }
    cout << "Total No. of Vovels is: " << vCount << endl
         << "Total No. pf Consosnets :" << cCount << endl;
}

int main()
{
    countVovelsConsonents();
    return 0;
}