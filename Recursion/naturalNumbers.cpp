#include <iostream>
using namespace std;
int sum = 0;
void naturalNo(int n)
{
    if (n > 0)
    {
        sum += n;
        naturalNo(n - 1);
    }
}


//This by sir aproach
int naturalNo1(int n){
    if(n==0){
        return 0;
    }
    else{
        return naturalNo1(n-1)+n;
    }
}

int naturalNo2(int n){
    return (n*(n+1))/2;
}

int main()
{
    int x;
    cout << "Enter a number :" << endl;
    cin >> x;
    naturalNo(x);
    cout << "Sum of Natural is :" << sum;
    return 0;
}