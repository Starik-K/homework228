//zad 1
#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    int neg;

    cin >> neg;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = neg;
            neg = neg * 2;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//zad 2
#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    int nig;

    cin >> nig;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = nig;
            nig++;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//zad 3 oboje pomogi
#include <iostream>
using namespace std;

int main() {
    int a[2][6] = {
        {1, 2, 0, 4, 5, 3},
        {4, 5, 3, 9, 0, 1}
    };

    int pipka;
    cin >> pipka;

    for (int t = 0; t < pipka; t++) {

        for (int i = 0; i < 2; i++) {

            int temp = a[i][5];

            for (int j = 5; j > 0; j--) {
                a[i][j] = a[i][j - 1];
            }

            a[i][0] = temp;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

