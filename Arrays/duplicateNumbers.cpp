#include <iostream>
using namespace std;

class Array
{
public:
    int A[10];

    void duplicateOfSortedArray1()
    {
        int i, lastduplicate = 0;
        for (i = 0; i < 10; i++)
        {
            if (A[i] == A[i + 1] && lastduplicate != A[i])
            {
                lastduplicate = A[i];
                cout << A[i] << " ";
            }
        }
    }
    void countingDuplicateOfSortedArray()
    {
        int i, j = 0, lastduplicate = 0;
        for (i = 0; i < 9; i++)
        {
            if (A[i] == A[i + 1] && A[i] != lastduplicate)
            {
                lastduplicate = A[i];
                j = i + 1;
                while (A[i] == A[j])
                    j++;
                cout << A[i] << " Repeate for " << j - i << " Time" << endl;
            }
        }
    }
    void duplicateInArrayUsingHashMap()
    {

        int H[8];
        int lastduplicate = 0;
        for (int i = 0; i < 8; i++)
        {
            H[i] = 0;
        }

        for (int i = 0; i < 8; i++)
        {
            H[A[i]]++;
        }
        // for (int i = 0; i < 10; i++)
        // {
        //     cout << H[i] << " ";
        // }

        for (int i = 0; i < 8; i++)
        {
            if (H[A[i]] > 1 && lastduplicate != A[i])
            {
                lastduplicate = A[i];
                cout << A[i] << " is repeated " << H[A[i]] << " times" << endl;
            }
        }
    }

    void countDuplicateInUnsortedArray()
    {
        int i, j, count;
        for (i = 0; i < 9; i++)
        {
            count = 1;
            if (A[i] != -1)
            {
                for (j = i + 1; j < 10; j++)
                {
                    if (A[i] == A[j])
                    {
                        count++;
                        A[j] = -1;
                    }
                }
            }
            if (count > 1)
            {
                cout << A[i] << " repeate " << count << " times" << endl;
            }
        }
    }

    void pairOfNumber(int x) //(a+b)==x
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = i + 1; j < 10; j++)
            {
                if ((A[i] + A[j]) == x)
                {
                    cout << A[i] << " + " << A[j] << " = " << x << endl;
                }
            }
        }
    }
    void pairOfNumberUsingHashMap(int x)
    {
        int H[13];
        for (int i = 0; i < 13; i++)
        {
            H[i] = 0;
        }

        for (int i = 0; i < 10; i++)
        {
            if (H[x - A[i]] > 0 && (x - A[i]) > 0)
            {
                cout << A[i] << " + " << x - A[i] << " = " << x << endl;
            }
            H[A[i]]++;
        }
    }

    void findMinMax()
    {
        int min = 1;
        int max = 0;

        for (int i = 0; i < 10; i++)
        {
            if (min > A[i])
            {
                min = A[i];
            }
            if (max < A[i])
            {
                max = A[i];
            }
        }
        cout << "Min :" << min << endl
             << "Max :" << max << endl;
    }
};

int main()
{
    Array a{2, 7, 3, 2, 8, 5, 6, 4, 48, 12};
    a.findMinMax();

    return 0;
}