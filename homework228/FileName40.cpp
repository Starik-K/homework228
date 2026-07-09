//зд1
//#include <iostream>
//#include <fstream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//    ifstream file1("file1.txt");
//    ifstream file2("file2.txt");
//
//    char line1[256];
//    char line2[256];
//
//    int number = 1;
//    bool same = true;
//
//    while (file1.getline(line1, 256) && file2.getline(line2, 256))
//    {
//        if (strcmp(line1, line2) != 0)
//        {
//            cout << "Rядок " << number << " не збігається:\n";
//            cout << "Файл 1: " << line1 << endl;
//            cout << "Файл 2: " << line2 << endl;
//            same = false;
//        }
//        number++;
//    }
//
//    while (file1.getline(line1, 256))
//    {
//        cout << "Зайвий рядок у першому файлі: " << line1 << endl;
//        same = false;
//    }
//
//    while (file2.getline(line2, 256))
//    {
//        cout << "Зайвий рядок у другому файлі: " << line2 << endl;
//        same = false;
//    }
//
//    if (same)
//        cout << "Файли однакові." << endl;
//
//    file1.close();
//    file2.close();
//
//    return 0;
//}
//
//зд2
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//bool vowel(char c)
//{
//    char letters[] = "AEIOUYaeiouy";
//    for (int i = 0; letters[i] != '\0'; i++)
//        if (c == letters[i])
//            return true;
//    return false;
//}
//
//int main()
//{
//    ifstream in("text.txt");
//    ofstream out("result.txt");
//
//    char ch;
//
//    int symbols = 0;
//    int lines = 1;
//    int vowels = 0;
//    int consonants = 0;
//    int digits = 0;
//
//    while (in.get(ch))
//    {
//        symbols++;
//
//        if (ch == '\n')
//            lines++;
//
//        if (ch >= '0' && ch <= '9')
//            digits++;
//
//        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//        {
//            if (vowel(ch))
//                vowels++;
//            else
//                consonants++;
//        }
//    }
//
//    out << "Кількість символів: " << symbols << endl;
//    out << "Кількість рядків: " << lines << endl;
//    out << "Кількість голосних: " << vowels << endl;
//    out << "Кількість приголосних: " << consonants << endl;
//    out << "Кількість цифр: " << digits << endl;
//
//    in.close();
//    out.close();
//
//    return 0;
//}
//
//зд3
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//char encrypt(char c, int key)
//{
//    if (c >= 'A' && c <= 'Z')
//        return (c - 'A' + key) % 26 + 'A';
//
//    if (c >= 'a' && c <= 'z')
//        return (c - 'a' + key) % 26 + 'a';
//
//    return c;
//}
//
//int main()
//{
//    ifstream in("text.txt");
//    ofstream out("cipher.txt");
//
//    int key;
//    cout << "Введіть ключ: ";
//    cin >> key;
//
//    char ch;
//
//    while (in.get(ch))
//    {
//        out << encrypt(ch, key);
//    }
//
//    in.close();
//    out.close();
//
//    cout << "Готово." << endl;
//
//    return 0;
//}
