//#include <iostream>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "ukr");
//
//    // Завдання 1
//
//    int num, maxNum;
//
//    cout << "Завдання 1\n";
//    cout << "Введіть 7 цілих чисел:\n";
//
//    cin >> maxNum;
//
//    for (int i = 1; i < 7; i++) {
//        cin >> num;
//
//        if (num > maxNum) {
//            maxNum = num;
//        }
//    }
//
//    cout << "Максимальне число: " << maxNum << "\n\n";
//
//
//    // Завдання 2
//
//    double AB, BC, weight;
//    double fuelPerKm;
//
//    cout << "Завдання 2\n";
//
//    cout << "Введіть відстань A-B: ";
//    cin >> AB;
//
//    cout << "Введіть відстань B-C: ";
//    cin >> BC;
//
//    cout << "Введіть вагу вантажу: ";
//    cin >> weight;
//
//    if (weight <= 500)
//        fuelPerKm = 1;
//    else if (weight <= 1000)
//        fuelPerKm = 4;
//    else if (weight <= 1500)
//        fuelPerKm = 7;
//    else if (weight <= 2000)
//        fuelPerKm = 9;
//    else {
//        cout << "Літак не може підняти такий вантаж.\n\n";
//        return 0;
//    }
//
//    double fuelAB = AB * fuelPerKm;
//    double fuelBC = BC * fuelPerKm;
//
//    if (fuelAB > 300 || fuelBC > 300) {
//        cout << "Політ за заданим маршрутом неможливий.\n\n";
//    }
//    else {
//        double fuelLeft = 300 - fuelAB;
//        double refuel = 0;
//
//        if (fuelLeft < fuelBC) {
//            refuel = fuelBC - fuelLeft;
//        }
//
//        cout << "Мінімальна дозаправка у пункті B: "
//            << refuel << " л\n\n";
//    }
//
//
//    // Завдання 3
//
//    double sales1, sales2, sales3;
//    double salary1, salary2, salary3;
//
//    cout << "Завдання 3\n";
//
//    cout << "Введіть продажі 1 менеджера: ";
//    cin >> sales1;
//
//    cout << "Введіть продажі 2 менеджера: ";
//    cin >> sales2;
//
//    cout << "Введіть продажі 3 менеджера: ";
//    cin >> sales3;
//
//    auto calculateSalary = [](double sales) {
//        double percent;
//
//        if (sales < 500)
//            percent = 0.03;
//        else if (sales <= 1000)
//            percent = 0.05;
//        else
//            percent = 0.08;
//
//        return 200 + sales * percent;
//        };
//
//    salary1 = calculateSalary(sales1);
//    salary2 = calculateSalary(sales2);
//    salary3 = calculateSalary(sales3);
//
//    int bestManager = 1;
//    double bestSalary = salary1;
//
//    if (salary2 > bestSalary) {
//        bestSalary = salary2;
//        bestManager = 2;
//    }
//
//    if (salary3 > bestSalary) {
//        bestSalary = salary3;
//        bestManager = 3;
//    }
//
//    bestSalary += 200;
//
//    cout << "Зарплата 1 менеджера: " << salary1 << "$\n";
//    cout << "Зарплата 2 менеджера: " << salary2 << "$\n";
//    cout << "Зарплата 3 менеджера: " << salary3 << "$\n";
//
//    cout << "Найкращий менеджер: " << bestManager << "\n";
//    cout << "Його зарплата з премією: " << bestSalary << "$\n\n";
//
//
//    // Завдання 4
//
//    int choice;
//    cout << "1 порахувати рядки коду\n";
//    cout << "2 кількість запізнень\n";
//    cout << "3 порахувати зарплату\n";
//    cout << "Ваш вибір: ";
//    cin >> choice;
//
//    switch (choice) {
//
//    case 1: {
//        double dsm;
//        int late;
//
//        cout << "Бажаний дохід: ";
//        cin >> dsm;
//
//        cout << "Кількість запізнень: ";
//        cin >> late;
//
//        double fines = (late / 3) * 20;
//        double needmoney = dsm + fines;
//
//        int lines = (needmoney / 50) * 100;
//
//        cout << "Потрібно написати "
//            << lines << " рядків коду.\n";
//
//        break;
//    }
//
//    case 2: {
//        int lines;
//        double dsds;
//
//        cout << "Кількість рядків коду: ";
//        cin >> lines;
//
//        cout << "Бажана зарплата: ";
//        cin >> dsds;
//
//        double s = (lines / 100.0) * 50;
//
//        if (salary < dsds) {
//            cout << "Отримати таку зарплату неможливо.\n";
//        }
//        else {
//            double extramoni = s - dsds;
//            int late = (extramoni / 20) * 3;
//
//            cout << "Вася може запізнитися "
//                << late << " разів.\n";
//        }
//
//        break;
//    }
//
//    case 3: {
//        int lines, late;
//
//        cout << "Кількість рядків коду: ";
//        cin >> lines;
//
//        cout << "Кількість запізнень: ";
//        cin >> late;
//
//        double salary = (lines / 100.0) * 50;
//        double fines = (late / 3) * 20;
//
//        double finalSalary = salary - fines;
//
//        if (finalSalary <= 0) {
//            cout << "Леву нічого не заплатять.\n";
//        }
//        else {
//            cout << "Леву заплатять "
//                << finalSalary << "$\n";
//        }
//
//        break;
//    }
//
//    default:
//        cout << "Невірний вибір.\n";
//    }
//
//    return 0;
//}