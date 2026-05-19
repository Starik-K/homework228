//zadanie 1
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int n = 10;
    int a[n];

    srand(time(0));

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }

    int mn = a[0];
    int mx = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < mn)
            mn = a[i];

        if (a[i] > mx)
            mx = a[i];
    }

    cout << endl;
    cout << "Min = " << mn << endl;
    cout << "Max = " << mx;

    return 0;
}

//zadanie 2
#include <iostream>
using namespace std;

int main() {
    int p[12];

    for (int i = 0; i < 12; i++) {
        cin >> p[i];
    }

    int a, b;
    cin >> a >> b;

    int mx = p[a - 1];
    int mn = p[a - 1];

    int mxm = a;
    int mnm = a;

    for (int i = a - 1; i < b; i++) {
        if (p[i] > mx) {
            mx = p[i];
            mxm = i + 1;
        }

        if (p[i] < mn) {
            mn = p[i];
            mnm = i + 1;
        }
    }

    cout << "Max(скачай) - " << mxm << endl;
    cout << "Min - " << mnm;

    return 0;
}

//zadanie 3
#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    double a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double sumaVid = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0)
            sumaVid += a[i];
    }

    int minI = 0;
    int maxI = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] < a[minI])
            minI = i;

        if (a[i] > a[maxI])
            maxI = i;
    }

    int l, r;

    if (minI < maxI) {
        l = minI;
        r = maxI;
    }
    else {
        l = maxI;
        r = minI;
    }

    double dob = 1;

    for (int i = l + 1; i < r; i++) {
        dob *= a[i];
    }

    double dobParni = 1;

    for (int i = 0; i < n; i += 2) {
        dobParni *= a[i];
    }

    int firstNeg = -1;
    int lastNeg = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            firstNeg = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] < 0) {
            lastNeg = i;
            break;
        }
    }

    double sumaMizh = 0;

    if (firstNeg != -1 && lastNeg != -1) {
        for (int i = firstNeg + 1; i < lastNeg; i++) {
            sumaMizh += a[i];
        }
    }

    cout << "сума від'ємних = " << sumaVid << endl;
    cout << "добуток між min i max = " << dob << endl;
    cout << "добуток парних індексів = " << dobParni << endl;
    cout << "сума між від'ємними = " << sumaMizh;

    return 0;
}

//zadanie 4
#include <iostream>
using namespace std;

int main() {
    int a[10];
    int b[5];
    int c[5];

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++) {
        b[i] = a[i];
    }

    for (int i = 0; i < 5; i++) {
        c[i] = a[i + 5];
    }

    cout << "масив B - ";

    for (int i = 0; i < 5; i++) {
        cout << b[i] << " ";
    }

    cout << endl;

    cout << "масив C - ";

    for (int i = 0; i < 5; i++) {
        cout << c[i] << " ";
    }

    return 0;
}

//zadanie 5

#include <iostream>
using namespace std;

int main() {
    const int n = 5;

    int a[n], b[n], c[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }

    cout << "Результат: ";

    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }

    return 0;
}