// н1
// #include <iostream>
// #include <cmath>

// using namespace std;

// struct Point
// {
//     double x;
//     double y;
// };

// double distance(Point a, Point b)
// {
//     return sqrt((b.x - a.x) * (b.x - a.x) +
//         (b.y - a.y) * (b.y - a.y));
// }

// int main()
// {
//     Point a, b;

//     cout << "Point A: ";
//     cin >> a.x >> a.y;

//     cout << "Point B: ";
//     cin >> b.x >> b.y;

//     cout << "Distance = "
//         << distance(a, b);

//     return 0;
// }
// н2
// #include <iostream>

// using namespace std;

// struct Fraction
// {
//     int num;
//     int den;
// };

// int gcd(int a, int b)
// {
//     while (b != 0)
//     {
//         int t = b;
//         b = a % b;
//         a = t;
//     }

//     return a;
// }

// void reduce(Fraction& a)
// {
//     int g = gcd(a.num, a.den);

//     a.num /= g;
//     a.den /= g;
// }

// Fraction add(Fraction a, Fraction b)
// {
//     Fraction c;

//     c.num = a.num * b.den + b.num * a.den;
//     c.den = a.den * b.den;

//     reduce(c);

//     return c;
// }

// Fraction sub(Fraction a, Fraction b)
// {
//     Fraction c;

//     c.num = a.num * b.den - b.num * a.den;
//     c.den = a.den * b.den;

//     reduce(c);

//     return c;
// }

// Fraction mul(Fraction a, Fraction b)
// {
//     Fraction c;

//     c.num = a.num * b.num;
//     c.den = a.den * b.den;

//     reduce(c);

//     return c;
// }

// Fraction divi(Fraction a, Fraction b)
// {
//     Fraction c;

//     c.num = a.num * b.den;
//     c.den = a.den * b.num;

//     reduce(c);

//     return c;
// }

// void print(Fraction a)
// {
//     if (a.num > a.den)
//     {
//         cout << a.num / a.den
//             << " (" << a.num % a.den
//             << "/" << a.den << ")";
//     }
//     else
//     {
//         cout << a.num << "/" << a.den;
//     }
// }

// int main()
// {
//     Fraction a, b;

//     cout << "Fraction 1: ";
//     cin >> a.num >> a.den;

//     cout << "Fraction 2: ";
//     cin >> b.num >> b.den;

//     cout << "Sum: ";
//     print(add(a, b));

//     cout << "\nSub: ";
//     print(sub(a, b));

//     cout << "\nMul: ";
//     print(mul(a, b));

//     cout << "\nDiv: ";
//     print(divi(a, b));

//     return 0;
// }
// н3
// #include <iostream>

// using namespace std;

// struct WashingMachine
// {
//     char brand[30];
//     char color[20];

//     float width;
//     float length;
//     float height;

//     int power;
//     int spinSpeed;
//     int temperature;
// };

// void input(WashingMachine& a)
// {
//     cout << "Brand: ";
//     cin >> a.brand;

//     cout << "Color: ";
//     cin >> a.color;

//     cout << "Width: ";
//     cin >> a.width;

//     cout << "Length: ";
//     cin >> a.length;

//     cout << "Height: ";
//     cin >> a.height;

//     cout << "Power: ";
//     cin >> a.power;

//     cout << "Spin speed: ";
//     cin >> a.spinSpeed;

//     cout << "Temperature: ";
//     cin >> a.temperature;
// }

// void print(WashingMachine a)
// {
//     cout << "\nBrand: " << a.brand << endl;
//     cout << "Color: " << a.color << endl;
//     cout << "Width: " << a.width << endl;
//     cout << "Length: " << a.length << endl;
//     cout << "Height: " << a.height << endl;
//     cout << "Power: " << a.power << endl;
//     cout << "Spin speed: " << a.spinSpeed << endl;
//     cout << "Temperature: " << a.temperature << endl;
// }

// int main()
// {
//     WashingMachine a;

//     input(a);

//     print(a);

//     return 0;
// }
// н4
// #include <iostream>
// #include <cstring>

// using namespace std;

// struct Animal
// {
//     char name[30];
//     char type[30];
//     char nickname[30];
// };

// void input(Animal& a)
// {
//     cout << "Name: ";
//     cin >> a.name;

//     cout << "Type: ";
//     cin >> a.type;

//     cout << "Nickname: ";
//     cin >> a.nickname;
// }

// void print(Animal a)
// {
//     cout << "\nName: " << a.name << endl;
//     cout << "Type: " << a.type << endl;
//     cout << "Nickname: " << a.nickname << endl;
// }

// void voice(Animal a)
// {
//     if (strcmp(a.type, "dog") == 0)
//         cout << "Woof!" << endl;

//     else if (strcmp(a.type, "cat") == 0)
//         cout << "Meow!" << endl;

//     else if (strcmp(a.type, "cow") == 0)
//         cout << "Moo!" << endl;

//     else
//         cout << "Unknown sound" << endl;
// }

// int main()
// {
//     Animal a;

//     input(a);

//     print(a);

//     voice(a);

//     return 0;
// }
// н5
// #include <iostream>

// using namespace std;

// union Number
// {
//     int signedNum;
//     unsigned int unsignedNum;
// };

// int main()
// {
//     Number a;

//     a.signedNum = -10;

//     cout << "Signed: "
//         << a.signedNum << endl;

//     cout << "Unsigned: "
//         << a.unsignedNum << endl;

//     a.unsignedNum = 100;

//     cout << "\nSigned: "
//         << a.signedNum << endl;

//     cout << "Unsigned: "
//         << a.unsignedNum << endl;

//     return 0;
// }
// н6
// #include <iostream>

// using namespace std;

// struct Marks
// {
//     unsigned m1 : 1;
//     unsigned m2 : 1;
//     unsigned m3 : 1;
//     unsigned m4 : 1;
//     unsigned m5 : 1;
//     unsigned m6 : 1;
//     unsigned m7 : 1;
//     unsigned m8 : 1;
//     unsigned m9 : 1;
//     unsigned m10 : 1;
// };

// struct Student
// {
//     char name[50];
//     Marks marks;
// };

// void input(Student& a)
// {
//     cout << "Name: ";
//     cin >> a.name;

//     cout << "10 marks (0/1):" << endl;

//     cin >> a.marks.m1;
//     cin >> a.marks.m2;
//     cin >> a.marks.m3;
//     cin >> a.marks.m4;
//     cin >> a.marks.m5;
//     cin >> a.marks.m6;
//     cin >> a.marks.m7;
//     cin >> a.marks.m8;
//     cin >> a.marks.m9;
//     cin >> a.marks.m10;
// }

// void print(Student a)
// {
//     cout << "\n" << a.name << endl;

//     cout << a.marks.m1 << " ";
//     cout << a.marks.m2 << " ";
//     cout << a.marks.m3 << " ";
//     cout << a.marks.m4 << " ";
//     cout << a.marks.m5 << " ";
//     cout << a.marks.m6 << " ";
//     cout << a.marks.m7 << " ";
//     cout << a.marks.m8 << " ";
//     cout << a.marks.m9 << " ";
//     cout << a.marks.m10 << endl;
// }

// double average(Student a)
// {
//     int sum = 0;

//     sum += a.marks.m1;
//     sum += a.marks.m2;
//     sum += a.marks.m3;
//     sum += a.marks.m4;
//     sum += a.marks.m5;
//     sum += a.marks.m6;
//     sum += a.marks.m7;
//     sum += a.marks.m8;
//     sum += a.marks.m9;
//     sum += a.marks.m10;

//     return sum / 10.0;
// }

// int main()
// {
//     Student a;

//     input(a);

//     print(a);

//     cout << "Average: "
//         << average(a);

//     return 0;
// }
