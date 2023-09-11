#ifndef Class_Header_H
#define Class_Header_H
#include<iostream>
#include<string>
class sv {
	private:
		std::string lop = "19151";
		std::string name, msv, ngaysinh;
		float gpa;
		float math, phy, che;
		int rank;
	public:
		sv() {
			name = ngaysinh = lop = "";
			gpa = math = phy = che = 0;
		}
		void nhapthongtin();
		void inthongtin();
		float getGpa() { return this->gpa; }
		float getmath() { return this->math; }
		float getphy() { return this->phy; }
		float getche() { return this->che; }
		void setrank(int rank) { this->rank = rank; }
		void sorting();
		friend void nhap(sv&);
		friend void xuat(sv);
};
#endif