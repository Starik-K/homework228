//зд1
//#include <iostream>
//
//using namespace std;
//
//void replaceSpaces(char str[])
//{
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if (str[i] == ' ')
//            str[i] = '\t';
//    }
//}
//
//int main()
//{
//    char str[256];
//
//    cout << "Введіть рядок: ";
//    cin.getline(str, 256);
//
//    replaceSpaces(str);
//
//    cout << "Результат:\n" << str;
//
//    return 0;
//}
//
//зд2
//#include <iostream>
//#include <cctype>
//
//using namespace std;
//
//int main()
//{
//    char str[256];
//
//    cout << "Введіть рядок: ";
//    cin.getline(str, 256);
//
//    int letters = 0;
//    int digits = 0;
//    int others = 0;
//
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if (isalpha(str[i]))
//            letters++;
//        else if (isdigit(str[i]))
//            digits++;
//        else
//            others++;
//    }
//
//    cout << "Літер: " << letters << endl;
//    cout << "Цифр: " << digits << endl;
//    cout << "Інших символів: " << others << endl;
//
//    return 0;
//}
//
//зд3
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    char str[256];
//
//    cout << "Введіть речення: ";
//    cin.getline(str, 256);
//
//    int count = 0;
//    bool word = false;
//
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if (str[i] != ' ' && str[i] != '\t')
//        {
//            if (!word)
//            {
//                count++;
//                word = true;
//            }
//        }
//        else
//        {
//            word = false;
//        }
//    }
//
//    cout << "Кількість слів: " << count;
//
//    return 0;
//}
//
//зд4
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//    char str[256];
//
//    cout << "Введіть рядок: ";
//    cin.getline(str, 256);
//
//    int left = 0;
//    int right = strlen(str) - 1;
//
//    bool palindrome = true;
//
//    while (left < right)
//    {
//        if (str[left] != str[right])
//        {
//            palindrome = false;
//            break;
//        }
//
//        left++;
//        right--;
//    }
//
//    if (palindrome)
//        cout << "Рядок є паліндромом";
//    else
//        cout << "Рядок не є паліндромом";
//
//    return 0;
//}

//задание 5
//#include <iostream>
//
//using namespace std;
//
//int mystrlen(const char* str)
//{
//    int len = 0;
//
//    while (str[len] != '\0')
//        len++;
//
//    return len;
//}
//char* mystrcpy(char* str1, const char* str2)
//{
//    int i = 0;
//
//    while (str2[i] != '\0')
//    {
//        str1[i] = str2[i];
//        i++;
//    }
//
//    str1[i] = '\0';
//
//    return str1;
//}
//
//char* mystrcat(char* str1, const char* str2)
//{
//    int i = 0;
//
//    while (str1[i] != '\0')
//        i++;
//
//    int j = 0;
//
//    while (str2[j] != '\0')
//    {
//        str1[i] = str2[j];
//        i++;
//        j++;
//    }
//
//    str1[i] = '\0';
//
//    return str1;
//}
//
//char* mystrchr(char* str, char s)
//{
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if (str[i] == s)
//            return &str[i];
//    }
//
//    return 0;
//}
//
//char* mystrstr(char* str1, char* str2)
//{
//    if (str2[0] == '\0')
//        return str1;
//
//    for (int i = 0; str1[i] != '\0'; i++)
//    {
//        int j = 0;
//
//        while (str1[i + j] != '\0' &&
//            str2[j] != '\0' &&
//            str1[i + j] == str2[j])
//        {
//            j++;
//        }
//
//        if (str2[j] == '\0')
//            return &str1[i];
//    }
//
//    return 0;
//}
//
//int main()
//{
//    char str1[100] = "Hello";
//    char str2[100] = " World";
//
//    cout << "mystrlen(str1) = "
//        << mystrlen(str1) << endl;
//
//    char copy[100];
//    mystrcpy(copy, str1);
//    cout << "mystrcpy: "
//        << copy << endl;
//
//    mystrcat(str1, str2);
//    cout << "mystrcat: "
//        << str1 << endl;
//
//    char symbol;
//    cout << "\nВведіть символ для пошуку: ";
//    cin >> symbol;
//
//    char* p1 = mystrchr(str1, symbol);
//
//    if (p1)
//        cout << "Символ знайдено: "
//        << p1 << endl;
//    else
//        cout << "Символ не знайдено" << endl;
//
//    char substr[100];
//
//    cout << "\nВведіть підрядок для пошуку: ";
//    cin.ignore();
//    cin.getline(substr, 100);
//
//    char* p2 = mystrstr(str1, substr);
//
//    if (p2)
//        cout << "Підрядок знайдено: "
//        << p2 << endl;
//    else
//        cout << "Підрядок не знайдено" << endl;
//
//    return 0;
//}