#include <iostream>
using namespace std;

class Array
{
public:
    int A[10];
    int size;
    int length;
    int B[10];
    int size2;
    int length2;

    int C[20];
    int size3;
    int length3;

    void display()
    {

        cout << "Elements in an Array are :";
        for (int i = 0; i < length3; i++)
        {
            cout << C[i] << " ";
        }
    }
    void append(int x)
    {
        if (length == size)
        {
            cout << "Array is full" << endl;
        }
        else
        {
            A[length] = x;
            length++;
        }
    }

    void insert(int index, int x)
    {
        if (index < size && length <= size)
        {
            if (index > length)
            {
                A[length] = x;
                length++;
            }
            else
            {
                for (int i = length; i > index; i--)
                {
                    A[i] = A[i - 1];
                }
                A[index] = x;
                length++;
            }
        }
        else
        {
            cout << "Array is Full" << endl;
        }
    }

    void Delete(int index)
    {
        if (length > 0)
        {
            cout << A[index] << " is removed" << endl;
            for (int i = index; i < length - 1; i++)
            {
                A[i] = A[i + 1];
            }
            length--;
        }
    }

    int linearSearch(int key)
    {
        for (int i = 0; i < length2; i++)
        {
            if (B[i] == key)
            {
                return true;
            }
        }
        return false;
    }

    void swap(int *x, int *y)
    {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }

    int linearSearchAdvanced(int key)
    {
        for (int i = 0; i < length; i++)
        {
            if (A[i] == key)
            {
                swap(&A[i], &A[0]); // This is an move to fron/head method transposition is not performed here..
                return 0;
            }
        }
        return -1;
    }

    int binarySearch(int key)
    {
        int min = 0;
        int max = length;
        int mid = (min + max) / 2;

        while (min <= max)
        {
            if (A[mid] == key)
            {
                return mid;
            }
            else if (A[mid] > key)
            {
                max = mid - 1;
            }
            else
            {
                min = mid + 1;
            }
            mid = (min + max) / 2;
        }
        return -1;
    }

    int recusrciveVersionOfBinarySearch(int min, int max, int key)
    {
        int mid = (min + max) / 2;
        if (min <= max)
        {
            if (key == A[mid])
            {
                return mid;
            }
            else if (key < A[mid])
            {
                max = mid - 1;
                return recusrciveVersionOfBinarySearch(min, max, key);
            }
            else
            {
                min = mid + 1;
                return recusrciveVersionOfBinarySearch(min, max, key);
            }
        }
        return -1;
    }

    void get(int index)
    {
        if (index < length && index >= 0)
        {
            cout << A[index] << endl;
        }
        else
        {
            cout << "Not an valid index" << endl;
        }
    }

    void set(int index, int x)
    {
        if (index < length && index >= 0)
        {
            A[index] = x;
        }
    }
    void max()
    {
        int max = A[0];
        for (int i = 1; i < length; i++)
        {
            if (max < A[i])
            {
                max = A[i];
            }
        }
        cout << "Max : " << max << endl;
    }
    void min()
    {
        int min = A[0];
        for (int i = 1; i < length; i++)
        {
            if (min > A[i])
            {
                min = A[i];
            }
        }
        cout << "Min : " << min << endl;
    }
    void sum()
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += A[i];
        }
        cout << "Sum :" << sum << endl;
    }
    int sumByRecurciveMethod(int l, int sum)
    {
        // int sum = 0;
        if (l < 0)
        {
            return sum;
        }
        else
        {
            sum += A[l];
            return sumByRecurciveMethod(l - 1, sum);
        }
    }

    void average()
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += A[i];
        }
        cout << "Avg :" << sum / length << endl;
    }

    void leftShift(int index)
    {

        for (int j = 0; j <= index; j++)
        {
            for (int i = 0; i < length; i++) //
            {
                A[i] = A[i + 1]; // 0
            }
        }
        length = length - index - 1;
    }

    void reverse()
    {
        int B[10];
        for (int i = 0, j = length - 1; j >= 0; i++, j--)
        {
            B[i] = A[j];
        }
        for (int i = 0; i < length; i++)
        {
            A[i] = B[i];
        }
    }
    void reverseBySwapMethod()
    {
        int temp;
        for (int i = 0, j = length - 1; j > i; i++, j--)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    void rotate(int index)
    {
        if (index >= 0 && index < length)
        {
            for (int i = index; i >= 0; i--)
            {
                int temp = A[0];
                for (int j = 0; j < length; j++)
                {
                    A[j] = A[j + 1];
                }
                A[length - 1] = temp;
            }
        }
    }

    void insertInSortedArray(int x)
    {
        int i = length;
        A[length] = x;

        if (length == size)
            return;
        while (A[i] < A[i - 1] && i >= 0)
        {
            swap(&A[i], &A[i - 1]);
            i--;
        }
        A[i] = x;
        length++;
    }

    int isSorted()
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                return 0;
            }
        }
        return 1;
    }

    // All the -ve will be in left side and +ve will be in right side...
    void allPositiveRightSide()
    {

        for (int i = 0, j = length - 1; j > i; i++, j--)
        {
            while (A[j] > 0)
                j--;
            while (A[i] < 0)
                i++;
            swap(&A[i], &A[j]);
        }
    }

    void merge()
    {
        int i = 0;
        int j = 0;
        int k = 0;
        while (i < length && j < length2)
        {
            if (A[i] < B[j])
            {
                C[k++] = A[i++];
            }
            else
            {
                C[k++] = B[j++];
            }
        }
        for (; i < length; i++)
        {
            C[k] = A[i];
        }
        for (; j < length; j++)
        {
            C[k] = B[j];
        }
    }
    void unionForUnsorted()
    {
        int i;
        for (i = 0; i < length; i++)
        {
            C[i] = A[i];
            length3++;
        }

        for (i = 0; i < length2; i++)
        {
            if (linearSearch(B[i]))
            {
                // continue;
            }
            else
            {
                C[length3] = B[i];
                length3++;
            }
        }
    }

    void unionForSortedArray()
    {
        int i = 0, j = 0, k = 0;
        while (i < length)
        {
            if (A[i] == B[j])
            {
                C[k++] = A[i++];
                j++;
                length3++;
            }
            else if (A[i] > B[j])
            {
                C[k++] = B[j++];
                length3++;
            }
            else
            {
                C[k++] = A[i++];
                length3++;
            }
        }
        for (; j < length2; j++)
        {
            C[k++] = B[j];
            length3++;
        }
    }

    void intersectionForUnsortedArray()
    {
        int i;
        int k = 0;
        for (i = 0; i < length; i++)
        {
            if (linearSearch(B[i]))
            {
                C[k++] = B[i];
                length3++;
            }
        }
    }
    void intersectionForSortedArray()
    {
        int i = 0, j = 0, k = 0;
        while (i < length)
        {
            if (A[i] == B[j])
            {
                C[k++] = A[i++];
                j++;
                length3++;
            }
            else if (A[i] < B[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
    }
    void setDifferenceForUnsortedArray()
    { // Note A - B
        int i = 0, k = 0;
        while (i < length)
        {
            if (linearSearch(A[i]))
            {
                i++;
            }
            else
            {
                C[k++] = A[i++];
                length3++;
            }
        }
    }
    void setDifferenceForSortedArray()
    {
        int i = 0, j = 0, k = 0;
        while (i < length)
        {
            if (A[i] == B[j])
            {
                i++;
                j++;
            }
            else if (A[i] < B[j])
            {
                C[k++] = A[i++];
                length3++;
            }
            else
            {
                j++;
            }
        }
        for (; i < length; i++)
        {
            C[k++] = A[i];
            length3++;
        }
    }
};

int main()
{

    Array arr{{5, 10, 13, 17, 18}, 5, 5, {10, 17, 20, 25, 30}, 5, 5, {0}, 10, 0};
    arr.setDifferenceForSortedArray();
    arr.display();
    return 0;
}