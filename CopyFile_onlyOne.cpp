#include <afx.h>
#include <iostream>
using namespace std;

int main(void) {

	int result = 0;
	CString Path = "C:\\Users\\username\\Documents\\exercise\\Source\\";

	result = CopyFile(Path + "EX1.txt", Path + "EX2.txt", FALSE);
	if (result != 0) {
		cout << "Succeeded" << endl;
	}
	else //오류처리
		cout << "Failed" << endl;

	return 0;
}
