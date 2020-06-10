#include<iostream>
#include<string>
#include"SList.h"
using namespace std;

int main() {

	SList<string> listS;
	listS.addOnFirst("Oleksiy");
	listS.addOnFirst("Anton");
	listS.addOnFirst("Tania");
	listS.addOnFirst("Vika");

	listS.print();


	return 0;
}