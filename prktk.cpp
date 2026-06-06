//zadanya 1+1
//first(Selection Sort)
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a[5] = { 5, 2, 8, 1, 4 };
//
//    for (int i = 0; i < 4; i++)
//    {
//        int min = i;
//
//        for (int j = i + 1; j < 5; j++)
//            if (a[j] < a[min])
//                min = j;
//
//        swap(a[i], a[min]);
//    }
//
//    for (int i = 0; i < 5; i++)
//        cout << a[i] << " ";
//
//    return 0;
//}
//second(Insertion Sort)
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a[5] = { 5, 2, 8, 1, 4 };
//
//    for (int i = 1; i < 5; i++)
//    {
//        int key = a[i];
//        int j = i - 1;
//
//        while (j >= 0 && a[j] > key)
//        {
//            a[j + 1] = a[j];
//            j--;
//        }
//
//        a[j + 1] = key;
//    }
//
//    for (int i = 0; i < 5; i++)
//        cout << a[i] << " ";
//
//    return 0;
//}
//zadanie 2
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int marks[10];
//
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "Ocinka " << i + 1 << ": ";
//        cin >> marks[i];
//    }
//
//    int choice;
//
//    do
//    {
//        cout << "\n1 - Вивести оцiнки";
//        cout << "\n2 - Перескладання";
//        cout << "\n3 - Стипендiя";
//        cout << "\n0 - Вихiд\n";
//        cin >> choice;
//
//        if (choice == 1)
//        {
//            for (int i = 0; i < 10; i++)
//                cout << marks[i] << " ";
//            cout << endl;
//        }
//
//        if (choice == 2)
//        {
//            int pos, mark;
//
//            cout << "Номер оцiнки (1-10): ";
//            cin >> pos;
//
//            cout << "Нова оцiнка: ";
//            cin >> mark;
//
//            marks[pos - 1] = mark;
//        }
//
//        if (choice == 3)
//        {
//            double sum = 0;
//
//            for (int i = 0; i < 10; i++)
//                sum += marks[i];
//
//            double avg = sum / 10;
//
//            if (avg >= 10.7)
//                cout << "Стипендiя є\n";
//            else
//                cout << "Стипендiї немає\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}
//
//zadanie 3
//#include <iostream>
//using namespace std;
//
//void QuickSort(int a[], int left, int right)
//{
//    int i = left;
//    int j = right;
//    int pivot = a[(left + right) / 2];
//
//    while (i <= j)
//    {
//        while (a[i] < pivot) i++;
//        while (a[j] > pivot) j--;
//
//        if (i <= j)
//        {
//            swap(a[i], a[j]);
//            i++;
//            j--;
//        }
//    }
//
//    if (left < j)
//        QuickSort(a, left, j);
//
//    if (i < right)
//        QuickSort(a, i, right);
//}
//
//int main()
//{
//    int a[] = { 5, 2, 8, 1, 4, 9 };
//    int n = 6;
//
//    QuickSort(a, 0, n - 1);
//
//    for (int i = 0; i < n; i++)
//        cout << a[i] << " ";
//
//    return 0;
//}
//
//zadanie 4
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//    int a[] = { 7, -2, 5, 1, 8, 3, 9, 4, 6 };
//    int n = 9;
//
//    double sum = 0;
//
//    for (int i = 0; i < n; i++)
//        sum += a[i];
//
//    double avg = sum / n;
//
//    int part;
//
//    if (avg > 0)
//        part = 2 * n / 3;
//    else
//        part = n / 3;
//
//    sort(a, a + part);
//
//    reverse(a + part, a + n);
//
//    for (int i = 0; i < n; i++)
//        cout << a[i] << " ";
//
//    return 0;
//}
