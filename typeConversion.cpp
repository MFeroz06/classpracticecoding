#include <iostream>
using namespace std;
int main(){
	char c= 'A';
	cout << 6 + c << endl;
	
	int i = 25;
	cout << 6.1 + i<< endl;
	
	int x, y=25;
	float z = 2.5;
	x = y + z;
	cout << x<< endl;
	
	int y1= 24, y2= 30, x1= 55, x2= 23;
	cout << (y2-y1)/(x2-x1) << endl;
	
	int kira = 5, nilai_pertama = 10, nilai_kedua, nilai_kedua1;
	
	nilai_kedua = 5*kira-- + nilai_pertama;
	cout << nilai_kedua<< endl;
	
	cout << kira<< endl;
	
	nilai_kedua1 = 5* --kira + nilai_pertama;
	cout << nilai_kedua1<< endl;
	
	int f1 = 3, f2 = 6, g1 = 5, g2 = 10;
	double m;
	m= static_cast <double>    (f2-f1)/(g2-g1);
	cout << m << endl;
	
	char ch = 'C';
	cout << ch << "is "<< static_cast <int> (ch)<< endl;
	
	int a = 1;
	double d = 1.0;
	
	//a = 46/9;
	
	//a= 46% 9 + 4 * 4 -2;
	
	//a= 45 + 43 % 5 * (23 * 3 % 2);
	
	//a %= 3/a + 3;
	
	//d += 1.5* 3+(++a);
	
	//d-= 1.5 * 3 + a++;
	
	cout << a<< endl;
	
	cout << d;
	
	
	
}
