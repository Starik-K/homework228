//#include <iostream>
//using namespace std;
//
//// Завдання 1
//void task1() {
//    int n;
//    cout << "Введіть число: ";
//    cin >> n;
//
//    for (int i = 0; i <= n; i++) {
//        cout << i << " ";
//    }
//    cout << endl;
//}
//
//// Завдання 2
//void task2() {
//    int a, b;
//
//    cout << "Введіть дві межі діапазону: ";
//    cin >> a >> b;
//
//    if (a > b) {
//        swap(a, b);
//    }
//
//    cout << "\nУсі числа діапазону:\n";
//    for (int i = a; i <= b; i++) {
//        cout << i << " ";
//    }
//
//    cout << "\n\nПарні числа:\n";
//    for (int i = a; i <= b; i++) {
//        if (i % 2 == 0)
//            cout << i << " ";
//    }
//
//    cout << "\n\nНепарні числа:\n";
//    for (int i = a; i <= b; i++) {
//        if (i % 2 != 0)
//            cout << i << " ";
//    }
//
//    cout << "\n\nЧисла, кратні 7:\n";
//    for (int i = a; i <= b; i++) {
//        if (i % 7 == 0)
//            cout << i << " ";
//    }
//
//    cout << endl;
//}
//
//// Завдання 3
//void task3() {
//    int a, b;
//    int sum = 0;
//
//    cout << "Введіть дві межі діапазону: ";
//    cin >> a >> b;
//
//    if (a > b) {
//        swap(a, b);
//    }
//
//    for (int i = a; i <= b; i++) {
//        sum += i;
//    }
//
//    cout << "Сума чисел діапазону = " << sum << endl;
//}
//
//// Завдання 4
//void task4() {
//    int num;
//    int sum = 0;
//
//    cout << "Вводьте числа (0 для завершення):\n";
//
//    do {
//        cin >> num;
//        sum += num;
//    } while (num != 0);
//
//    cout << "Сума чисел = " << sum << endl;
//}
//
//// Завдання 5
//void task5() {
//    srand(time(0));
//
//    int secret = rand() % 500 + 1;
//    int guess;
//    int attempts = 0;
//
//    cout << "Гра 'Вгадай число'!\n";
//    cout << "Загадано число від 1 до 500\n";
//    cout << "Введіть 0 для виходу\n";
//
//    while (true) {
//        cout << "Ваш варіант: ";
//        cin >> guess;
//
//        if (guess == 0) {
//            cout << "Гру завершено.\n";
//            break;
//        }
//
//        attempts++;
//
//        if (guess > secret) {
//            cout << "Загадане число менше\n";
//        }
//        else if (guess < secret) {
//            cout << "Загадане число більше\n";
//        }
//        else {
//            cout << "Вітаємо! Ви вгадали число\n";
//            cout << "Кількість спроб =  " << attempts << endl;
//            break;
//        }
//    }
//}
//
//int main() {
//    int choice;
//
//    do {
//        cout << "\n МЕНЮ n";
//        cout << "1 = Завдання 1\n";
//        cout << "2 = Завдання 2\n";
//        cout << "3 = Завдання 3\n";
//        cout << "4 = Завдання 4\n";
//        cout << "5 = Завдання 5\n";
//        cout << "0 = Вихід\n";
//        cout << "Ваш вибір: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            task1();
//            break;
//        case 2:
//            task2();
//            break;
//        case 3:
//            task3();
//            break;
//        case 4:
//            task4();
//            break;
//        case 5:
//            task5();
//            break;
//        case 0:
//            cout << "Програму завершено\n";
//            break;
//        default:
//            cout << "Невірний вибір\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}