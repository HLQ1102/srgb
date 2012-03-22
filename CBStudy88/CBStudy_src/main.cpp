/*
Code::Blocks ѧϰ���� V0.18 By �m����
�������л�VC2010��Ӣ�ģ����߿��������еı���������
Debugģʽ�������к�̨���������Ϣ�����ǲ�����ʾͼƬ
Releaseģʽ��������ʾͼƬ��ͼ�꣬����ʾ�����к�̨
*/
#include "cbstudy.h"  //����Ԥ����ͷ�ļ�





INT_PTR CALLBACK DlgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
void CBStudyInitdialog(HWND & hwnd);
void CBStudyReadINI();    //��ȡ����ģ��

bool Clui_Language(int CodePage);    // ����VC���������Դ���ҳ
bool CBSfullPath(char* CBS_PATH, char* mypath);  // ת������·��
bool ConsoleCompiler(const char * ch);

HBITMAP g_hBitmap1;	// ��һ��ͼƬ�ľ��
HBITMAP g_hBitmap2;	// �ڶ���ͼƬ�ľ��
HICON	g_hIcon;	// �Ի���ͼ����
HBRUSH	g_hBgBrush;	// ����ˢ��


//����·��ȫ�ֱ����洢
bool Change_PIC = false ;
char CBS_vcbin[MAX_PATH],  CBS_include[MAX_PATH], CBS_lib[MAX_PATH],
     CBS_gccbin[MAX_PATH], CBS_gccnls[MAX_PATH],
     CBS_PATH[MAX_PATH],   CBS_MYAPP[MAX_PATH];

string strCBS_Cmdline ;

// Windowsϵͳ��������
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmd, int nCmd)
{

    // ����Դ�м���BMP�ļ���ͼ�꣬��Щ����Ҳ������WM_INITDIALOG��Ϣ�н���
    g_hBitmap1 = ::LoadBitmap(hInst, (LPCTSTR)IDB_BITMAP1);
    g_hBitmap2 = ::LoadBitmap(hInst, (LPCTSTR)IDB_BITMAP2);
    g_hIcon = ::LoadIcon(hInst, (LPCTSTR)IDI_ICON);

    CBStudyReadINI();    // ��ȡ CBStudy.ini ��·������

    // �����ϵͳ�����������Ǹոջ��ƺõĴ���DLG_MAIN�����ûؽк���ΪDlgProc
    DialogBox(hInst, MAKEINTRESOURCE(DLG_MAIN ), 0, DlgProc);

    return 0;
}


INT_PTR CALLBACK DlgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

    // ����Ϣ�������ж�
    switch(uMsg) {

    case WM_INITDIALOG: {
        CBStudyInitdialog(hwnd); // ���ñ�����ͼ��,// ����ͼƬ

    }
    break;

    // ����������¼�����ť�ȣ�
    case WM_COMMAND:
        // ��wParam���ֽڽ����жϣ����������ǵ�ID���μ�MSDN��
        switch(LOWORD(wParam)) {

        case IDC_Change_PIC:
            if (!Change_PIC) {
                SetDlgItemText(hwnd, IDC_INFO_TEXT, "��Ů�����㷢���ˣ�����������");
                ::SendDlgItemMessage(hwnd, IDC_BABY_PIC, STM_SETIMAGE, IMAGE_BITMAP, (long)g_hBitmap2);
                printf("��ͼƬ\n");
                Change_PIC = true;
            } else {
                CBStudyInitdialog(hwnd);
                Change_PIC = false;
            }
            break;
        case IDC_CLUI_CN:
            Clui_Language(2052); //�������Ĵ���ҳ2052
            SetDlgItemText(hwnd, IDC_INFO_TEXT,  "���Ѿ��л�C/C++������������ϢΪ����!");
            break;

        case IDC_CLUI_EN:
            Clui_Language(1033); //�������Ĵ���ҳ1033
            SetDlgItemText(hwnd, IDC_INFO_TEXT,  "C/C++ compiler build information for the English!");

            break;

        case IDC_CLUI_VCCMD:
            printf("VC������·�� %s\n",CBS_vcbin);
            ConsoleCompiler("vc");
            break;

        case IDC_CLUI_GCCMD:
            printf("GCC������·�� %s\n",CBS_gccbin);
            ConsoleCompiler("gcc");
            break;

            // �����Cancel��ť������
        case IDC_BTN_QUIT :
            // ������߿��Գ�ַ���������������̨�������Ե��� :)

            if (Change_PIC) {
                ::EndDialog (hwnd, IDC_BTN_QUIT);
                DeleteFile("CBStudy.cmd");
            }

            // ����ռ���Ϊ��ʱ�洢
            char buf[512];

            // ���Edit Control����
            GetDlgItemText(hwnd, IDC_INFO_TEXT, buf, 512);

            // ��printf��ӡ���ǻ�õ�����
            printf("%s\n", buf);

            SetDlgItemText(hwnd, IDC_INFO_TEXT, "�������˳����𣡳����л��и��ʵ����㷢���أ�");
            Change_PIC = true;

            break;
        }
        break;

        // ������ڱ��ر�
    case WM_CLOSE:
        // Ҫ��ϵͳ�ر��������
        PostQuitMessage(0);
        break;
    }

    // Ĭ�Ϸ���0
    return 0;
}

void CBStudyInitdialog(HWND & hwnd)
{

    // ���ñ�����ͼ��
    ::SendMessage(hwnd, WM_SETICON, ICON_BIG, (long)g_hIcon);

    // ��ʼ����ʾͼƬ�ľ�̬���
    HWND hWndBmp = ::GetDlgItem(hwnd, IDC_BABY_PIC );
    // ����SS_BITMAP���
    LONG nStyle = ::GetWindowLong(hWndBmp, GWL_STYLE);
    ::SetWindowLong(hWndBmp, GWL_STYLE, nStyle | SS_BITMAP);
    // ����ͼƬ
    ::SendDlgItemMessage(hwnd, IDC_BABY_PIC, STM_SETIMAGE, IMAGE_BITMAP, (long)g_hBitmap1);
    SetDlgItemText(hwnd, IDC_INFO_TEXT, "�������л�C++��������Ӣ�ģ����������еı���������");
}

void CBStudyReadINI()
{
    //��ȡ�����ļ�·��
    GetPrivateProfileString("VC2010_PATH", "VCBIN", "VCBIN", CBS_vcbin, MAX_PATH,".\\CBStudy.ini");
    GetPrivateProfileString("VC2010_PATH", "INCLUDE", "INCLUDE", CBS_include, MAX_PATH,".\\CBStudy.ini");
    GetPrivateProfileString("VC2010_PATH", "LIB", "LIB", CBS_lib, MAX_PATH,".\\CBStudy.ini");
    GetPrivateProfileString("GCC_PATH", "GCCBIN", "GCCBIN", CBS_gccbin, MAX_PATH,".\\CBStudy.ini");
    GetPrivateProfileString("GCC_PATH", "GCCNLS", "C:\\gcc\\share\\locale\\zh_CN", CBS_gccnls, MAX_PATH,".\\CBStudy.ini");
    GetPrivateProfileString("MYAPP_PATH", "MYAPP", "E:\\myapp", CBS_MYAPP, MAX_PATH,".\\CBStudy.ini");

    // תΪΪ����·��
    GetCurrentDirectoryA(MAX_PATH, CBS_PATH);
    CBSfullPath(CBS_PATH, CBS_vcbin);
    CBSfullPath(CBS_PATH, CBS_include);
    CBSfullPath(CBS_PATH, CBS_lib);
    CBSfullPath(CBS_PATH, CBS_gccbin);
    CBSfullPath(CBS_PATH, CBS_gccnls);
    CBSfullPath(CBS_PATH, CBS_MYAPP);
//  printf("%s\n%s\n",CBS_gccnls,CBS_MYAPP);
}

bool CBSfullPath(char* CBS_PATH, char* mypath)
{
    string strCBS(CBS_PATH);
    string absPath(mypath);
    string relativePath(mypath, 1, MAX_PATH - 3);
    if(mypath[0] == '.') {
        absPath = strCBS + relativePath;
        strcpy(mypath, absPath.c_str());
    }
    return true;
}

bool Clui_Language(int CodePage)
{
    string strCBS_CN2052(CBS_vcbin);   // VC ��������·��
    string strCBS_EN2052(CBS_vcbin);
    strCBS_CN2052 += "\\2052";
    strCBS_EN2052 += "\\EN2052";
    char *cn2052 , *en2052 ;

    string strCBS_CNnls(CBS_gccnls);  // GCC ��������·��
    string strCBS_ENnls(CBS_gccnls);
    strCBS_ENnls += "_OFF";
    char *cnnls , *ennls ;

    cn2052 =new char[MAX_PATH];       // string ת�� charָ�룬�ú���MoveFile()����
    en2052 =new char[MAX_PATH];
    cnnls =new char[MAX_PATH];
    ennls =new char[MAX_PATH];
    strcpy(cn2052, strCBS_CN2052.c_str());
    strcpy(en2052, strCBS_EN2052.c_str());
    strcpy(cnnls, strCBS_CNnls.c_str());
    strcpy(ennls, strCBS_ENnls.c_str());

    if (2052 == CodePage)  {     //����
        MoveFile(en2052, cn2052);
        MoveFile(ennls, cnnls);
    }
    if (1033 == CodePage) {       //Ӣ��
        MoveFile(cn2052, en2052);
        MoveFile(cnnls, ennls);
    }
    delete[] cn2052;
    delete[] en2052;
    delete[] cnnls;
    delete[] ennls;

    printf("%i\n", CodePage);
    return true;
}

bool ConsoleCompiler(const char * ch)
{
    std::ofstream fout( "CBStudy.cmd" );       // �����������ļ�
    if ('v'==ch[0]) {
        fout << "@echo off\nset PATH=" << CBS_vcbin << ";%PATH%\nset INCLUDE=" <<CBS_include
             <<"\nset LIB=" << CBS_lib <<"\ncolor a\n@echo ��ӭʹ��������VC2010���������İ�  �����ʹ��TAB�Զ���ȫ\ncl\n" ;
    }
    if ('g'==ch[0]) {
        fout << "@echo off\nset PATH=" << CBS_gccbin << ";%PATH%\ncolor a\n@echo ��ӭʹ�������� GCC ���������İ�  �����ʹ��TAB�Զ���ȫ\ng++ -v\n" ;
    }
    fout << "CD " << CBS_MYAPP << endl;
    fout.close();

    // ִ���������ļ�
    char szCommandLine[] = "cmd /k CBStudy.cmd";
    STARTUPINFO si = { sizeof(si) };
    PROCESS_INFORMATION pi;

    si.dwFlags = STARTF_USESHOWWINDOW;	// ָ��wShowWindow��Ա��Ч
    si.wShowWindow = TRUE;			// �˳�Ա��ΪTRUE�Ļ�����ʾ�½����̵������ڣ�
    // ΪFALSE�Ļ�����ʾ
    BOOL bRet = ::CreateProcess (
                    NULL,			// ���ڴ�ָ����ִ���ļ����ļ���
                    szCommandLine,		// �����в���
                    NULL,			// Ĭ�Ͻ��̰�ȫ��
                    NULL,			// Ĭ���̰߳�ȫ��
                    FALSE,			// ָ����ǰ�����ڵľ�������Ա��ӽ��̼̳�
                    CREATE_NEW_CONSOLE,	// Ϊ�½��̴���һ���µĿ���̨����
                    NULL,			// ʹ�ñ����̵Ļ�������
                    NULL,			// ʹ�ñ����̵���������Ŀ¼
                    &si,
                    &pi);
    return bRet;
}
