//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//
//    //Завдання1
//
//    int a[3][4] = {
//        {3, 5, 6, 7},
//        {12, 1, 1, 1},
//        {0, 7, 12, 1}
//    };
//
//    int s = 0;
//    int min = a[0][0];
//    int max = a[0][0];
//
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 4; j++) {
//
//            s = s + a[i][j];
//
//            if (a[i][j] < min)
//                min = a[i][j];
//
//            if (a[i][j] > max)
//                max = a[i][j];
//        }
//    }
//
//    cout << "Сума = " << s << endl;
//    cout << "Середнє = " << s / 12.0 << endl;
//    cout << "Мінімум = " << min << endl;
//    cout << "Максимум = " << max << endl;
//
//
//    //Завдання2
//
//    cout << "\nМасив:\n";
//
//    int all = 0;
//
//    for (int i = 0; i < 3; i++) {
//
//        int r = 0;
//
//        for (int j = 0; j < 4; j++) {
//
//            cout << a[i][j] << "\t";
//
//            r = r + a[i][j];
//        }
//
//        all = all + r;
//
//        cout << "| " << r << endl;
//    }
//
//    cout << "----------------------\n";
//
//    for (int j = 0; j < 4; j++) {
//
//        int c = 0;
//
//        for (int i = 0; i < 3; i++) {
//
//            c = c + a[i][j];
//        }
//
//        cout << c << "\t";
//    }
//
//    cout << "| " << all << endl;
//
//
//    //Завдання3
//
//    srand(time(0));
//
//    int b[5][10];
//    int c[5][5];
//
//    cout << "\nПерший масив:\n";
//
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 10; j++) {
//
//            b[i][j] = rand() % 51;
//
//            cout << b[i][j] << "\t";
//        }
//
//        cout << endl;
//    }
//
//    cout << "\nДругий масив:\n";
//
//    for (int i = 0; i < 5; i++) {
//
//        int k = 0;
//
//        for (int j = 0; j < 5; j++) {
//
//            c[i][j] = b[i][k] + b[i][k + 1];
//
//            cout << c[i][j] << "\t";
//
//            k = k + 2;
//        }
//
//        cout << endl;
//    }
//
//    return 0;
//}