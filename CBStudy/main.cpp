/*
Code::Blocks ѧϰ���� V0.18 By �m����
�������л�VC2010��Ӣ�ģ����߿��������еı���������
Debugģʽ�������к�̨���������Ϣ�����ǲ�����ʾͼƬ
Releaseģʽ��������ʾͼƬ��ͼ�꣬����ʾ�����к�̨
*/
#include "cbstudy.h"  //����Ԥ����ͷ�ļ�

//INT_PTR CALLBACK DlgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
void CBStudyInitdialog(HWND & hwnd);
void CBStudyReadINI(HWND & hwnd);


HBITMAP g_hBitmap1;	// ��һ��ͼƬ�ľ��
HBITMAP g_hBitmap2;	// �ڶ���ͼƬ�ľ��
HICON	g_hIcon;	// �Ի���ͼ����
HBRUSH	g_hBgBrush;	// ����ˢ��


//����·��ȫ�ֱ����洢
bool Change_PIC = false ;
char CBS_vcbin[MAX_PATH], CBS_include[MAX_PATH], CBS_lib[MAX_PATH],
     CBS_PATH[MAX_PATH], CBS_gccbin[MAX_PATH];

string strCBS_Cmdline , strCBS_CN2052, strCBS_EN1033, strCBS_TMP;
char * cn2052 , * en2052 ;



// Windowsϵͳ��������
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmd, int nCmd)
{

    // ����Դ�м���BMP�ļ���ͼ�꣬��Щ����Ҳ������WM_INITDIALOG��Ϣ�н���
    g_hBitmap1 = ::LoadBitmap(hInst, (LPCTSTR)IDB_BITMAP1);
    g_hBitmap2 = ::LoadBitmap(hInst, (LPCTSTR)IDB_BITMAP2);
    g_hIcon = ::LoadIcon(hInst, (LPCTSTR)IDI_ICON);

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
        CBStudyReadINI(hwnd);    // ��ȡ CBStudy.ini ����


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

            strCBS_TMP = CBS_vcbin;
            strCBS_CN2052 = CBS_PATH;
            strCBS_CN2052 += strCBS_TMP;
            strCBS_EN1033 = strCBS_CN2052 + "\\EN2052";
            strCBS_CN2052 += "\\2052";

            cn2052 =new char[MAX_PATH];
            en2052 =new char[MAX_PATH];
            strcpy(cn2052, strCBS_CN2052.c_str());
            strcpy(en2052, strCBS_EN1033.c_str());

            MoveFile(en2052,cn2052);
            printf("%s\n",cn2052);
            printf("%s\n",en2052);

            delete[] cn2052;
            delete[] en2052;

            break;

        case IDC_CLUI_EN:

            strCBS_TMP = CBS_vcbin;
            strCBS_CN2052 = CBS_PATH;
            strCBS_CN2052 += strCBS_TMP;
            strCBS_EN1033 = strCBS_CN2052 + "\\EN2052";
            strCBS_CN2052 += "\\2052";

            cn2052 =new char[MAX_PATH];
            en2052 =new char[MAX_PATH];
            strcpy(cn2052, strCBS_CN2052.c_str());
            strcpy(en2052, strCBS_EN1033.c_str());

            MoveFile(cn2052, en2052);
            printf("%s\n",cn2052);
            printf("%s\n",en2052);

            delete[] cn2052;
            delete[] en2052;

            break;

        case IDC_CLUI_VCCMD:

            strCBS_TMP = CBS_vcbin;
            strCBS_Cmdline = CBS_PATH;
            strCBS_Cmdline += strCBS_TMP;
            printf("%s\n",strCBS_Cmdline.c_str());

            break;

        case IDC_CLUI_GCCMD:
            printf("������VC2010������\nVC������·�� %s\n",CBS_gccbin);
            break;

            // �����Cancel��ť������
        case IDC_BTN_QUIT :
            // ������߿��Գ�ַ���������������̨�������Ե��� :)

            if (Change_PIC)
                ::EndDialog (hwnd, IDC_BTN_QUIT);

            // ����ռ���Ϊ��ʱ�洢
            char buf[512];

            // ���Edit Control����
            GetDlgItemText(hwnd, IDC_INFO_TEXT, buf, 512);

            // ��printf��ӡ���ǻ�õ�����
            printf("%s\n", buf);

            SetDlgItemText(hwnd, IDC_INFO_TEXT, "�������˳����𣡳������и��ʵ����㷢�֣�");
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
    SetDlgItemText(hwnd, IDC_INFO_TEXT, "�������л�VC2010��Ӣ�ģ����߿��������еı���������");
}

#include "cbstudy.h"


void CBStudyReadINI(HWND & hwnd)
{
    GetCurrentDirectoryA(MAX_PATH, CBS_PATH);

    GetPrivateProfileString("VC2010_PATH", "VCBIN", "VCBIN", CBS_vcbin, MAX_PATH,".\\CBStudy.ini");
    GetPrivateProfileString("VC2010_PATH", "INCLUDE", "INCLUDE", CBS_include, MAX_PATH,".\\CBStudy.ini");
    GetPrivateProfileString("VC2010_PATH", "LIB", "LIB", CBS_lib, MAX_PATH,".\\CBStudy.ini");
    GetPrivateProfileString("GCC_PATH", "GCCBIN", "GCCBIN", CBS_gccbin, MAX_PATH,".\\CBStudy.ini");
}

