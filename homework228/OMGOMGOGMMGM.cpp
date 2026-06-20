//дз1
//#include <iostream>
//
//using namespace std;
//
//void print(int a[][10], int rows, int cols)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//            cout << a[i][j] << " ";
//
//        cout << endl;
//    }
//}
//
//void addRowEnd(int a[][10], int& rows, int cols, int row[])
//{
//    for (int j = 0; j < cols; j++)
//        a[rows][j] = row[j];
//
//    rows++;
//}
//
//int main()
//{
//    int a[10][10] =
//    {
//        {1,2,3},
//        {4,5,6}
//    };
//
//    int rows = 2;
//    int cols = 3;
//
//    int row[3] = { 7,8,9 };
//
//    addRowEnd(a, rows, cols, row);
//
//    print(a, rows, cols);
//}
//
//дз2
//#include <iostream>
//
//using namespace std;
//
//void print(int a[][10], int rows, int cols)
//{
//    for (int i = 0;i < rows;i++)
//    {
//        for (int j = 0;j < cols;j++)
//            cout << a[i][j] << " ";
//
//        cout << endl;
//    }
//}
//
//void addRowBegin(int a[][10], int& rows, int cols, int row[])
//{
//    for (int i = rows;i > 0;i--)
//    {
//        for (int j = 0;j < cols;j++)
//            a[i][j] = a[i - 1][j];
//    }
//
//    for (int j = 0;j < cols;j++)
//        a[0][j] = row[j];
//
//    rows++;
//}
//
//int main()
//{
//    int a[10][10] =
//    {
//        {1,2,3},
//        {4,5,6}
//    };
//
//    int rows = 2;
//    int cols = 3;
//
//    int row[3] = { 7,8,9 };
//
//    addRowBegin(a, rows, cols, row);
//
//    print(a, rows, cols);
//}
//дз3
//#include <iostream>
//
//using namespace std;
//
//void print(int a[][10], int rows, int cols)
//{
//    for (int i = 0;i < rows;i++)
//    {
//        for (int j = 0;j < cols;j++)
//            cout << a[i][j] << " ";
//
//        cout << endl;
//    }
//}
//
//void addRowPos(int a[][10], int& rows, int cols, int row[], int pos)
//{
//    for (int i = rows;i > pos;i--)
//    {
//        for (int j = 0;j < cols;j++)
//            a[i][j] = a[i - 1][j];
//    }
//
//    for (int j = 0;j < cols;j++)
//        a[pos][j] = row[j];
//
//    rows++;
//}
//
//int main()
//{
//    int a[10][10] =
//    {
//        {1,2,3},
//        {4,5,6}
//    };
//
//    int row[3] = { 7,8,9 };
//
//    int rows = 2;
//    int cols = 3;
//
//    addRowPos(a, rows, cols, row, 1);
//
//    print(a, rows, cols);
//}
//дз4
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main()
//{
//    srand(time(0));
//
//    const int ROWS = 5;
//    const int COLS = 5;
//
//    int a[ROWS][COLS];
//
//    for (int i = 0;i < ROWS;i++)
//    {
//        for (int j = 0;j < COLS;j++)
//            a[i][j] = rand() % 5;
//    }
//
//    int rows = ROWS;
//
//    for (int i = 0;i < rows;i++)
//    {
//        bool zero = false;
//
//        for (int j = 0;j < COLS;j++)
//        {
//            if (a[i][j] == 0)
//                zero = true;
//        }
//
//        if (zero)
//        {
//            for (int k = i;k < rows - 1;k++)
//            {
//                for (int j = 0;j < COLS;j++)
//                    a[k][j] = a[k + 1][j];
//            }
//
//            rows--;
//            i--;
//        }
//    }
//
//    for (int i = 0;i < rows;i++)
//    {
//        for (int j = 0;j < COLS;j++)
//            cout << a[i][j] << " ";
//
//        cout << endl;
//    }
//}
//
//дз5
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main()
//{
//    srand(time(0));
//
//    int rows, cols;
//
//    cin >> rows >> cols;
//
//    int** a = new int* [rows];
//    int** b = new int* [rows];
//    int** c = new int* [rows];
//
//    for (int i = 0;i < rows;i++)
//    {
//        a[i] = new int[cols];
//        b[i] = new int[cols];
//        c[i] = new int[cols];
//    }
//
//    for (int i = 0;i < rows;i++)
//    {
//        for (int j = 0;j < cols;j++)
//        {
//            a[i][j] = rand() % 10;
//            b[i][j] = rand() % 10;
//            c[i][j] = a[i][j] + b[i][j];
//        }
//    }
//
//    for (int i = 0;i < rows;i++)
//    {
//        for (int j = 0;j < cols;j++)
//            cout << c[i][j] << " ";
//
//        cout << endl;
//    }
//
//    for (int i = 0;i < rows;i++)
//    {
//        delete[] a[i];
//        delete[] b[i];
//        delete[] c[i];
//    }
//
//    delete[] a;
//    delete[] b;
//    delete[] c;
//}
//
//дз6
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int m, n, k;
//
//    cin >> m >> n >> k;
//
//    int a[10][10];
//    int b[10][10];
//    int c[10][10];
//
//    for (int i = 0;i < m;i++)
//        for (int j = 0;j < n;j++)
//            cin >> a[i][j];
//
//    for (int i = 0;i < n;i++)
//        for (int j = 0;j < k;j++)
//            cin >> b[i][j];
//
//    for (int i = 0;i < m;i++)
//    {
//        for (int j = 0;j < k;j++)
//        {
//            c[i][j] = 0;
//
//            for (int t = 0;t < n;t++)
//                c[i][j] += a[i][t] * b[t][j];
//        }
//    }
//
//    for (int i = 0;i < m;i++)
//    {
//        for (int j = 0;j < k;j++)
//            cout << c[i][j] << " ";
//
//        cout << endl;
//    }
//}
//дз7
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//
//    int rows, cols;
//
//    cin >> rows >> cols;
//
//    if (rows * cols != 12)
//    {
//        cout << "Неможливо";
//        return 0;
//    }
//
//    int k = 0;
//
//    for (int i = 0;i < rows;i++)
//    {
//        for (int j = 0;j < cols;j++)
//        {
//            cout << a[k] << " ";
//            k++;
//        }
//
//        cout << endl;
//    }
//}
//
//дз8
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//    char s[5][50];
//
//    for (int i = 0;i < 5;i++)
//        cin.getline(s[i], 50);
//
//    int max = 0;
//
//    for (int i = 1;i < 5;i++)
//    {
//        if (strlen(s[i]) > strlen(s[max]))
//            max = i;
//    }
//
//    cout << "Найдовше прізвище: " << s[max];
//
//    return 0;
//}
//
