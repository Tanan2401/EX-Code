#include<iostream>
#include<string>
#include<algorithm>
#include"Class_Header.H"
using namespace std;

void nhap(sv& a) {
	cin.ignore();
	getline(cin, a.name);
	getline(cin, a.msv);
	cin >> a.ngaysinh;
	cin >> a.math;
	cin >> a.phy;
	cin >> a.che;
	a.gpa = a.math + a.phy + a.che;
	if (a.ngaysinh[2] != '/') a.ngaysinh = "0" + a.ngaysinh;
	if (a.ngaysinh[5] != '/') a.ngaysinh.insert(3, "0");
}
void xuat(sv a)
{
	cout << a.rank << "    ";
	cout << a.name << "      ";
	cout << a.math << "     " << a.phy << "     "
		<< a.che << "       ";
	cout << a.gpa << " ";
	cout << "\n";
	//cout << a.msv << " " << a.name << "  " << a.lop << "  " << a.ngaysinh << "  " << a.gpa << endl;
}
bool cmp1(sv a, sv b)
{
	if (a.getGpa() != b.getGpa())
		return a.getGpa() > b.getGpa();

	if (a.getmath() != b.getmath())
		return a.getmath() > b.getmath();

	if (a.getphy() != b.getphy())
		return a.getphy() > b.getphy();

	return (a.getche() > b.getche());
}
int main()
{
	int n = 1;
	cout << "nhap so luong sv ";
	cin >> n;
	sv* s = new sv[n];
	//sv s1;
	//sv s2;
	//s1.nhapthongtin();
	//s1.inthongtin();
	//s2.nhapthongtin();
	//s2.inthongtin();
	for (int i = 0; i < n; i++) {
		nhap(s[i]);
	}
	sort(s, s + n, cmp1);
	cout << "Rank"
		<< " "
		<< "Name"
		<< "     ";
	cout << "Maths"
		<< " "
		<< "Physics"
		<< " "
		<< "Chemistry";
	cout << " "
		<< "Total\n";
	for (int i = 0; i < n; i++)
	{
		s[i].setrank(i + 1);
		xuat(s[i]);
		//cout << "size of s " << sizeof(s[i]) << endl;
	}
	delete[] s;

	return 0;
}