﻿#include "GuIDF.h"


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
    XInitXCGUI(); // 初始化
    extern char ConfigFile[MAX_PATH];
    GetAppDir(ConfigFile);
    strcat(ConfigFile, "/GuiDF.ini");
    if (IsFileExist(ConfigFile))
        LoadConfigFile();

    HWINDOW hWindow = XWnd_CreateWindow(0, 0, 380, 282, L"检测打包Adobe文档字体(C)2012.05 蘭公子"); // 创建窗口
    if (hWindow) {
        // 设置图标
        HICON logo_hIcon = LoadIcon(hInstance, (LPCTSTR)LOGO_ICON);
        XWnd_SetIcon(hWindow, logo_hIcon, false);
        InitXC_Window(hWindow); // 窗口布局

        XWnd_ShowWindow(hWindow, SW_SHOW); //显示窗口
        XRunXCGUI(); //运行
    }
    return 0;
}
