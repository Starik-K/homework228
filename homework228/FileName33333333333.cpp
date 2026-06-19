//#1
//#include <iostream>
//using namespace std;
//
//void AddColumn(int**& a, int rows, int& cols, int pos)
//{
//    int** b = new int* [rows];
//
//    for (int i = 0; i < rows; i++)
//    {
//        b[i] = new int[cols + 1];
//
//        for (int j = 0; j < pos; j++)
//            b[i][j] = a[i][j];
//
//        cout << "New element [" << i << "][" << pos << "] = ";
//        cin >> b[i][pos];
//
//        for (int j = pos; j < cols; j++)
//            b[i][j + 1] = a[i][j];
//    }
//
//    for (int i = 0; i < rows; i++)
//        delete[] a[i];
//
//    delete[] a;
//
//    a = b;
//    cols++;
//}
//
//int main()
//{
//    int rows = 2, cols = 3;
//
//    int** a = new int* [rows];
//
//    for (int i = 0; i < rows; i++)
//    {
//        a[i] = new int[cols];
//        for (int j = 0; j < cols; j++)
//            cin >> a[i][j];
//    }
//
//    AddColumn(a, rows, cols, 1);
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//            cout << a[i][j] << " ";
//        cout << endl;
//    }
//
//    return 0;
//}
//#2
//#include <iostream>
//using namespace std;
//
//void DeleteColumn(int**& a, int rows, int& cols, int pos)
//{
//    int** b = new int* [rows];
//
//    for (int i = 0; i < rows; i++)
//    {
//        b[i] = new int[cols - 1];
//
//        int k = 0;
//
//        for (int j = 0; j < cols; j++)
//        {
//            if (j != pos)
//                b[i][k++] = a[i][j];
//        }
//    }
//
//    for (int i = 0; i < rows; i++)
//        delete[] a[i];
//
//    delete[] a;
//
//    a = b;
//    cols--;
//}
//
//int main()
//{
//    int rows = 2, cols = 4;
//
//    int** a = new int* [rows];
//
//    for (int i = 0; i < rows; i++)
//    {
//        a[i] = new int[cols];
//
//        for (int j = 0; j < cols; j++)
//            cin >> a[i][j];
//    }
//
//    DeleteColumn(a, rows, cols, 2);
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//            cout << a[i][j] << " ";
//
//        cout << endl;
//    }
//
//    return 0;
//}
//#3
//#include <iostream>
//using namespace std;
//
//void ShiftRight(int** a, int rows, int cols, int times)
//{
//    for (int t = 0; t < times; t++)
//    {
//        for (int i = 0; i < rows; i++)
//        {
//            int temp = a[i][cols - 1];
//
//            for (int j = cols - 1; j > 0; j--)
//                a[i][j] = a[i][j - 1];
//
//            a[i][0] = temp;
//        }
//    }
//}
//
//int main()
//{
//    int rows, cols;
//
//    cin >> rows >> cols;
//
//    int** a = new int* [rows];
//
//    for (int i = 0; i < rows; i++)
//    {
//        a[i] = new int[cols];
//
//        for (int j = 0; j < cols; j++)
//            cin >> a[i][j];
//    }
//
//    ShiftRight(a, rows, cols, 2);
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//            cout << a[i][j] << " ";
//
//        cout << endl;
//    }
//
//    return 0;
//}
//#4
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int rows, cols;
//
//    cin >> rows >> cols;
//
//    int** a = new int* [rows];
//
//    for (int i = 0; i < rows; i++)
//    {
//        a[i] = new int[cols];
//
//        for (int j = 0; j < cols; j++)
//            cin >> a[i][j];
//    }
//
//    int** t = new int* [cols];
//
//    for (int i = 0; i < cols; i++)
//    {
//        t[i] = new int[rows];
//
//        for (int j = 0; j < rows; j++)
//            t[i][j] = a[j][i];
//    }
//
//    cout << "Transposed matrix:\n";
//
//    for (int i = 0; i < cols; i++)
//    {
//        for (int j = 0; j < rows; j++)
//            cout << t[i][j] << " ";
//
//        cout << endl;
//    }
//
//    return 0;
//}
//#5
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//    const int SIZE = 5;
//
//    char names[SIZE][30];
//    char phones[SIZE][20];
//
//    for (int i = 0; i < SIZE; i++)
//    {
//        cout << "Name: ";
//        cin >> names[i];
//
//        cout << "Phone: ";
//        cin >> phones[i];
//    }
//
//    int choice;
//
//    do
//    {
//        cout << "\n1-Search by name";
//        cout << "\n2-Search by phone";
//        cout << "\n3-Edit";
//        cout << "\n0-Exit\n";
//
//        cin >> choice;
//
//        if (choice == 1)
//        {
//            char name[30];
//            cin >> name;
//
//            for (int i = 0; i < SIZE; i++)
//            {
//                if (strcmp(names[i], name) == 0)
//                    cout << names[i] << " " << phones[i] << endl;
//            }
//        }
//
//        if (choice == 2)
//        {
//            char phone[20];
//            cin >> phone;
//
//            for (int i = 0; i < SIZE; i++)
//            {
//                if (strcmp(phones[i], phone) == 0)
//                    cout << names[i] << " " << phones[i] << endl;
//            }
//        }
//
//        if (choice == 3)
//        {
//            int index;
//            cin >> index;
//
//            cin >> names[index];
//            cin >> phones[index];
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}
//#6
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//    char s[5][30];
//
//    for (int i = 0; i < 5; i++)
//        cin >> s[i];
//
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = i + 1; j < 5; j++)
//        {
//            if (strcmp(s[i], s[j]) > 0)
//            {
//                char temp[30];
//
//                strcpy(temp, s[i]);
//                strcpy(s[i], s[j]);
//                strcpy(s[j], temp);
//            }
//        }
//    }
//
//    cout << "\nSorted:\n";
//
//    for (int i = 0; i < 5; i++)
//        cout << s[i] << endl;
//
//    return 0;
//}
//#7
//
//#include <iostream>
//using namespace std;
//
//bool Exists(int* arr, int size, int value)
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] == value)
//            return true;
//    }
//
//    return false;
//}
//
//int main()
//{
//    int r1, c1, r2, c2, r3, c3;
//
//    cin >> r1 >> c1;
//    cin >> r2 >> c2;
//    cin >> r3 >> c3;
//
//    int** A = new int* [r1];
//    int** B = new int* [r2];
//    int** C = new int* [r3];
//
//    for (int i = 0; i < r1; i++)
//    {
//        A[i] = new int[c1];
//        for (int j = 0; j < c1; j++)
//            cin >> A[i][j];
//    }
//
//    for (int i = 0; i < r2; i++)
//    {
//        B[i] = new int[c2];
//        for (int j = 0; j < c2; j++)
//            cin >> B[i][j];
//    }
//
//    for (int i = 0; i < r3; i++)
//    {
//        C[i] = new int[c3];
//        for (int j = 0; j < c3; j++)
//            cin >> C[i][j];
//    }
//
//    int result[1000];
//    int size = 0;
//
//
//    for (int i = 0; i < r1; i++)
//    {
//        for (int j = 0; j < c1; j++)
//        {
//            int x = A[i][j];
//
//            bool inB = false;
//            bool inC = false;
//
//            for (int k = 0; k < r2; k++)
//                for (int l = 0; l < c2; l++)
//                    if (B[k][l] == x)
//                        inB = true;
//
//            for (int k = 0; k < r3; k++)
//                for (int l = 0; l < c3; l++)
//                    if (C[k][l] == x)
//                        inC = true;
//
//            if (inB && inC && !Exists(result, size, x))
//                result[size++] = x;
//        }
//    }
//
//    cout << "Common A B C:\n";
//
//    for (int i = 0; i < size; i++)
//        cout << result[i] << " ";
//
//    cout << endl;
//
//
//    int neg[1000];
//    int negSize = 0;
//
//    int* matrices[3] = {
//        &A[0][0],
//        &B[0][0],
//        &C[0][0]
//    };
//
//    for (int i = 0; i < r1; i++)
//        for (int j = 0; j < c1; j++)
//            if (A[i][j] < 0 && !Exists(neg, negSize, A[i][j]))
//                neg[negSize++] = A[i][j];
//
//    for (int i = 0; i < r2; i++)
//        for (int j = 0; j < c2; j++)
//            if (B[i][j] < 0 && !Exists(neg, negSize, B[i][j]))
//                neg[negSize++] = B[i][j];
//
//    for (int i = 0; i < r3; i++)
//        for (int j = 0; j < c3; j++)
//            if (C[i][j] < 0 && !Exists(neg, negSize, C[i][j]))
//                neg[negSize++] = C[i][j];
//
//    cout << "Negative:\n";
//
//    for (int i = 0; i < negSize; i++)
//        cout << neg[i] << " ";
//
//    return 0;
//}