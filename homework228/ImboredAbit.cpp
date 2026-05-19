////N1
//#include <iostream>
//using namespace std;
//
//int main() {
//    string names[3] = { "Ivan", "Oleg", "Anna" };
//
//    int mobil[3] = { 333, 111, 222 };
//    int home[3] = { 555, 444, 666 };
//
//    int choice;
//    cin >> choice;
//
//    if (choice == 1) {
//        for (int i = 0; i < 3; i++) {
//            for (int j = 0; j < 2; j++) {
//                if (mobil[j] > mobil[j + 1]) {
//
//                    swap(mobil[j], mobil[j + 1]);
//                    swap(home[j], home[j + 1]);
//                    swap(names[j], names[j + 1]);
//                }
//            }
//        }
//    }
//
//    if (choice == 2) {
//        for (int i = 0; i < 3; i++) {
//            for (int j = 0; j < 2; j++) {
//                if (home[j] > home[j + 1]) {
//
//                    swap(home[j], home[j + 1]);
//                    swap(mobil[j], mobil[j + 1]);
//                    swap(names[j], names[j + 1]);
//                }
//            }
//        }
//    }
//
//    if (choice == 3 || choice == 1 || choice == 2) {
//        for (int i = 0; i < 3; i++) {
//            cout << names[i] << " ";
//            cout << mobil[i] << " ";
//            cout << home[i] << endl;
//        }
//    }
//
//    return 0;
//}
////N22
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a[5] = { 5, 2, 8, 1, 3 };
//
//    for (int i = 0; i < 5; i++) {
//
//        int amongus = 0;
//
//        for (int j = 0; j < 4 - i; j++) {
//
//            if (a[j] > a[j + 1]) {
//                swap(a[j], a[j + 1]);
//                amongus++;
//            }
//        }
//
//        if (amongus == 0)
//            break;
//    }
//
//    for (int i = 0; i < 5; i++) {
//        cout << a[i] << " ";
//    }
//
//    return 0;
//}
//
////N33
//#include <iostream>
//using namespace std;
//
//void flip(int a[], int k) {
//
//    int l = 0;
//
//    while (l < k) {
//        swap(a[l], a[k]);
//        l++;
//        k--;
//    }
//}
//
//int main() {
//
//    int a[5] = { 3, 1, 5, 2, 4 };
//
//    int n = 5;
//
//    for (int i = n - 1; i > 0; i--) {
//
//        int maxi = 0;
//
//        for (int j = 1; j <= i; j++) {
//            if (a[j] > a[maxi]) {
//                maxi = j;
//            }
//        }
//
//        flip(a, maxi);
//        flip(a, i);
//    }
//
//    for (int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//
//    return 0;
//}