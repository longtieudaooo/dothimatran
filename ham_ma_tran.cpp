#include <iostream>
#include <fstream>

using namespace std;

const int n = 6;


void docMaTran(int a[][n], const char* tenFile)
{
    ifstream file(tenFile);

    if (!file)
    {
        cout << "Khong mo duoc file!" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            file >> a[i][j];
        }
    }

    file.close();
}


void inMaTran(int a[][n])
{
    cout << "Ma tran trong so:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }

        cout << endl;
    }
}

int main()
{
    int a[n][n];

    docMaTran(a, "matran.txt");

    inMaTran(a);

    return 0;
}
