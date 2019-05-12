#include <afx.h>
#include <iostream>
using namespace std;

int main(void) {

	CString strWildcard("C:\\Users\\username\\Documents\\exercise\\Source\\*.*"); 
	CString Path = "C:\\Users\\username\\Documents\\exercise\\";
	CString FileName;

	CFileFind finder; //class
	BOOL bWorking = finder.FindFile(strWildcard); 

	while (bWorking) {

		bWorking = finder.FindNextFile(); //다음파일 존재유무
		FileName = finder.GetFileName(); //파일 이름
		CopyFile(Path + "Source\\" + FileName , Path + "Destination\\" + FileName, FALSE);
		// Source폴더의 모든 파일을 Destination 폴더로 복사하기
	}

	finder.Close();
	return 0;
}
