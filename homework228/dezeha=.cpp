////zadok 1
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a[12];
//    int sum = 0;
//
//    for (int i = 0; i < 12; i++) {
//        cin >> a[i];
//        sum += a[i];
//    }
//
//    int max = a[0];
//    int min = a[0];
//
//    int maxMonth = 1;
//    int minMonth = 1;
//
//    for (int i = 1; i < 12; i++) {
//        if (a[i] > max) {
//            max = a[i];
//            maxMonth = i + 1;
//        }
//
//        if (a[i] < min) {
//            min = a[i];
//            minMonth = i + 1;
//        }
//    }
//
//    double avg = sum / 12.0;
//
//    cout << "Загальний прибуток - " << sum << endl;
//    cout << "Максимальний місяць - " << maxMonth << endl;
//    cout << "Мінімальний місяць - " << minMonth << endl;
//    cout << "Середній прибуток - " << avg;
//
//    return 0;
//}
//
////zadok 2
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a[10];
//
//    for (int i = 0; i < 10; i++) {
//        cin >> a[i];
//    }
//
//    for (int i = 9; i >= 0; i--) {
//        cout << a[i] << " ";
//    }
//
//    return 0;
//}
////zzadok 3
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a[5];
//    int p = 0;
//
//    for (int i = 0; i < 5; i++) {
//        cin >> a[i];
//        p += a[i];
//    }
//
//    cout << "Периметр: " << p;
//
//    return 0;
//}
//
////zadok 4
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a[9] = { 0, -11, 0, 12, 54, 0, 0, -40, 11 };
//    int b[9];
//
//    int k = 0;
//
//    for (int i = 0; i < 9; i++) {
//        if (a[i] != 0) {
//            b[k] = a[i];
//            k++;
//        }
//    }
//
//    while (k < 9) {
//        b[k] = -1;
//        k++;
//    }
//
//    for (int i = 0; i < 9; i++) {
//        cout << b[i] << " ";
//    }
//
//    return 0;
//}
//
////zadok 5
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a[5] = { 10, 0, 52, -10, -44 };
//    int b[5] = { 54, 0, -100, 12, 4 };
//
//    int c[10];
//    int amongus = 0;
//
//    for (int i = 0; i < 5; i++) {
//        if (a[i] > 0) {
//            c[amongus] = a[i];
//            amongus++;
//        }
//    }
//
//    for (int i = 0; i < 5; i++) {
//        if (b[i] > 0) {
//            c[amongus] = b[i];
//            amongus++;
//        }
//    }
//
//    for (int i = 0; i < 5; i++) {
//        if (a[i] == 0) {
//            c[amongus] = a[i];
//            amongus++;
//        }
//    }
//
//    for (int i = 0; i < 5; i++) {
//        if (b[i] == 0) {
//            c[amongus] = b[i];
//            amongus++;
//        }
//    }
//
//    for (int i = 0; i < 5; i++) {
//        if (a[i] < 0) {
//            c[amongus] = a[i];
//            amongus++;
//        }
//    }
//
//    for (int i = 0; i < 5; i++) {
//        if (b[i] < 0) {
//            c[amongus] = b[i];
//            amongus++;
//        }
//    }
//
//    for (int i = 0; i < 10; i++) {
//        cout << c[i] << " ";
//    }
//
//    return 0;
//}