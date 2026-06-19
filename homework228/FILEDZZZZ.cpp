DZ1
#include <iostream>
using namespace std;

int main()
{
    char str[200];

    cin.getline(str, 200);

    int letters = 0;
    int digits = 0;
    int other = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z'))
        {
            letters++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else
        {
            other++;
        }
    }

    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Other: " << other << endl;

    return 0;
}

DZ2

#include <iostream>
#include <cstring>
using namespace std;

int mystrcmp(const char* str1, const char* str2)
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] > str2[i])
            return 1;

        if (str1[i] < str2[i])
            return -1;

        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        return 0;

    if (str1[i] != '\0')
        return 1;

    return -1;
}

int StringToNumber(char* str)
{
    int number = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        number = number * 10 + (str[i] - '0');
    }

    return number;
}

char* NumberToString(int number)
{
    char* str = new char[20];

    int i = 0;

    if (number == 0)
    {
        str[0] = '0';
        str[1] = '\0';
        return str;
    }

    while (number > 0)
    {
        str[i] = number % 10 + '0';
        number /= 10;
        i++;
    }

    str[i] = '\0';

    for (int j = 0; j < i / 2; j++)
    {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    return str;
}

char* Uppercase(char* str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }

    return str;
}

char* Lowercase(char* str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }

    return str;
}

char* mystrrev(char* str)
{
    int len = strlen(str);

    char* rev = new char[len + 1];

    for (int i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }

    rev[len] = '\0';

    return rev;
}

int main()
{
    char a[100];
    char b[100];

    cout << "String 1: ";
    cin.getline(a, 100);

    cout << "String 2: ";
    cin.getline(b, 100);

    cout << "Compare: " << mystrcmp(a, b) << endl;

    char numStr[20] = "12345";
    cout << "StringToNumber: " << StringToNumber(numStr) << endl;

    char* s = NumberToString(56789);
    cout << "NumberToString: " << s << endl;

    cout << "Uppercase: " << Uppercase(a) << endl;
    cout << "Lowercase: " << Lowercase(a) << endl;

    char* rev = mystrrev(a);
    cout << "Reverse: " << rev << endl;

    delete[] s;
    delete[] rev;

    return 0;
}