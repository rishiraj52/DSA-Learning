#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class diagonal
{
private:
    int *A;
    int n;

public:
    diagonal()
    {
        n = 2;
        A = new int[2];
    }
    diagonal(int n)
    {
        this->n = n;
        A = new int[n];
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    ~diagonal()
    {
        delete[] A;
    }
};

void diagonal::set(int i, int j, int x)
{
    if (i == j)
    {
        A[i - 1] = x;
    }
}

int diagonal::get(int i, int j)
{
    if (i == j)
    {
        return A[i - 1];
    }
    else
    {
        return 0;
    }
}

void diagonal::display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << A[i] << " ";
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
    diagonal d(4);

    d.set(1, 1, 5);
    d.set(2, 2, 2);
    d.set(3, 3, 4);
    d.set(4, 4, 8);

    d.set(1, 4, 1);
    d.set(3, 4, 9);

    cout << d.get(3, 3) << endl;
    d.display();

    return 0;
}