//задание 1
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, s = 0;
//
//    cin >> a;
//
//    for (int i = a; i <= 500; i++) {
//        s += i;
//    }
//
//    cout << s;
//
//    return 0;
//}
//
//задание 2
//#include <iostream>
//using namespace std;
//
//int main() {
//    int x, y;
//    long long r = 1;
//
//    cin >> x >> y;
//
//    for (int i = 0; i < y; i++) {
//        r *= x;
//    }
//
//    cout << r;
//
//    return 0;
//}
//
//задание 3
//#include <iostream>
//using namespace std;
//
//int main() {
//    int s = 0;
//
//    for (int i = 1; i <= 1000; i++) {
//        s += i;
//    }
//
//    double avg = (double)s / 1000;
//
//    cout << avg;
//
//    return 0;
//}
//
//задание 4
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a;
//    long long p = 1;
//
//    cin >> a;
//
//    for (int i = a; i <= 20; i++) {
//        p *= i;
//    }
//
//    cout << p;
//
//    return 0;
//}
//
//задание 5
//#include <iostream>
//using namespace std;
//
//int main() {
//    int k;
//
//    cin >> k;
//
//    for (int i = 1; i <= 10; i++) {
//        cout << k << " * " << i << " = " << k * i << endl;
//    }
//
//    return 0;
//}
//
//задание 6
//#include <iostream>
//using namespace std;
//
//int main() {
//    int A;
//
//    cin >> A;
//
//    for (int B = 1; B <= A; B++) {
//        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
//            cout << B << " ";
//        }
//    }
//
//    return 0;
//}
//задание 7
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        if (n % i == 0) {
//            cout << i << " ";
//        }
//    }
//
//    return 0;
//}
//
//задание 8
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, b;
//
//    cin >> a >> b;
//
//    int m;
//
//    if (a < b)
//        m = a;
//    else
//        m = b;
//
//    for (int i = 1; i <= m; i++) {
//        if (a % i == 0 && b % i == 0) {
//            cout << i << " ";
//        }
//    }
//
//    return 0;
//}
