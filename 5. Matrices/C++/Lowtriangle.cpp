#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class lowtriangle
{
private:
    int *A;
    int n;

public:
    lowtriangle()
    {
        n = 2;
        A = new int[2];
    }
    lowtriangle(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    ~lowtriangle()
    {
        delete[] A;
    }
};

void lowtriangle::set(int i, int j, int x)
{
    if (i >= j)
    {
        A[i * (i - 1) / 2 + (j - 1)] = x;
    }
}

int lowtriangle::get(int i, int j)
{
    if (i >= j)
    {
        return A[i * (i - 1) / 2 + (j - 1)];
    }
    else
    {
        return 0;
    }
}

void lowtriangle::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                cout << A[i * (i - 1) / 2 + (j - 1)] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int d;
    cout << "Enter dimensions: ";
    cin >> d;

    lowtriangle t(d);

    int x;

    cout << "Enter all the elements: " << endl;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> x;
            t.set(i, j, x);
        }
    }
    cout<<endl<<endl;
    t.display();

    return 0;
}