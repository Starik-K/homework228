////1
//#include <iostream>
//
//using namespace std;
//
//void vivodbitkov(unsigned int e)
//{
//    for (int i = 31; i >= 0; i--)
//        cout << ((e >> i) & 1);
//
//    cout << endl;
//}
//
//int main()
//{
//    unsigned int a;
//
//    cout << "Enter number: ";
//    cin >> a;
//
//    vivodbitkov(a);
//
//    return 0;
//}
//2
//#include <iostream>
//
//using namespace std;
//bool even(unsigned int zzz)
//{
//	return(zzz & 1) == 0;
//
//}
//int main() {
//	unsigned int zzz;
//	cout << "vvedi chislo: ";
//	cin >> zzz;
//	if (even(zzz))
//		cout << "chetni";
//	else
//		cout << "nechetni";
//	return 0;
//}
//3
//#include <iostream>
//using namespace std;
//unsigned int clirbit(unsigned int zzz, int index) {
//	return zzz & ~(1 << index);
//
//}
//int main() {
//	unsigned int zzz;
//	int index;
//
//	cout << "vvedichislo: ";
//	cin >> zzz;
//
//	cout << "Bitindex: ";
//	cin >> index;
//	cout << clirbit(zzz, index);
//	return 0;
//
//}
//4
//#include <iostream>
//using namespace std;
//
//unsigned int bitset(unsigned int pumba, int index)
//{
//	return pumba | (1 << index);
//
//}
//int main()
//{
//	unsigned int pumba;
//	int index;
//	cout << "vvedichislo: ";
//	cin >> pumba;
//	cout << "Bitindex: ";
//	cin >> index;
//	cout << bitset(pumba, index);
//
//	return 0;
//}
//5
//#include <iostream>
//using namespace std;
//
//unsigned int bitinvert(unsigned int gokgokgok, int index) {
//	return gokgokgok ^ (1 << index);
//}
//int main() {
//	unsigned int gokgokgok;
//	int index;
//	cout << "vvedichislo: ";
//	cin >> gokgokgok;
//	cout << "Bitindex: ";
//	cin >> index;
//	cout << bitinvert(gokgokgok, index);
//	return 0;
//}
//6
//#include <iostream>
//using namespace std;
//void podschetbitiv(unsigned int simon) {
//	int one = 0;
//	int zero = 0;
//	for (int i = 0; i < 32; i++) {
//		if ((simon >> i) & 1)
//			one++;
//		else
//			zero++;
//
//	}
//	cout << "ones = " << one << endl;
//	cout << "zeros = " << zero << endl;
//}
//int main() {
//	unsigned int simon;
//	cout << "vvedi chislo: ";
//	cin >> simon;
//
//	podschetbitiv(simon);
//	return 0;
//
// }
//7
//#include <iostream>
//using namespace std;
//bool stepindva(unsigned int aa)
//{
//	if (aa == 0)
//		return false;
//
//	return(aa & (aa - 1)) == 0;
//}
//int main() {
//	unsigned int aa;
//	cout << "vvedichislo: ";
//	cin >> aa;
//	if (stepindva(aa))
//		cout << "stepin dva";
//	else
//		cout << "nestepindva";
//
//	return 0;
//
//
//}
//8
//#include <iostream>
//using namespace std;
//int firstbit(unsigned int aaa) {
//	if (aaa == 0)
//		return -1;
//
//	int index = 0;
//
//	while ((aaa & 1) == 0) {
//		aaa >>= 1;
//		index++;
//	}
//
//	return index;
//}
//int main() {
//	unsigned int aaa;
//
//	cout << "vvedichislo: ";
//	cin >> aaa;
//
//	cout << firstbit(aaa);
//
//	return 0;
//}

//9
//
//#include <iostream>
//using namespace std;
//
//unsigned int clirfirstbit(unsigned int aa)
//{
//	return aa & (aa - 1);
//
//}
//int main() {
//	unsigned int aa;
//	cout << "vvedichislo: ";
//		cin >> aa;
//		cout << clirfirstbit(aa);
//
//}