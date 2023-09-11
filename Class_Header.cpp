#include "Class_Header.h"
void sv::nhapthongtin()
{
	std:: cin.ignore();
	std::cout << "nhap thong tin" << std::endl;
	std::getline(std::cin, name);
	std::getline(std::cin, msv);
	std::cin >> ngaysinh;
	std::cin >> gpa;
}
void sv::inthongtin()
{
	std::cout << msv << " " << name << "  " << lop << "  " << ngaysinh << "  " << gpa << std::endl;
}
void sv::sorting()
{

}