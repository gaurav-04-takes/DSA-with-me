#include <iostream>
using namespace std;

class missingNumber
{

public:
    int A[10];

    int linearSearch(int x)
    {
        for (int i = 0; i < 10; i++)
        {
            if (A[i] == x)
            {
                return true;
            }
        }
        return false;
    }

    void missingValue1()
    {

        for (int i = 0; i <= 10; i++)
        {
            if (A[i] != i + 1)
            {
                cout << i + 1 << " ";
                break;
            }
        }
    }

    void missingValue2()
    {
        // By formulaa  (n*(n+1))/2

        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            sum += A[i];
        }
        int s = (A[9] * (A[9] + 1)) / 2;
        int cheack = s - sum;
        cout << "Missin element is : " << cheack << endl;
    }

    void missingValue3()
    {

        int l = A[0];
        // int h = A[9];
        int diff = l - 0;
        for (int i = 0; i < 10; i++)
        {
            if ((A[i] - i) != diff)
            {
                while (diff < (A[i] - i))
                {
                    cout << "Missing element is : " << i + diff << endl;
                    diff++;
                }
            }
        }
    }

    void missingValueInUnsortedArray()
    {
        for (int i = 1; i <= 10; i++)
        {
            if (!(linearSearch(i)))
            {
                cout << i << " ";
            }
        }
    }
};

int main()
{
    missingNumber obj{1, 3, 6, 9, 10, 8, 5, 11, 2, 12};
    obj.missingValueInUnsortedArray();

    return 0;
}