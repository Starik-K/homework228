//зад1
//#include <iostream>
//
//using namespace std;
//
//struct Complex
//{
//    double re;
//    double im;
//};
//
//Complex add(Complex a, Complex b)
//{
//    Complex c;
//
//    c.re = a.re + b.re;
//    c.im = a.im + b.im;
//
//    return c;
//}
//
//Complex sub(Complex a, Complex b)
//{
//    Complex c;
//
//    c.re = a.re - b.re;
//    c.im = a.im - b.im;
//
//    return c;
//}
//
//Complex mul(Complex a, Complex b)
//{
//    Complex c;
//
//    c.re = a.re * b.re - a.im * b.im;
//    c.im = a.re * b.im + a.im * b.re;
//
//    return c;
//}
//
//Complex divi(Complex a, Complex b)
//{
//    Complex c;
//
//    double d = b.re * b.re + b.im * b.im;
//
//    c.re = (a.re * b.re + a.im * b.im) / d;
//    c.im = (a.im * b.re - a.re * b.im) / d;
//
//    return c;
//}
//
//void print(Complex a)
//{
//    cout << a.re;
//
//    if (a.im >= 0)
//        cout << " + " << a.im << "i";
//    else
//        cout << " - " << -a.im << "i";
//
//    cout << endl;
//}
//
//int main()
//{
//    Complex a, b;
//
//    cout << "Re1 Im1: ";
//    cin >> a.re >> a.im;
//
//    cout << "Re2 Im2: ";
//    cin >> b.re >> b.im;
//
//    cout << "Sum: ";
//    print(add(a, b));
//
//    cout << "Sub: ";
//    print(sub(a, b));
//
//    cout << "Mul: ";
//    print(mul(a, b));
//
//    cout << "Div: ";
//    print(divi(a, b));
//
//    return 0;
//}
//
//зад2
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//struct Car
//{
//    float length;
//    float clearance;
//    float engineVolume;
//    int power;
//    int wheelDiameter;
//    char color[20];
//    char gearbox[20];
//};
//
//void input(Car& a)
//{
//    cout << "Length: ";
//    cin >> a.length;
//
//    cout << "Clearance: ";
//    cin >> a.clearance;
//
//    cout << "Engine volume: ";
//    cin >> a.engineVolume;
//
//    cout << "Power: ";
//    cin >> a.power;
//
//    cout << "Wheel diameter: ";
//    cin >> a.wheelDiameter;
//
//    cout << "Color: ";
//    cin >> a.color;
//
//    cout << "Gearbox: ";
//    cin >> a.gearbox;
//}
//
//void print(Car a)
//{
//    cout << "\nLength: " << a.length << endl;
//    cout << "Clearance: " << a.clearance << endl;
//    cout << "Engine volume: " << a.engineVolume << endl;
//    cout << "Power: " << a.power << endl;
//    cout << "Wheel diameter: " << a.wheelDiameter << endl;
//    cout << "Color: " << a.color << endl;
//    cout << "Gearbox: " << a.gearbox << endl;
//}
//
//void findColor(Car a[], int size, char color[])
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (strcmp(a[i].color, color) == 0)
//            print(a[i]);
//    }
//}
//
//int main()
//{
//    Car a[3];
//
//    for (int i = 0; i < 3; i++)
//        input(a[i]);
//
//    char color[20];
//
//    cout << "\nSearch color: ";
//    cin >> color;
//
//    findColor(a, 3, color);
//
//    return 0;
//}
//зад3
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//struct Book
//{
//    char title[50];
//    char author[50];
//    char publisher[50];
//    char genre[30];
//};
//
//void print(Book a)
//{
//    cout << a.title << " | "
//        << a.author << " | "
//        << a.publisher << " | "
//        << a.genre << endl;
//}
//
//void printAll(Book a[], int size)
//{
//    for (int i = 0; i < size; i++)
//        print(a[i]);
//}
//
//void findAuthor(Book a[], int size, char author[])
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (strcmp(a[i].author, author) == 0)
//            print(a[i]);
//    }
//}
//
//void findTitle(Book a[], int size, char title[])
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (strcmp(a[i].title, title) == 0)
//            print(a[i]);
//    }
//}
//
//void sortTitle(Book a[], int size)
//{
//    Book t;
//
//    for (int i = 0; i < size - 1; i++)
//    {
//        for (int j = i + 1; j < size; j++)
//        {
//            if (strcmp(a[i].title, a[j].title) > 0)
//            {
//                t = a[i];
//                a[i] = a[j];
//                a[j] = t;
//            }
//        }
//    }
//}
//
//int main()
//{
//    Book a[3] =
//    {
//        {"Harry Potter","Rowling","Bloomsbury","Fantasy"},
//        {"It","King","Viking","Horror"},
//        {"Animal Farm","Orwell","Secker","Novel"}
//    };
//
//    sortTitle(a, 3);
//    printAll(a, 3);
//
//    return 0;
//}
//зад4
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//struct Machine
//{
//    char color[20];
//    char model[20];
//    char number[9];
//};
//
//void input(Machine& a)
//{
//    cout << "Color: ";
//    cin >> a.color;
//
//    cout << "Model: ";
//    cin >> a.model;
//
//    cout << "Number: ";
//    cin >> a.number;
//}
//
//void print(Machine a)
//{
//    cout << a.color << " "
//        << a.model << " "
//        << a.number << endl;
//}
//
//void printAll(Machine a[], int size)
//{
//    for (int i = 0; i < size; i++)
//        print(a[i]);
//}
//
//void edit(Machine& a)
//{
//    input(a);
//}
//
//void findNumber(Machine a[], int size, char number[])
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (strcmp(a[i].number, number) == 0)
//            print(a[i]);
//    }
//}
//
//int main()
//{
//    Machine a[10];
//
//    for (int i = 0; i < 10; i++)
//        input(a[i]);
//
//    char num[9];
//
//    cout << "\nSearch number: ";
//    cin >> num;
//
//    findNumber(a, 10, num);
//
//    return 0;
//}
//зад5
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//struct Living
//{
//    float speed;
//    char type[20];
//    char color[20];
//
//    union
//    {
//        float flySpeed;
//        bool hoofed;
//        int iq;
//    };
//};
//
//void input(Living& a)
//{
//    cout << "Type (bird, cattle, human): ";
//    cin >> a.type;
//
//    cout << "Color: ";
//    cin >> a.color;
//
//    cout << "Speed: ";
//    cin >> a.speed;
//
//    if (strcmp(a.type, "bird") == 0)
//    {
//        cout << "Fly speed: ";
//        cin >> a.flySpeed;
//    }
//    else if (strcmp(a.type, "cattle") == 0)
//    {
//        cout << "Hoofed (1/0): ";
//        cin >> a.hoofed;
//    }
//    else if (strcmp(a.type, "human") == 0)
//    {
//        cout << "IQ: ";
//        cin >> a.iq;
//    }
//}
//
//void print(Living a)
//{
//    cout << "\nType: " << a.type;
//    cout << "\nColor: " << a.color;
//    cout << "\nSpeed: " << a.speed;
//
//    if (strcmp(a.type, "bird") == 0)
//        cout << "\nFly speed: " << a.flySpeed;
//
//    else if (strcmp(a.type, "cattle") == 0)
//        cout << "\nHoofed: " << a.hoofed;
//
//    else if (strcmp(a.type, "human") == 0)
//        cout << "\nIQ: " << a.iq;
//
//    cout << endl;
//}
//
//int main()
//{
//    Living a[10];
//
//    for (int i = 0; i < 10; i++)
//        input(a[i]);
//
//    for (int i = 0; i < 10; i++)
//        print(a[i]);
//
//    return 0;
//}
//
//зад6
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//struct Student
//{
//    char surname[30];
//    char group[20];
//    int marks[5];
//};
//
//void print(Student a)
//{
//    cout << a.surname << " "
//        << a.group << endl;
//}
//
//int main()
//{
//    int n;
//
//    cout << "Number of students: ";
//    cin >> n;
//
//    Student* a = new Student[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << "Surname: ";
//        cin >> a[i].surname;
//
//        cout << "Group: ";
//        cin >> a[i].group;
//
//        for (int j = 0; j < 5; j++)
//            cin >> a[i].marks[j];
//    }
//
//    cout << "\nExcellent students:\n";
//
//    for (int i = 0; i < n; i++)
//    {
//        int count = 0;
//
//        for (int j = 0; j < 5; j++)
//        {
//            if (a[i].marks[j] >= 10)
//                count++;
//        }
//
//        if (count >= 4)
//            print(a[i]);
//    }
//
//    cout << "\nPoor students:\n";
//
//    for (int i = 0; i < n; i++)
//    {
//        int count = 0;
//
//        for (int j = 0; j < 5; j++)
//        {
//            if (a[i].marks[j] <= 3)
//                count++;
//        }
//
//        if (count >= 3)
//            print(a[i]);
//    }
//
//    delete[] a;
//
//    return 0;
//}
//
//зад7
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//struct Date
//{
//    int day;
//    int month;
//    int year;
//};
//
//struct Man
//{
//    char surname[30];
//    char name[30];
//    int age;
//    Date birth;
//};
//
//void print(Man a)
//{
//    cout << a.surname << " "
//        << a.name << " "
//        << a.age << " "
//        << a.birth.day << "."
//        << a.birth.month << "."
//        << a.birth.year << endl;
//}
//
//void sortSurname(Man a[], int n)
//{
//    Man t;
//
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = i + 1; j < n; j++)
//        {
//            if (strcmp(a[i].surname, a[j].surname) > 0)
//            {
//                t = a[i];
//                a[i] = a[j];
//                a[j] = t;
//            }
//        }
//    }
//}
//
//void findSurname(Man a[], int n, char s[])
//{
//    for (int i = 0; i < n; i++)
//    {
//        if (strcmp(a[i].surname, s) == 0)
//            print(a[i]);
//    }
//}
//
//int main()
//{
//    int n = 3;
//
//    Man a[3] =
//    {
//        {"Ivanov","Ivan",20,{10,5,2006}},
//        {"Petrov","Petro",18,{1,6,2008}},
//        {"Sidorov","Oleg",19,{15,6,2007}}
//    };
//
//    sortSurname(a, n);
//
//    for (int i = 0; i < n; i++)
//        print(a[i]);
//
//    char s[30];
//
//    cout << "\nSearch surname: ";
//    cin >> s;
//
//    findSurname(a, n, s);
//
//    return 0;
//}
