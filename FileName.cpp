//зд1
//#include <iostream>
//#include <fstream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//    ifstream in("text.txt");
//    ofstream out("result.txt");
//
//    char word[100];
//
//    while (in >> word)
//    {
//        if (strlen(word) >= 7)
//            out << word << " ";
//    }
//
//    in.close();
//    out.close();
//
//    return 0;
//}
//
//зд2
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//    ifstream in("text.txt");
//    ofstream out("result.txt");
//
//    char line[256];
//
//    while (in.getline(line, 256))
//    {
//        out << line << endl;
//    }
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
//int main()
//{
//    ifstream in("text.txt");
//
//    char lines[100][256];
//    int count = 0;
//
//    while (in.getline(lines[count], 256))
//    {
//        count++;
//    }
//
//    in.close();
//
//    ofstream out("result.txt");
//
//    for (int i = count - 1; i >= 0; i--)
//    {
//        out << lines[i] << endl;
//    }
//
//    out.close();
//
//    return 0;
//}
//
//зд4
//
//
//#include <iostream>
//#include <fstream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//    ifstream in("text.txt");
//
//    char lines[100][256];
//    int count = 0;
//    int last = -1;
//
//    while (in.getline(lines[count], 256))
//    {
//        bool space = false;
//
//        for (int i = 0; lines[count][i] != '\0'; i++)
//        {
//            if (lines[count][i] == ' ')
//            {
//                space = true;
//                break;
//            }
//        }
//
//        if (!space)
//            last = count;
//
//        count++;
//    }
//
//    in.close();
//
//    ofstream out("result.txt");
//
//    for (int i = 0; i < count; i++)
//    {
//        out << lines[i] << endl;
//
//        if (i == last)
//            out << "------------" << endl;
//    }
//
//    if (last == -1)
//        out << "------------" << endl;
//
//    out.close();
//
//    return 0;
//}
