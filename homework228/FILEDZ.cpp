//#1
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//void DeleteChar(char str[], int pos)
//{
//    int len = strlen(str);
//
//    for (int i = pos; i < len; i++)
//        str[i] = str[i + 1];
//}
//
//int main()
//{
//    char str[100];
//
//    cin.getline(str, 100);
//
//    int pos;
//    cin >> pos;
//
//    DeleteChar(str, pos);
//
//    cout << str;
//
//    return 0;
//}
//
//#2
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//void DeleteAll(char str[], char ch)
//{
//    int j = 0;
//
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if (str[i] != ch)
//        {
//            str[j] = str[i];
//            j++;
//        }
//    }
//
//    str[j] = '\0';
//}
//
//int main()
//{
//    char str[100];
//    char ch;
//
//    cin.getline(str, 100);
//    cin >> ch;
//
//    DeleteAll(str, ch);
//
//    cout << str;
//
//    return 0;
//}
//
//#3
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//void InsertChar(char str[], int pos, char ch)
//{
//    int len = strlen(str);
//
//    for (int i = len; i >= pos; i--)
//        str[i + 1] = str[i];
//
//    str[pos] = ch;
//}
//
//int main()
//{
//    char str[100];
//
//    cin.getline(str, 100);
//
//    int pos;
//    char ch;
//
//    cin >> pos;
//    cin >> ch;
//
//    InsertChar(str, pos, ch);
//
//    cout << str;
//
//    return 0;
//}
//
//#4
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char str[100];
//
//    cin.getline(str, 100);
//
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if (str[i] == '.')
//            str[i] = '!';
//    }
//
//    cout << str;
//
//    return 0;
//}
//
//#5
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char str[100];
//    char ch;
//
//    cin.getline(str, 100);
//    cin >> ch;
//
//    int count = 0;
//
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if (str[i] == ch)
//            count++;
//    }
//
//    cout << count;
//
//    return 0;
//}