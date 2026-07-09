//dezeha
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//char* toBinary(int number)
//{
//    char* result = new char[33];
//    result[32] = '\0';
//
//    for (int i = 31; i >= 0; i--)
//    {
//        result[31 - i] = ((number >> i) & 1) + '0';
//    }
//
//    return result;
//}
//
//char* toHex(int number)
//{
//    char* result = new char[9];
//    result[8] = '\0';
//
//    char hex[] = "0123456789ABCDEF";
//
//    for (int i = 7; i >= 0; i--)
//    {
//        result[i] = hex[number % 16];
//        number /= 16;
//    }
//
//    return result;
//}
//
//int binaryToDecimal(char* binary)
//{
//    int number = 0;
//
//    for (int i = 0; binary[i] != '\0'; i++)
//    {
//        number = number * 2 + (binary[i] - '0');
//    }
//
//    return number;
//}
//
//int hexToDecimal(char* hex)
//{
//    int number = 0;
//
//    for (int i = 0; hex[i] != '\0'; i++)
//    {
//        char c = hex[i];
//
//        if (c >= '0' && c <= '9')
//            number = number * 16 + (c - '0');
//        else if (c >= 'A' && c <= 'F')
//            number = number * 16 + (c - 'A' + 10);
//        else if (c >= 'a' && c <= 'f')
//            number = number * 16 + (c - 'a' + 10);
//    }
//
//    return number;
//}
//
//int main()
//{
//    int number;
//    cout << "Enter number: ";
//    cin >> number;
//
//    char* binary = toBinary(number);
//    char* hex = toHex(number);
//
//    cout << "Binary: " << binary << endl;
//    cout << "Hex: " << hex << endl;
//
//    cout << "Binary to decimal: " << binaryToDecimal(binary) << endl;
//    cout << "Hex to decimal: " << hexToDecimal(hex) << endl;
//
//    delete[] binary;
//    delete[] hex;
//
//    return 0;
//}
