/**************************************************************************\
*
* Copyright (c)  炫彩界面库. All Rights Reserved.
*
* 炫彩界面库 - 官方网站 : http://www.xcgui.com
*
\**************************************************************************/

//v1.3.6



#ifndef XCGUI_HEADER_FILE_
#define XCGUI_HEADER_FILE_

//接口类型
#define  XC_WINDOW         1   
#define  XC_MODALWINDOW    2   

#define  XC_ELE            20
#define  XC_BUTTON         21  
#define  XC_RADIO          22
#define  XC_CHECK          23
#define  XC_EDIT           24
#define  XC_COMBOBOX       26
#define  XC_SCROLLBAR      27
#define  XC_SCROLLVIEW     28
#define  XC_LIST           29  
#define  XC_LISTBOX        30  
#define  XC_TREE           31
#define  XC_MENUBAR        32  
#define  XC_PROPERTYPAGE   33  
#define  XC_SLIDERBAR      34
#define  XC_PROGRESSBAR    35  
#define  XC_TOOLBAR        36
#define  XC_STATIC         37
#define  XC_GROUPBOX       38  
#define  XC_PICTURE        39  
#define  XC_MONTHCAL       40  
#define  XC_DATETIME       41  
#define  XC_PROPERTYGRID   42  
#define  XC_CHOOSECOLOR    43  
#define  XC_OUTLOOK        44  


#define  XC_MENUBAR_BUTTON 60  
#define  XC_TOOLBARBUTTON  61  
#define  XC_ARRAY          70  
#define  XC_STRING         71  
#define  XC_IMAGELIST      72
#define  XC_MENU           73  
#define  XC_IMAGE          74  


#define XC_BUTTON_MIN     101  
#define XC_BUTTON_MAX     102  
#define XC_BUTTON_CLOSE   103  







#define XC_BUTTON_SLIDERBAR_SLIDER    110  









#define in_
#define out_
#define in_out_


#ifdef _DEBUG
#define DECLARE_HANDLEX(name) struct name##__ { int unused; }; typedef struct name##__ *name
#else
#define	DECLARE_HANDLEX(name) typedef void* name
#endif



typedef void*  HXCGUI;  
DECLARE_HANDLEX(HWINDOW); 
DECLARE_HANDLEX(HELE);    
DECLARE_HANDLEX(HMENUX);  
DECLARE_HANDLEX(HSTRING); 
DECLARE_HANDLEX(HARRAY);  
DECLARE_HANDLEX(HIMAGE);  
DECLARE_HANDLEX(HXMLRES); 


#define  XWM_MOUSECLICK       WM_APP+1001 
#define  XWM_MOUSEDBCLICK     WM_APP+1002 
#define  XWM_REDRAW_ELE       WM_APP+1003 
#define  XWM_MENUSELECT       WM_APP+1004 
#define  XWM_MENUEXIT         WM_APP+1005 
#define  XWM_SETFONT          WM_APP+1006 




#define  XWM_NCPAINT         5  
#define  XWM_NCENDPAINT      8  
#define  XWM_NCMOUSEMOVE     0  
#define  XWM_NCLBUTTONDOWN   1  
#define  XWM_NCLBUTTONUP     2  
#define  XWM_NCRBUTTONDOWN   3  
#define  XWM_NCRBUTTONUP     4  
#define  XWM_NCMOUSECLICK    6  
#define  XWM_NCMOUSEDBCLICK  7  



#define  XM_PAINT          100   
#define  XM_MOUSECLICK     101   
#define  XM_MOUSEDBCLICK   102   
#define  XM_MOUSEMOVE      103   
#define  XM_LBUTTONDOWN    104   
#define  XM_LBUTTONUP      105   
#define  XM_RBUTTONDOWN    106   
#define  XM_RBUTTONUP      107   



#define  XE_DESTROY        -1  
#define  XE_BNCLICK        0   
#define  XE_MOUSESTAY      1   
#define  XE_MOUSELEAVE     2   
#define  XE_MOUSEWHEEL     3   
#define  XE_SETFOCUS       4   
#define  XE_KILLFOCUS      5   
#define  XE_KEYDOWN        6   
#define  XE_CHAR           7   
#define  XE_HSCROLL        8   
#define  XE_VSCROLL        9   
#define  XE_HSCROLLVIEW    10  
#define  XE_VSCROLLVIEW    11  
#define  XE_SETCAPTURE     12  
#define  XE_KILLCAPTURE    13  
#define  XE_MENUSELECT     14  
#define  XE_MENUEXIT       15  
#define  XE_SIZE           16  
#define  XE_SETFONT        17  

#define  XE_LIST_SELECT          50   
#define  XE_LIST_HEADER_CLICK    51   
#define  XE_LIST_HEADER_CHANGE   52   

#define  XE_TREE_SELECT          53   
#define  XE_TREE_EXPAND          54   

#define  XE_COMBOBOX_SELECT      55   

#define  XE_PPAGE_SELECT         56   

#define  XE_SLIDER_CHANGE        57   

#define  XE_MONTHCAL_CHANGE      58   



#define  XE_DATETIME_CHANGE      59   

#define  XE_LISTBOX_SELECT       60   

#define  XE_PGRID_SELCHANGE      61   
#define  XE_PGRID_VALUECHANGE    62   



#define  STATE_LEAVE   0   
#define  STATE_DOWN    1   
#define  STATE_STAY    2   
#define  STATE_SELECT  3   



#define  XC_SY_MINIMIZE   1  
#define  XC_SY_MAXIMIZE   2  
#define  XC_SY_CLOSE      4  
#define  XC_SY_CAPTION    8  
#define  XC_SY_BORDER     16 
#define  XC_SY_ROUND      32 
#define  XC_SY_CENTER     64 



#define  XMB_OK       1  
#define  XMB_CANCEL   2  



#define  XC_ADDELE_END      0    
#define  XC_ADDELE_FRIST    1    
#define  XC_ADDELE_AFTER    2    
#define  XC_ADDELE_BEFORE   3    
#define  XC_ADDELE_INDEX    4    



#define  SY_HSCROLL     true   
#define  SY_VSCROLL     false  


#define  XTREE_INSERT_BEGIN  -2  
#define  XTREE_INSERT_LAST   -1  

#define  XTREE_ROOT  0       


#define  XMTREE_ROOT   -1            

#define  XMENU_ROOT    XMTREE_ROOT   


#define  XM_SELECT      1   
#define  XM_DISABLED    2   
#define  XM_CHECK       4   
#define  XM_POPUP       8   
#define  XM_SEPARATOR   16  



#define  XM_LEFT_TOP       0   
#define  XM_LEFT_BOTTOM    1   
#define  XM_RIGHT_TOP      2   
#define  XM_RIGHT_BOTTOM   3   
#define  XM_CENTER_LEFT    4   
#define  XM_CENTER_TOP     5   
#define  XM_CENTER_RIGHT   6   
#define  XM_CENTER_BOTTOM  7   


#define  IDM_CLIP          1000000000    
#define  IDM_COPY          1000000001    
#define  IDM_PASTE         1000000002    
#define  IDM_DELETE        1000000003    
#define  IDM_SELECTALL     1000000004    
#define  IDM_DELETEALL     1000000005    



#define  PGRID_STRING       0  
#define  PGRID_EDIT         1  
#define  PGRID_COMBOBOX     2  
#define  PGRID_CHOOSECOLOR  3  

#define  XTOOLBARBTN_ICO_LEFT   0  
#define  XTOOLBARBTN_ICO_RIGHT  1  
#define  XTOOLBARBTN_ICO_TOP    2  
#define  XTOOLBARBTN_ICO_BOTTOM 3  
#define  XTOOLBARBTN_ICO        4  
#define  XTOOLBARBTN_TEXT       5  


#ifdef _DEBUG
#define XTRACE   xtrace
#define XTRACEW  xtracew
#define XERROR   XTRACE 
#define XERRORW  XTRACEW
#else
#define XTRACE
#define XTRACEW
#define XERROR 
#define XERRORW
#endif

#ifndef  GET_X_LPARAM
#define  GET_X_LPARAM(lp)   ((int)(short)LOWORD(lp))
#endif
#ifndef  GET_Y_LPARAM
#define  GET_Y_LPARAM(lp)   ((int)(short)HIWORD(lp))
#endif



typedef bool (CALLBACK *pFunWndProc)(HWINDOW hWindow,UINT message, WPARAM wParam, LPARAM lParam);

typedef bool (CALLBACK *pFunEleProc)(HELE hEle,UINT eleMessage,WPARAM wParam,LPARAM lParam);

typedef bool (CALLBACK *pFunEleEventProc)(HELE hEle,int type,WPARAM wParam,LPARAM lParam);

typedef bool (CALLBACK *pFunDrawScrollView)(HELE hEle,HDC hdc);





struct tree_drewItem_
{
	HDC   hdc;
	int      id;
	int      imageId;
	int      state;
	bool     bExpand;   
	wchar_t  *pText;

	RECT  rcButton; 
	RECT  rcImage;  
	RECT  rcText;   
};

struct list_drawItem_
{
	HDC   hdc;
	int   index;     
	int   subIndex;  
	int   imageId;   
	int   state;     
	RECT  rect;      
	RECT  rcCheck;   
	wchar_t *pText;  
};

struct listHeader_drawItem_
{
	HDC   hdc;
	int   index;
	int   imageId;
	int   state;
	RECT  rect;
	wchar_t *pText;
};

struct listBox_drawItem_
{
	HDC   hdc;
	int   index;   
	int   imageId; 
	int   state;   
	RECT  rcItem;  
	RECT  rcCheck; 
	wchar_t *pText;
};


typedef void (CALLBACK *pFunList_DrawItem)(HELE hEle,list_drawItem_ *pDrawItem);

typedef void (CALLBACK *pFunListHeader_DrawItem)(HELE hEle,listHeader_drawItem_ *pDrawItem);


typedef void (CALLBACK *pFunListBox_DrawItem)(HELE hEle,listBox_drawItem_ *pDrawItem);


typedef void (CALLBACK *pFunTree_DrawItem)(HELE hEle,tree_drewItem_ *pDrawItem);


#define XCGUI_PLUS  

#ifdef	XCGUI_PLUS  
struct eventOrMsg_  
{
	union
	{
		HELE hEle;
		HWINDOW hWindow;
	};
	union
	{
		HELE hEventEle;
		int  xint;
	};
	WPARAM wParam;
	LPARAM lParam;
	void   *pClass_fun;  
};
enum xcgui_fun_type 
{
	xc_fun_b_e_e_i_i,
	xc_fun_b_e_e_i,
	xc_fun_b_e_e,
	xc_fun_b_e_e_i_p,
	xc_fun_b_e_e_i_b,
	xc_fun_b_e_e_b_b,
	xc_fun_b_e_i_i_i,

	xc_fun_b_e_i_p,
	xc_fun_b_e_p,
	xc_fun_v_e,
	xc_fun_b_e_dc,

	xc_fun_b_w_dc,
	xc_fun_b_w,
	xc_fun_b_w_i_p,
	xc_fun_b_w_i_size,
	xc_fun_b_w_i_i,
	xc_fun_b_w_p,
	xc_fun_b_w_e,
	xc_fun_b_w_hwnd,
	xc_fun_b_w_i,

	xc_fun_v_e_list,
	xc_fun_v_e_listHeader,
	xc_fun_v_e_tree,
	xc_fun_v_e_listBox
};


typedef bool (CALLBACK *pFunClassEventMsg)(eventOrMsg_ *pEvent,xcgui_fun_type funType);

#endif


extern "C"{

#define XC_API __declspec(dllimport)

////////////////////////////////////////////
XC_API HARRAY XArray_Create(); //创建
XC_API void XArray_Destroy(HARRAY hArray); //销毁
XC_API void XArray_Add(HARRAY hArray,void *pElement);//增加元素到末尾
XC_API void XArray_AddFirst(HARRAY hArray,void *pElement); //增加到开头
XC_API bool XArray_insert(HARRAY hArray,void *pElement,int index); //插入到指定位置
XC_API void XArray_DeleteIndex(HARRAY hArray,int index);
XC_API void XArray_Delete(HARRAY hArray,void *pElement);
XC_API void XArray_DeleteAll(HARRAY hArray);
XC_API void XArray_SetAt(HARRAY hArray,int index,void *pElement);
XC_API void* XArray_GetAt(HARRAY hArray,int index);
XC_API int XArray_GetCount(HARRAY hArray);
XC_API HELE XBtn_Create(int x, int y, int cx, int cy,wchar_t *pTitle=NULL,HXCGUI hParent=NULL);  //创建按钮
XC_API wchar_t *XBtn_GetText(HELE hEle);  //获取文本
XC_API void XBtn_SetText(HELE hEle,wchar_t *pText);
XC_API void XBtn_SetCheck(HELE hEle,bool bCheck);
XC_API bool XBtn_IsCheck(HELE hEle); //按钮是否被选中
XC_API int  XBtn_GetState(HELE hEle);
XC_API void XBtn_EnableImageStretch(HELE hEle,bool bStretch); //启用贴图缩放
XC_API void XBtn_SetImageLeave(HELE hEle,HIMAGE hImage=NULL);  //鼠标离开时图片
XC_API void XBtn_SetImageStay(HELE hEle,HIMAGE hImage=NULL);   //鼠标停留时图片
XC_API void XBtn_SetImageDown(HELE hEle,HIMAGE hImage=NULL);   //鼠标按下时图片
XC_API void XBtn_SetImageCheck(HELE hEle,HIMAGE hImage=NULL);  //选中时图片
XC_API void XBtn_SetImageDisable(HELE hEle,HIMAGE hImage=NULL); //按钮禁用状态图片
XC_API HELE XCheck_Create(int x, int y, int cx, int cy,wchar_t *pTitle=NULL,HXCGUI hParent=NULL);
XC_API void XCheck_SetImageLeave_UnCheck(HELE hEle,HIMAGE hImage);   //鼠标离开时图片  未选择
XC_API void XCheck_SetImageStay_UnCheck(HELE hEle,HIMAGE hImage);    //鼠标停留时图片  未选择
XC_API void XCheck_SetImageDown_UnCheck(HELE hEle,HIMAGE hImage);    //鼠标按下时图片  未选择
XC_API void XCheck_SetImageDisable_UnCheck(HELE hEle,HIMAGE hImage); //按钮禁用状态图片  未选择
XC_API void XCheck_SetImageLeave_Check(HELE hEle,HIMAGE hImage);   //鼠标离开时图片   选择
XC_API void XCheck_SetImageStay_Check(HELE hEle,HIMAGE hImage);    //鼠标停留时图片   选择
XC_API void XCheck_SetImageDown_Check(HELE hEle,HIMAGE hImage);    //鼠标按下时图片   选择
XC_API void XCheck_SetImageDisable_Check(HELE hEle,HIMAGE hImage); //按钮禁用状态图片  选择
XC_API HELE XCHColor_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API COLORREF XCHColor_GetColor(HELE hEle); //获取颜色RGB值
XC_API void XCHColor_SetColor(HELE hEle,COLORREF color);//设置颜色
XC_API HELE XComboBox_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API bool XComboBox_AddString(HELE hEle,wchar_t *pText);  //增加一个字符串到组合框
XC_API void XComboBox_DeleteItem(HELE hEle,int index);//删除项
XC_API void XComboBox_DeleteItemAll(HELE hEle);  //删除所有项
XC_API void XComboBox_EnableEdit(HELE hEle,bool bEdit);  //启动编辑内容
XC_API void XComboBox_SetSelectItem(HELE hEle,int index);  //设置选择项
XC_API void XComboBox_SetText(HELE hEle,wchar_t *pText);     //设置编辑框内容
XC_API void XComboBox_SetItemHeight(HELE hEle,int height); //设置下拉列表项高
XC_API void XComboBox_SetListHeight(HELE hEle,int height);   //设置下拉列表高度
XC_API void XComboBox_GetText(HELE hEle,wchar_t *pOut,int len);  //获取编辑框文本
XC_API int  XComboBox_GetItemHeight(HELE hEle);  //获取项高
XC_API int  XComboBox_GetListHeight(HELE hEle); //获取下拉列表高度
XC_API wchar_t *XComboBox_GetItemText(HELE hEle,int index); //获取下拉列表文本
XC_API int  XComboBox_GetSelectItem(HELE hEle);  //获取当前选择项索引
XC_API void XDraw_FillSolidRect(HDC hdc,RECT *pRect,COLORREF clr);
XC_API BOOL XDraw_GradientFill2(HDC hdc,BYTE r1, BYTE g1, BYTE b1, BYTE r2, BYTE g2, BYTE b2, RECT *pRect,int mode);
XC_API BOOL XDraw_GradientFill4(HDC hdc,BYTE r1, BYTE g1, BYTE b1, BYTE r2, BYTE g2, BYTE b2, BYTE r3, BYTE g3, BYTE b3, BYTE r4, BYTE g4, BYTE b4,RECT *pRect,int mode);
XC_API void XDraw_Check(HDC hdc,int x,int y,bool bCheck);
XC_API HELE XEdit_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API void XEdit_EnableMultiLine(HELE hEle,bool b);  //启用多行输入
XC_API void XEdit_EnablePassBox(HELE hEle,bool bPass); //启用密码框
XC_API void XEdit_EnableNumber(HELE hEle,bool bNumber); //只能输入数字
XC_API void XEdit_EnablePopupMenu(HELE hEle,bool bEnable);  //启用鼠标右键菜单
XC_API void XEdit_InsertText(HELE hEle,wchar_t *pText,int row=-1,int column=-1); //插入文本,row=-1末尾行,column=-1末尾列;
XC_API void XEdit_DeleteSelectText(HELE hEle); //删除选择文本,当只读属性时,也可以删除文本
XC_API void XEdit_SetText(HELE hEle,wchar_t *pText);  //设置文本
XC_API void XEdit_SetReadOnly(HELE hEle,bool bRead);  //设置只读文本
XC_API void XEdit_SetTextSpacingLeft(HELE hEle,int spacing);  //设置字体左对齐间隔
XC_API void XEdit_SetTextSpacingTop(HELE hEle,int spacing);  //设置字体上对齐间隔
XC_API void XEdit_GetSelectText(HELE hEle,wchar_t *pOut,int len);  //获取选择内容
XC_API int  XEdit_GetTextLength(HELE hEle); //获取内容长度
XC_API void XEdit_GetText(HELE hEle,wchar_t *pOut,int len); //获取文本
XC_API int XEdit_GetRowCount(HELE hEle);   //获取总行数
XC_API int XEdit_GetColumnCount(HELE hEle,int row); //获取指定行字符数,row=-1末尾行;
XC_API int XEdit_GetCurrentRow(HELE hEle);  //获取插入符位置当前行
XC_API int XEdit_GetCurrentColumn(HELE hEle); //获取插入符位置当前列
XC_API void XEdit_Cut(HELE hEle);        //剪贴  删除选择的文本,并将文本拷贝到剪贴板中
XC_API void XEdit_Copy(HELE hEle);       //复制  复制选择的文本到剪贴板中
XC_API void XEdit_Paste(HELE hEle);      //粘贴  将剪贴板中的文本插入当前光标位置
XC_API void XEdit_Clear(HELE hEle);      //删除  删除选择的文本,当只读属性时无法删除文本
XC_API void XEdit_SelectAll(HELE hEle);  //全选  选择所有文本
XC_API void XEdit_DeleteAll(HELE hEle);  //清空  删除所有文本
XC_API void XEle_RegisterEventEx(HELE hEle,int type,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info);
XC_API void XEle_RegisterMessageEx(HELE hEle,int message,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info); //注册消息
XC_API void XEle_RegisterMsgProcEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info);    //注册元素消息处理过程
XC_API void XEle_RegisterEventProcEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info);  //注册事件拦截过滤函数
XC_API  void *XEle_Malloc(int size);
XC_API HELE XEle_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL); //创建
XC_API void XEle_Destroy(HELE hEle);  //销毁
XC_API void XEle_RegisterMessage(HELE hEle,int message,void *pFun); 
XC_API void XEle_RegisterEvent(HELE hEle,int type,void *pFun);
XC_API void XEle_RegisterMsgProc(HELE hEle,pFunEleProc pFun);    //注册元素消息处理过程
XC_API void XEle_RegisterEventProc(HELE hEle,pFunEleEventProc pFun);  //注册元素事件处理过程
XC_API void XEle_SetBkTransparent(HELE hEle,bool bTran);   //设置元素背景透明
XC_API void XEle_SetFocus(HELE hEle,bool bFocus); //设置焦点
XC_API void XEle_SetId(HELE hEle,int id);
XC_API void XEle_SetFont(HELE hEle,HFONT hFont);
XC_API void XEle_SetBkColor(HELE hEle,COLORREF color); //设置背景颜色
XC_API void XEle_SetBorderColor(HELE hEle,COLORREF color); //设置边框颜色
XC_API void XEle_SetToolTips(HELE hEle,wchar_t *pText); //设置工具提示内容
XC_API void XEle_SetCapture(HELE hEle);   //设置元素鼠标捕获
XC_API const wchar_t* XEle_GetTooltips(HELE hEle);  //获取工具提示内容
XC_API HELE XEle_GetParentEle(HELE hEle);  //获取父元素句柄
XC_API int  XEle_GetChlidCout(HELE hEle);  //获取子元素数量,不包含子元素的子元素
XC_API HELE XEle_GetChlidByIndex(HELE hEle,int index);	//获取指定子元素
XC_API HWND XEle_GetHWnd(HELE hEle);  //获取窗口句柄
XC_API HWINDOW XEle_GetHWindow(HELE hEle); //获取窗口资源句柄
XC_API COLORREF XEle_GetBkColor(HELE hEle); //获取背景颜色
XC_API HFONT XEle_GetFont(HELE hEle); //获取字体
XC_API void XEle_ReleaseCapture(HELE hEle);   //释放元素鼠标捕获
XC_API void XEle_EnableEle(HELE hEle,bool bEnable); //元素是否有效
XC_API void XEle_EnableFocus(HELE hEle,bool bFocus); //开启焦点
XC_API void XEle_EnableToolTips(HELE hEle,bool bTip);  //启用工具提示
XC_API void XEle_EnableBorder(HELE hEle,bool bEnable); //绘制边框
XC_API bool XEle_AddEle(HELE hEle,HELE hNewEle,int flag=XC_ADDELE_END,HELE hDestEle=0,int index=0); //添加元素
XC_API void XEle_RemoveEle(HELE hEle);   //移除元素,但不销毁
XC_API void XEle_ReDrawEle(HELE hEle); //重绘元素 /remove
XC_API void XEle_ShowEle(HELE hEle,bool bShow);
XC_API bool XEle_IsBkTransparent(HELE hEle); //元素背景是否透明
XC_API bool XEle_IsFocus(HELE hEle); //元素是否拥有焦点
XC_API bool XEle_IsShowEle(HELE hEle); //元素是否显示
XC_API bool XEle_IsHitChildEle(HELE hEle,POINT *pPt); //判断是否点击在子元素上
XC_API bool XEle_IsChildEle(HELE hEle,HELE hChild);  //判断指定元素是否为子元素
XC_API void XEle_SetUserData(HELE hEle,int data);  //设置用户数据
XC_API int  XEle_GetUserData(HELE hEle);  //获取用户数据
XC_API void XEle_SetRect(HELE hEle,in_ RECT *pRect,bool bReDraw=false);
XC_API void XEle_GetClientRect(HELE hEle,out_ RECT *pRect);   //元素客户区坐标 xy(0,0) ,如果元素有边框,包含边框区域
XC_API void XEle_GetRect(HELE hEle,out_ RECT *pRect);         //基于父元素坐标
XC_API void XEle_GetWndClientRect(HELE hEle,out_ RECT *pRect); //元素基于窗口客户区坐标(不包含非客户区)
XC_API void XEle_GetWndNCClientRect(HELE hEle,out_ RECT *pRect); //元素基于窗口坐标(包含非客户区)
XC_API void XEle_PointToWnd(HELE hEle,in_out_ POINT *pPt);     //元素坐标点转换到窗口客户区坐标点(不包含非客户区)
XC_API void XEle_PointToNCWnd(HELE hEle,in_out_ POINT *pPt);   //元素坐标点转换到窗口坐标点(包含非客户区)
XC_API void XEle_PointWndToEle(HELE hEle,in_out_ POINT *pPt);  //窗口坐标转换到元素坐标,输入基于窗口坐标(包含非客户区),输出基于元素坐标
XC_API void XEle_RectToWnd(HELE hEle,in_out_ RECT *pRect); //元素坐标转换为窗口客户区坐标(不包含非客户区)
XC_API void XEle_RectToNCWnd(HELE hEle,in_out_ RECT *pRect); //元素坐标转换为窗口非客户区坐标(包含非客户区)
XC_API HELE XGBox_Create(int x, int y, int cx, int cy,wchar_t *pTitle,HXCGUI hParent=NULL); //创建
XC_API wchar_t *XGBox_GetText(HELE hEle);
XC_API void XGBox_SetText(HELE hEle,wchar_t *pText);
XC_API HIMAGE XImage_LoadFile(wchar_t *pImageName);
XC_API HIMAGE XImage_LoadRes(int id,wchar_t *pType);
XC_API HIMAGE XImage_LoadZip(wchar_t *pZipFileName,wchar_t *pImageName,wchar_t *pPassword=NULL);
XC_API int XImage_GetWidth(HIMAGE hImage);
XC_API int XImage_GetHeight(HIMAGE hImage);
XC_API void XImage_Destroy(HIMAGE hImage);
XC_API HXCGUI XImageList_Create(int cx,int cy);
XC_API void XImageList_Destroy(HXCGUI hImageList); //销毁
XC_API void XImageList_AddImage(HXCGUI hImageList,HIMAGE hImage); //添加图片
XC_API int  XImageList_GetWidth(HXCGUI hImageList);   //获取图片宽度
XC_API int  XImageList_GetHeight(HXCGUI hImageList);  //获取图片高度
XC_API int  XImageList_GetCount(HXCGUI hImageList);   //获取图片数量
XC_API void XImageList_DeleteIndex(HXCGUI hImageList,int index); //删除指定图片
XC_API void XImageList_DeleteAll(HXCGUI hImageList);  //删除全部图片
XC_API void XImageList_DrawImage(HXCGUI hImageList,HDC hdc,int index, int x, int y);
XC_API void XList_SetUserDrawItemEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info); //设置用户自绘列表项
XC_API void XList_SetUserDrawItemHeaderEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info); //设置用户自绘列表头项
XC_API HELE XList_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API bool XList_AddColumn(HELE hEle,int width, wchar_t *pText,int imageId=-1); //增加列
XC_API bool XList_AddItem(HELE hEle,wchar_t *pText, int imageId=-1);  //增加项
XC_API bool XList_InsertColumn(HELE hEle,int index,int width, wchar_t *pText,int imageId=-1);  //插入列
XC_API bool XList_InsertItem(HELE hEle,int index,wchar_t *pText, int imageId=-1);  //插入项
XC_API bool XList_SetItemText(HELE hEle,int item,int subItem,wchar_t *pText,int imageId=-1); //设置子项
XC_API bool XList_SetColumnWidth(HELE hEle,int index, int width);   //设置列宽
XC_API bool XList_SetItemImage(HELE hEle,int item,int subItem,int imageId);   //设置子项图片
XC_API void XList_SetImageList(HELE hEle,HXCGUI hImageList); //设置图片列表
XC_API void XList_SetItemHeight(HELE hEle,int height);  //设置项高度
XC_API bool XList_SetSelectItem(HELE hEle,int index);   //设置选择项
XC_API void XList_SetSelectItemAll(HELE hEle); //全选
XC_API void XList_SetSpacingLeft(HELE hEle,int spacing);  //设置内容左间距
XC_API void XList_SetSpacingRight(HELE hEle,int spacing); //设置内容右间距
XC_API void XList_SetItemData(HELE hEle,int index,int data);   //设置用户数据
XC_API int XList_GetItemImage(HELE hEle,int item,int subItem); //获取子项图片
XC_API HXCGUI XList_GetImageList(HELE hEle);  //获取图片列表
XC_API wchar_t* XList_GetItemText(HELE hEle,int index, int subItem); //获取项文本
XC_API int XList_GetItemHeight(HELE hEle);   //获取项高
XC_API int XList_GetHeaderHeight(HELE hEle);   //获取列表头高度
XC_API wchar_t *XList_GetHeaderItemText(HELE hEle,int index);  //获取列表头项文本
XC_API int XList_GetItemData(HELE hEle,int index);   //设置用户数据
XC_API int XList_GetSelectCount(HELE hEle);  //获取选择项数量
XC_API int XList_GetSelectItem(HELE hEle);    //获取选择项
XC_API void XList_GetSelectAllItem(HELE hEle,int *pArray, int arrayLength);  //获取所有选择项
XC_API int XList_GetItemCount(HELE hEle);   //获取项数量
XC_API void XList_CancelSelectAll(HELE hEle); //取消选择所有项
XC_API void XList_CancelSelect(HELE hEle,int index); //取消选择指定项
XC_API bool XList_DeleteItem(HELE hEle,int index);  //删除项
XC_API bool XList_DeleteColumn(HELE hEle,int index);  //删除列
XC_API void XList_DeleteAllItems(HELE hEle);  //删除所有项
XC_API void XList_DeleteAllColumns(HELE hEle);   //删除所有列
XC_API void XList_EnableGrid(HELE hEle,bool bGrid); //启用网格样式
XC_API int  XList_HitTest(HELE hEle,POINT *pPt);  //测试鼠标点在哪个项上,-1没有在任何项上
XC_API void XList_ShowHeader(HELE hEle,bool bShow);//显示隐藏列表头
XC_API void XList_SetUserDrawItem(HELE hEle,pFunList_DrawItem pFunDrawItem); //设置用户自绘列表项
XC_API void XList_SetUserDrawItemHeader(HELE hEle,pFunListHeader_DrawItem pFunDrawItem); //设置用户自绘列表头项
XC_API void XList_EnableCheckBox(HELE hEle,bool bEnable); //启用复选框
XC_API void XList_EnableMultilineSelect(HELE hEle,bool bEnable);  //启用关闭多行选择 XEdit_EnableMultiLine
XC_API bool XList_IsItemCheck(HELE hEle,int index); //判断项的复选框是否勾选
XC_API void XList_SetItemCheck(HELE hEle,int index, bool bCheck); //设置项的复选框
XC_API void XListBox_SetUserDrawItemEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info); //设置用户自绘列表框项
XC_API HELE XListBox_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API int XListBox_AddString(HELE hEle,wchar_t *pText,int imageId=-1);  //增加一个字符串到列表
XC_API wchar_t* XListBox_GetItemText(HELE hEle,int index);   //获取指定行文本
XC_API int  XListBox_GetItemHeight(HELE hEle);              //获取行高
XC_API int  XListBox_GetSelectItem(HELE hEle);              //获取选择行
XC_API int  XListBox_GetItemImage(HELE hEle,int index); //获取项图标ID
XC_API HXCGUI XListBox_GetImageList(HELE hEle); //获取图片列表
XC_API void XListBox_SetItemText(HELE hEle,int index, wchar_t *pText);  //设置指定行文本
XC_API void XListBox_SetSelectItem(HELE hEle,int index);    //设置选择行
XC_API void XListBox_SetItemHeight(HELE hEle,int height);   //设置行高
XC_API void XListBox_SetImageList(HELE hEle,HXCGUI hImageList); //设置图标列表
XC_API void XListBox_SetItemImage(HELE hEle,int index,int imageId); //设置项图标ID
XC_API void XListBox_DeleteItem(HELE hEle,int index);  //删除行
XC_API void XListBox_DeleteAll(HELE hEle);  //删除所有行
XC_API void XListBox_Adjust(HELE hEle);
XC_API void XListBox_SetUserDrawItem(HELE hEle,pFunListBox_DrawItem pFunDrawItem); //设置用户自绘列表框项
XC_API void XListBox_EnableCheckBox(HELE hEle,bool bEnable); //启用复选框
XC_API bool XListBox_IsItemCheck(HELE hEle,int index);      //判断项的复选框是否勾选
XC_API void XListBox_SetItemCheck(HELE hEle,int index, bool bCheck); //设置项的复选框
XC_API HMENUX XMenu_Create();
XC_API void XMenu_AddItem(HMENUX hMenu,int id,wchar_t *pText,int parentId=XMENU_ROOT,int uFlags=0); //添加菜单项
XC_API void XMenu_AddItemImage(HMENUX hMenu,int id,wchar_t *pText,int parentId,int uFlags,HIMAGE hImage);
XC_API void XMenu_InsertItem(HMENUX hMenu,int id,wchar_t *pText,int uFlags,int insertID);
XC_API void XMenu_InsertItemImage(HMENUX hMenu,int id,wchar_t *pText,int uFlags,HIMAGE hImage,int insertID);
XC_API void XMenu_DeleteItem(HMENUX hMenu,int id);
XC_API void XMenu_SetAutoDestroy(HMENUX hMenu,bool bAuto); //是否自动销毁对象,默认弹出菜单关闭后自动销毁
XC_API void XMenu_SetItemHeight(HMENUX hMenu,int height); //设置菜单项高度
XC_API int  XMenu_GetItemHeight(HMENUX hMenu);  //获取菜单项高度
XC_API int  XMenu_GetItemCount(HMENUX hMenu); //获取菜单项数量,包含子菜单项
XC_API void XMenu_CloseMenu(HMENUX hMenu);
XC_API bool XMenu_Popup(HMENUX hMenu,HWND hParentWnd,int x,int y,HELE hParentEle=NULL,int uFlags=NULL); //弹出菜单
XC_API void XMenu_Destroy(HMENUX hMenu);
XC_API HELE XMenuBar_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);  //创建按钮
XC_API int XMenuBar_AddButton(HELE hEle,wchar_t *pText);     //增加弹出菜单按钮
XC_API int XMenuBar_InsertButton(HELE hEle,wchar_t *pText,int index);     //插入弹出菜单按钮
XC_API void XMenuBar_AddMenuItem(HELE hEle,int index,int id,wchar_t *pText,int parentId=XMENU_ROOT,int uFlags=0);
XC_API void XMenuBar_AddMenuItemImage(HELE hEle,int index,int id,wchar_t *pText,int parentId,int uFlags,HIMAGE hImage); //增加菜单项
XC_API void XMenuBar_InsertMenuItem(HELE hEle,int index,int id,wchar_t *pText,int uFlags,int insertID); //插入菜单项,插入到ID为insertID菜单项前面位置
XC_API void XMenuBar_InsertMenuItemImage(HELE hEle,int index,int id,wchar_t *pText,int uFlags,HIMAGE hImage,int insertID); //增加菜单项
XC_API void XMenuBar_DeleteMenuItem(HELE hEle,int index,int id); //删除菜单项
XC_API void XMenuBar_SetButtonHeight(HELE hEle,int height); //设置弹出菜单按钮高度
XC_API HELE XMenuBar_GetButton(HELE hEle,int index);  //获取弹出菜单按钮句柄
XC_API void XMenuBar_DeleteButton(HELE hEle,int index); //删除菜单项并且销毁,同时该按钮下的弹出菜单也被销毁
XC_API void XMenuBar_SetImage(HELE hEle,HIMAGE hImage=NULL);
XC_API void XMenuBar_EnableImageStretch(HELE hEle,bool bStretch); //启用贴图缩放
XC_API HWINDOW XModalWnd_CreateWindow(int width,int height,wchar_t *pTitle,HWND hWndParent);//基于父窗口坐标
XC_API int XModalWnd_DoModal(HWINDOW hWindow);     //启动模态窗口
XC_API void XModalWnd_DoOk(HWINDOW hWindow);       //确定
XC_API void XModalWnd_DoCancel(HWINDOW hWindow);   //取消
XC_API int XMessageBox(HXCGUI hXCGUI, wchar_t *pText, wchar_t *pCaption=L"炫彩界面库-提示框",int type=XMB_OK);
XC_API HELE XMonthCal_Create(int x, int y,int cx,int cy,HXCGUI hParent=NULL);
XC_API void XMonthCal_SetSpacingLeft(HELE hEle,int left); //左对齐间距
XC_API void XMonthCal_SetSpacingTop(HELE hEle,int top); //上对齐间距
XC_API void XMonthCal_SetDate(HELE hEle,int year,int month,int day);  //设置时间
XC_API int XMonthCal_GetYear(HELE hEle);
XC_API int XMonthCal_GetMonth(HELE hEle);
XC_API int XMonthCal_GetDay(HELE hEle);
XC_API HELE XDateTime_Create(int x, int y,int cx,int cy,HXCGUI hParent=NULL);
XC_API void XDateTime_SetDate(HELE hEle,int year,int month,int day);  //设置时间
XC_API int XDateTime_GetYear(HELE hEle);
XC_API int XDateTime_GetMonth(HELE hEle);
XC_API int XDateTime_GetDay(HELE hEle);
XC_API HELE XDateTime_GetButton(HELE hEle);  //获取下拉按钮
XC_API void XDateTime_SetImage(HELE hEle,HIMAGE hImage);
XC_API void XDateTime_EnableImageStretch(HELE hEle,bool bStretch); //启用贴图缩放
XC_API void XDateTime_SetBorderColor(HELE hEle,COLORREF color); //设置边框颜色
XC_API HELE XOutlook_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API void XOutlook_AddView(HELE hEle,HELE hView,wchar_t *pTitle);
XC_API void XOutlook_Adjust(HELE hEle);
XC_API void XOutlook_Expand(HELE hEle,int index);  //展开指定项
XC_API int XOutlook_GetExpand(HELE hEle); //获取当前展开的项索引
XC_API HELE XPic_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API void XPic_SetImage(HELE hEle,HIMAGE hImage);  //设置图片
XC_API void XPic_EnableImageStretch(HELE hEle,bool bStretch); //启用图片缩放
XC_API HELE XProgBar_Create(int x, int y, int cx, int cy,bool bHorizon,HXCGUI hParent=NULL);
XC_API void XProgBar_SetRange(HELE hEle,int range);  //设置范围
XC_API void XProgBar_SetPos(HELE hEle,int pos);   //设置当前位置
XC_API int  XProgBar_GetRange(HELE hEle);
XC_API int  XProgBar_GetPos(HELE hEle);
XC_API void XProgBar_SetHorizon(HELE hEle,bool bHorizon); //水平显示或垂直
XC_API void XProgBar_EnablePercent(HELE hEle,bool bPercent); //显示百分比
XC_API HELE XPGrid_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API int XPGrid_AddGroup(HELE hEle,wchar_t *pName,bool bExpand=true); //添加分组
XC_API int XPGrid_AddItem(HELE hEle,wchar_t *pName,int type,int groupID=-1); //添加项
XC_API int XPGrid_AddItemString(HELE hEle,wchar_t *pName,wchar_t *pValue,int groupID=-1); //添加项
XC_API HELE XPGrid_GetItemHEle(HELE hEle,int itemID);
XC_API bool XPGrid_SetItemString(HELE hEle,int itemID,wchar_t *pText);
XC_API bool XPGrid_SetItemColor(HELE hEle,int itemID,COLORREF color);
XC_API void XPGrid_GetItemValue(HELE hEle,int itemID,wchar_t *pOut,int len);
XC_API void XPGrid_DeleteItem(HELE hEle,int itemID);   //删除项
XC_API void XPGrid_DeleteGroup(HELE hEle,int groupID);  //删除组
XC_API void XPGrid_DeleteAll(HELE hEle);  //删除所有
XC_API void XPGrid_SetSpacePoint(HELE hEle,int point);//设置分隔线基于X坐标位置
XC_API int XPGrid_GetSelectItem(HELE hEle); //获取当前选择项
XC_API HELE XPPage_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API int XPPage_AddLable(HELE hEle,wchar_t *pName,HELE hPage=NULL); //插入一个标签
XC_API int XPPage_InsertLable(HELE hEle,int index,wchar_t *pName,HELE hPage=NULL);
XC_API void XPPage_Adjust(HELE hEle);
XC_API bool XPPage_SetBindEle(HELE hEle,int index,HELE hPage); //绑定视图元素到标签
XC_API void XPPage_SetLableHeight(HELE hEle,int height);  //设置标签高度
XC_API void XPPage_SetSelect(HELE hEle,int index);   //设置选择标签
XC_API void XPPage_SetLableText(HELE hEle,int index,wchar_t *pText);  //设置标签文本
XC_API int  XPPage_GetSelect(HELE hEle);  //获取选择的标签
XC_API int  XPPage_GetLableHeight(HELE hEle);  //获取标签高度
XC_API wchar_t  *XPPage_GetLableText(HELE hEle,int index);  //获取文本
XC_API HELE XPPage_GetLable(HELE hEle,int index);//获取标签按钮Button
XC_API int XPPage_GetPageIndex(HELE hEle,HELE hPage); //检索绑定页对应标签索引
XC_API void XPPage_DeleteLable(HELE hEle,int index,bool deletePage=false);  //删除
XC_API void XPPage_DeleteLableAll(HELE hEle,bool deletePage=false);  //删除所有TAB
XC_API void XPPage_SetLableSpacing(HELE hEle,int spacing);//设置标签间距, 0没有间距
XC_API void XPPage_SetBorderColor(HELE hEle,COLORREF color); //绘制边框颜色
XC_API HELE XRadio_Create(int x, int y, int cx, int cy,wchar_t *pTitle=NULL,HXCGUI hParent=NULL);  //创建按钮
XC_API void XRadio_SetImageLeave_UnCheck(HELE hEle,HIMAGE hImage=NULL);  //鼠标离开时图片  未选择
XC_API void XRadio_SetImageStay_UnCheck(HELE hEle,HIMAGE hImage=NULL);   //鼠标停留时图片  未选择
XC_API void XRadio_SetImageDown_UnCheck(HELE hEle,HIMAGE hImage=NULL);   //鼠标按下时图片  未选择
XC_API void XRadio_SetImageDisable_UnCheck(HELE hEle,HIMAGE hImage=NULL); //按钮禁用状态图片  未选择
XC_API void XRadio_SetImageLeave_Check(HELE hEle,HIMAGE hImage=NULL);  //鼠标离开时图片  选择
XC_API void XRadio_SetImageStay_Check(HELE hEle,HIMAGE hImage=NULL);   //鼠标停留时图片  选择
XC_API void XRadio_SetImageDown_Check(HELE hEle,HIMAGE hImage=NULL);   //鼠标按下时图片  选择
XC_API void XRadio_SetImageDisable_Check(HELE hEle,HIMAGE hImage=NULL); //按钮禁用状态图片  选择
XC_API HELE XSBar_Create(int x, int y, int cx, int cy,bool bHorizon,HXCGUI hParent=NULL);
XC_API bool XSBar_ScrollUp(HELE hEle);          //向左滚动
XC_API bool XSBar_ScrollDown(HELE hEle);        //向右滚动
XC_API bool XSBar_ScrollPos(HELE hEle,int pos); //滚动到指定点
XC_API void XSBar_Adjust(HELE hEle);            //调整滚动条
XC_API void XSBar_SetScrollRange(HELE hEle,int range);
XC_API int XSBar_GetButtonLength(HELE hEle); //按钮长度
XC_API int XSBar_GetSliderLength(HELE hEle); //滑块长度
XC_API void XSBar_SetSliderLength(HELE hEle,int length); //设置滑块长度
XC_API void XSBar_SetHorizon(HELE hEle,bool bHorizon);  //水平显示或垂直
XC_API int XSBar_GetScrollPos(HELE hEle); //获取当前滚动点
XC_API void XSBar_SetImage(HELE hEle,HIMAGE hImage);     //设置背景图片
XC_API void XSBar_EnableImageStretch(HELE hEle,bool bStretch); //启用贴图缩放,对背景贴图有效
XC_API void XSBar_SetImageLeaveUp(HELE hEle,HIMAGE hImage);
XC_API void XSBar_SetImageStayUp(HELE hEle,HIMAGE hImage);
XC_API void XSBar_SetImageDownUp(HELE hEle,HIMAGE hImage);
XC_API void XSBar_SetImageLeaveDown(HELE hEle,HIMAGE hImage);
XC_API void XSBar_SetImageStayDown(HELE hEle,HIMAGE hImage);
XC_API void XSBar_SetImageDownDown(HELE hEle,HIMAGE hImage);
XC_API void XSBar_SetImageLeaveSlider(HELE hEle,HIMAGE hImage);
XC_API void XSBar_SetImageStaySlider(HELE hEle,HIMAGE hImage);
XC_API void XSBar_SetImageDownSlider(HELE hEle,HIMAGE hImage);
XC_API void XSView_SetDrawScrollViewEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info);
XC_API HELE XSView_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API void XSView_SetDrawScrollView(HELE hEle,pFunDrawScrollView pFun);
XC_API int XSView_GetHViewPos(HELE hEle);   //获取视口原点X坐标
XC_API int XSView_GetVViewPos(HELE hEle);   //获取视口原点Y坐标
XC_API int XSView_GetSpacingLeft(HELE hEle);
XC_API int XSView_GetSpacingTop(HELE hEle);
XC_API int XSView_GetSpacingRight(HELE hEle);
XC_API int XSView_GetSpacingBottom(HELE hEle);
XC_API int XSView_GetScrollBarWidth(HELE hEle);  //获取滚动条宽度
XC_API int XSView_GetViewWidth(HELE hEle);  //获取视口宽度(不含边框间隔及滚动条)
XC_API int XSView_GetViewHeight(HELE hEle); //获取视口高度(不含边框间隔及滚动条)
XC_API int XSView_GetHSizeTotalAccurate(HELE hEle); //获取内容总宽度,精确的(不含边框间隔及滚动条)
XC_API int XSView_GetVSizeTotalAccurate(HELE hEle); //获取内容总高度,精确的(不含边框间隔及滚动条)
XC_API void XSView_GetViewRect(HELE hEle,out_ RECT *pRect); //获取视口坐标(不含边框间隔),left为视口左间隔大小,top为视口上间隔大小,非(0,0).
XC_API HELE XSView_GetHScrollBar(HELE hEle); //获取水平滚动条
XC_API HELE XSView_GetVScrollBar(HELE hEle); //获取垂直滚动条
XC_API void XSView_SetSize(HELE hEle,int cx, int cy); //设置视图内容总大小(不包含边框间隔)
XC_API void XSView_SetSpacing(HELE hEle,int left, int top, int right, int bottom);  
XC_API void XSView_SetScrollSize(HELE hEle,int line,int column);  //设置滚动行和列大小
XC_API void XSView_SetImage(HELE hEle,HIMAGE hImage);//设置贴图
XC_API void XSView_SetBorderColor(HELE hEle,COLORREF color);  //设置边框颜色
XC_API void XSView_EnableImageStretch(HELE hEle,bool bStretch); //启用贴图缩放
XC_API void XSView_EnableHScroll(HELE hEle,bool b); //启用水平滚动条
XC_API void XSView_EnableVScroll(HELE hEle,bool b); //启用垂直滚动条
XC_API bool XSView_IsHScrollBarVisible(HELE hEle); //水平滚动条当前是否可见
XC_API bool XSView_IsVScrollBarVisible(HELE hEle); //垂直滚动条当前是否可见
XC_API void XSView_Adjust(HELE hEle);
XC_API bool XSView_ScrollHPos(HELE hEle,int pos); //滚动到指定点
XC_API bool XSView_ScrollVPos(HELE hEle,int pos); //滚动到指定点
XC_API bool XSView_ScrollLeft(HELE hEle);    //向左滚动
XC_API bool XSView_ScrollRight(HELE hEle);   //向右滚动
XC_API bool XSView_ScrollUp(HELE hEle);      //向上滚动
XC_API bool XSView_ScrollDown(HELE hEle);    //向下滚动
XC_API HELE XSliderBar_Create(int x, int y, int cx, int cy,bool bHorizon,HXCGUI hParent=NULL);
XC_API void XSliderBar_SetRange(HELE hEle,int range);  //设置滑动范围
XC_API void XSliderBar_SetPos(HELE hEle,int pos);     //设置滑块位置
XC_API int  XSliderBar_GetPos(HELE hEle);            //获取滑块位置
XC_API HELE XSliderBar_GetButton(HELE hEle);      //获取滑块指针
XC_API void XSliderBar_SetHorizon(HELE hEle,bool bHorizon);  //水平显示或垂直
XC_API void XSliderBar_SetImage(HELE hEle,HIMAGE hImage);
XC_API void XSliderBar_EnableImageStretch(HELE hEle,bool bStretch); //启用贴图缩放
XC_API HELE XStatic_Create(int x, int y, int cx, int cy,wchar_t *pTitle=NULL,HXCGUI hParent=NULL);
XC_API void XStatic_SetText(HELE hEle,wchar_t *pText);
XC_API wchar_t* XStatic_GetText(HELE hEle);
XC_API HSTRING XStr_Create();
XC_API void XStr_Destroy(HSTRING hStr);
XC_API void XStr_Insert(HSTRING hStr,int index,wchar_t ch);  //插入
XC_API void XStr_Inserts(HSTRING hStr,int index,wchar_t *pStr);
XC_API void XStr_SetString(HSTRING hStr, wchar_t *pStr); //设置文本
XC_API void XStr_AddString(HSTRING hStr, wchar_t *pStr); //添加文本到末尾
XC_API void XStr_AddStringLength(HSTRING hStr, wchar_t *pStr, int strLen); //添加文本到末尾
XC_API void XStr_SetLength(HSTRING hStr,int length); //设置字符串长度,多余的字符去掉
XC_API void XStr_Replace(HSTRING hStr,wchar_t *pStrOld,wchar_t *pStrNew); //字符串替换 Replace
XC_API wchar_t* XStr_GetBuffer(HSTRING hStr);
XC_API int XStr_GetLength(HSTRING hStr);
XC_API wchar_t*  XStr_Find(HSTRING hStr,wchar_t ch, int strart=0); //查找字符
XC_API void XStr_SetAt(HSTRING hStr,int index, wchar_t ch);//设置指定位置的一个字符
XC_API wchar_t XStr_GetAt(HSTRING hStr,int index); //获取指定位置的一个字符
XC_API void XStr_Empty(HSTRING hStr);    //清空
XC_API bool XStr_IsEmpty(HSTRING hStr);  //判断是否为空
XC_API void XStr_Delete(HSTRING hStr,wchar_t ch); //删除ch,全部ch删除
XC_API void XStr_DeleteLength(HSTRING hStr,int index, int count=1); //从index位置删除count个字符
XC_API void XStr_DeleteFront(HSTRING hStr, int index); //删除指定位置之后的字符串
XC_API void XStr_DeleteBack(HSTRING hStr, int index);  //删除指定位置之前的字符串
XC_API HELE XToolBarBtn_Create(int cx,int cy,wchar_t *pTitle,int style=XTOOLBARBTN_ICO_LEFT);
XC_API void XToolBarBtn_SetIconSize(HELE hEle,int width,int height); //设置图标大小
XC_API void XToolBarBtn_Adjust(HELE hEle);  //调整到合适大小, 在添加到工具条上之后才可调用,因为需要知道工具条大小后才能做调整
XC_API void XToolBarBtn_SetImageSmall(HELE hEle,HIMAGE hImage);  //设置图标
XC_API void XToolBarBtn_SetImageSmallDisable(HELE hEle,HIMAGE hImage);  //设置禁用状态图片
XC_API HELE XToolBar_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API int XToolBar_InsertEle(HELE hEle,HELE hNewEle,int index=-1); //添加元素到工具条, -1插入到末尾
XC_API int XToolBar_InsertSeparator(HELE hEle,int index=-1); //添加分隔符, -1插入到末尾
XC_API HELE XToolBar_GetHELE(HELE hEle,int index);  //获取工具条上元素句柄
XC_API HELE XToolBar_GetButtonLeft(HELE hEle);   //获取工具条左滚动按钮Button
XC_API HELE XToolBar_GetButtonRight(HELE hEle);  //获取工具条右滚动按钮Button
XC_API void XToolBar_DeleteEle(HELE hEle,int index); //移除工具条上元素并销毁
XC_API void XToolBar_Adjust(HELE hEle);          //调整布局
XC_API void XToolBar_SetImage(HELE hEle,HIMAGE hImage);
XC_API void XToolBar_EnableImageStretch(HELE hEle,bool bStretch); //启用贴图缩放
XC_API void XTree_SetUserDrawItemEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info); //设置用户自绘项
XC_API HELE XTree_Create(int x, int y, int cx, int cy,HXCGUI hParent=NULL);
XC_API int XTree_InsertItem(HELE hEle,wchar_t *pText, int parentId=XTREE_ROOT,int imageId=-1, int selectImageId=-1,int insertAfter=XTREE_INSERT_LAST,bool bExpand=true); //插入项
XC_API void XTree_EnableButton(HELE hEle,bool bShow);    //显示按钮
XC_API void XTree_EnableLine(HELE hEle,bool bShow);      //显示连接虚线
XC_API void XTree_EnableRootLine(HELE hEle,bool bShow);  //启用连接根部的线
XC_API bool XTree_IsButton(HELE hEle);
XC_API bool XTree_IsLine(HELE hEle);
XC_API bool XTree_IsRootLine(HELE hEle);
XC_API bool XTree_IsExpand(HELE hEle,int id); //判断指定项是否展开
XC_API void XTree_SetSpacingLeft(HELE hEle,int left);   //设置左间隔
XC_API void XTree_SetSpacingTop(HELE hEle,int top);     //设置上间隔
XC_API void XTree_SetImageList(HELE hEle,HXCGUI hImageList); //设置图片列表
XC_API void XTree_SetItemData(HELE hEle,int id, int data);   //设置用户数据
XC_API void XTree_SetExpandButtonSize(HELE hEle,int size);   //设置展开按钮大小
XC_API void XTree_SetIndentation(HELE hEle,int width);  //设置子项缩进宽度
XC_API void XTree_SetSelectItem(HELE hEle,int id);     //设置选择项
XC_API void XTree_SetItemText(HELE hEle,int id, wchar_t *pText);//设置项文本
XC_API void XTree_SetItemImage(HELE hEle,int id, int imageId);  //设置项图片
XC_API void XTree_SetItemHeight(HELE hEle,int height); //设置项高度
XC_API int XTree_GetItemData(HELE hEle,int id); //获取用户数据
XC_API int XTree_GetItemHeight(HELE hEle);      //获取项高度
XC_API int XTree_GetSelectItem(HELE hEle);   //获取当前选择的项
XC_API int XTree_GetParentItem(HELE hEle,int id); //获取指定项的父项
XC_API int XTree_GetChildItem(HELE hEle,int id);  //获取指定项的子项
XC_API int XTree_GetNextSiblingItem(HELE hEle,int id); //获取指定项的下一个兄弟项
XC_API int XTree_GetPrevSiblingItem(HELE hEle,int id); //获取指定项的上一个兄弟项
XC_API int XTree_GetFirstItem(HELE hEle); //获取第一个节点
XC_API int XTree_GetItemImage(HELE hEle,int id);  //获取项图片
XC_API wchar_t* XTree_GetItemText(HELE hEle,int id); //获取项文本
XC_API HXCGUI XTree_GetImageList(HELE hEle); //获取图片列表
XC_API void XTree_Expand(HELE hEle,int id, bool b); //展开收缩指定项
XC_API void XTree_DeleteItem(HELE hEle,int id); //删除一个项
XC_API void XTree_DeleteAllItems(HELE hEle); //清空树
XC_API int XTree_HitTest(HELE hEle,POINT *pPt);  //测试点击位置,返回项ID
XC_API void XTree_SetUserDrawItem(HELE hEle,pFunTree_DrawItem pFunDrawItem); //设置用户自绘项
XC_API void XTree_EnableCheckBox(HELE hEle, bool bEnable);//启用复选框
XC_API bool XTree_IsItemCheck(HELE hEle,int id); //判断项的复选框是否勾选
XC_API void XTree_SetItemCheck(HELE hEle,int id, bool bCheck); //设置项的复选框
XC_API void XWnd_RegisterMessageEx(HWINDOW hWindow,int message,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info);  //注册消息回调函数
XC_API void XWnd_RegisterNCMessageEx(HWINDOW hWindow,int message,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info); //注册非客户区消息
XC_API void XWnd_RegisterMsgProcEx(HWINDOW hWindow,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info);	//注册窗口消息处理过程
XC_API HWINDOW XWnd_CreateWindow(int x,int y,int cx,int cy,wchar_t *pTitle,HWND hWndParent=NULL,int XCStyle=XC_SY_MINIMIZE | XC_SY_MAXIMIZE | XC_SY_CLOSE | XC_SY_CAPTION | XC_SY_BORDER | XC_SY_ROUND | XC_SY_CENTER);
XC_API HWINDOW XWnd_CreateWindowEx(DWORD dwExStyle, wchar_t* lpClassName,wchar_t* lpWindowName,DWORD dwStyle, int x,int y,int cx,int cy,HWND hWndParent,int XCStyle=XC_SY_MINIMIZE | XC_SY_MAXIMIZE | XC_SY_CLOSE | XC_SY_CAPTION | XC_SY_BORDER | XC_SY_ROUND | XC_SY_CENTER);
XC_API void XWnd_RegisterMessage(HWINDOW hWindow,int message,void *pFun);  //注册消息回调函数
XC_API void XWnd_RegisterNCMessage(HWINDOW hWindow,int message,void *pFun); //注册非客户区消息
XC_API void XWnd_RegisterMsgProc(HWINDOW hWindow,pFunWndProc pFun);	//注册窗口消息处理过程
XC_API void XWnd_GetDrawRect(HWINDOW hWindow,out_ RECT *pRect);//获取当前绘制区域(包含非客户区)
XC_API HELE XWnd_GetFocusEle(HWINDOW hWindow); //获取拥有焦点的元素
XC_API HWND XWnd_GetHWnd(HWINDOW hWindow); //获取窗口句柄
XC_API HELE XWnd_GetEle(HWINDOW hWindow,int eleID); //通过ID获取元素句柄
XC_API int XWnd_GetWindowText(HWINDOW hWindow,wchar_t *pOut,int len);
XC_API bool XWnd_SetWindowText(HWINDOW hWindow,wchar_t *pText);
XC_API void XWnd_SetFont(HWINDOW hWindow,HFONT hFont);
XC_API DWORD XWnd_SetIcon(HWINDOW hWindow,HICON hIcon,bool bBigIcon);
XC_API UINT_PTR XWnd_SetTimer(HWINDOW hWindow,UINT_PTR nIDEvent,UINT uElapse); //设置定时器
XC_API void XWnd_SetMinWidth(HWINDOW hWindow,int width);  //设置窗口最小宽度
XC_API void XWnd_SetMinHeight(HWINDOW hWindow,int height); //设置窗口最小高度
XC_API void XWnd_AddEle(HWINDOW hWindow,HELE hEle);
XC_API void XWnd_NCAddEle(HWINDOW hWindow,HELE hEle); //添加到非客户区
XC_API void XWnd_AddMenuBar(HWINDOW hWindow,HELE hEle); //添加工具条
XC_API void XWnd_AddToolBar(HWINDOW hWindow,HELE hEle); //添加工具条
XC_API void XWnd_MaximizeWnd(HWINDOW hWindow,bool bMax); //最大化 还原窗口
XC_API bool XWnd_IsMaximizeWnd(HWINDOW hWindow);  //窗口是否最大化
XC_API void XWnd_ReDrawWndRect(HWINDOW hWindow,RECT *pRect,bool bImmediately=false); //重绘窗口指定区域
XC_API void XWnd_ReDrawWnd(HWINDOW hWindow,bool bImmediately=false); //重绘窗口
XC_API void XWnd_EnableDragBorder(HWINDOW hWindow,bool bDrag);  //使用拖动边框
XC_API HELE XWnd_GetButtonMin(HWINDOW hWindow);   //最小化按钮
XC_API HELE XWnd_GetButtonMax(HWINDOW hWindow);   //最大化按钮
XC_API HELE XWnd_GetButtonClose(HWINDOW hWindow); //关闭按钮
XC_API void XWnd_EnableMinButton(HWINDOW hWindow,bool bEnable,bool bReDraw=false); //启用最小化按钮
XC_API void XWnd_EnableMaxButton(HWINDOW hWindow,bool bEnable,bool bReDraw=false); //启用最大化按钮
XC_API void XWnd_EnableCloseButton(HWINDOW hWindow,bool bEnable,bool bReDraw=false);  //启用关闭按钮
XC_API void XWnd_EnableRound(HWINDOW hWindow,bool bEnable,bool bReDraw=false); //圆角功能的启用与关闭
XC_API void XWnd_SetImage(HWINDOW hWindow,HIMAGE hImage=NULL);    //客户区图片
XC_API void XWnd_SetImageNC(HWINDOW hWindow,HIMAGE hImage=NULL);  //非客户区窗口图片
XC_API void XWnd_SetImageCaption(HWINDOW hWindow,HIMAGE hImage=NULL);   //标题栏图片
XC_API void XWnd_SetImageBorderLeft(HWINDOW hWindow,HIMAGE hImage=NULL);    //边框图片
XC_API void XWnd_SetImageBorderRight(HWINDOW hWindow,HIMAGE hImage=NULL);    //边框图片
XC_API void XWnd_SetImageBorderBottom(HWINDOW hWindow,HIMAGE hImage=NULL);    //边框图片
XC_API void XWnd_SetBkColor(HWINDOW hWindow,COLORREF color); //设置背景颜色
XC_API void XWnd_EnableImageStretch(HWINDOW hWindow,bool bStretch);        //客户区图片缩放
XC_API void XWnd_EnableImageNCStretch(HWINDOW hWindow,bool bStretch);      // 非客户区图片缩放
XC_API void XWnd_EnableImageCaptionStretch(HWINDOW hWindow,bool bStretch); //标题栏图片缩放
XC_API void XWnd_EnableImageBorderLeftStretch(HWINDOW hWindow,bool bStretch);  //边框图片缩放
XC_API void XWnd_EnableImageBorderRightStretch(HWINDOW hWindow,bool bStretch);
XC_API void XWnd_EnableImageBorderBottomStretch(HWINDOW hWindow,bool bStretch);
XC_API void XWnd_EnableBorderStrokeInner(HWINDOW hWindow,bool bStroke); //启用绘制描边 内
XC_API void XWnd_EnableBorderStrokeOuter(HWINDOW hWindow,bool bStroke); //启用绘制描边 外
XC_API void XWnd_SetBorderStrokeInnerColor(HWINDOW hWindow,COLORREF color1,COLORREF color2); //设置描边颜色 内
XC_API void XWnd_SetBorderStrokeOuterColor(HWINDOW hWindow,COLORREF color1,COLORREF color2); //设置描边颜色 外
XC_API void XWnd_CreateCaret(HWINDOW hWindow,HELE hEle, int width, int height);//创建插入符
XC_API void XWnd_SetCaretPos(HWINDOW hWindow,int x,int y); //设置插入符位置
XC_API void XWnd_ShowCaret(HWINDOW hWindow,bool bShow);  //显示插入符
XC_API void XWnd_DestroyCaret(HWINDOW hWindow);    //销毁插入符
XC_API bool XWnd_GetClientRect(HWINDOW hWindow,out_ RECT *pRect); //获取客户区坐标(左上角0,0)
XC_API void XWnd_GetNCClientRect(HWINDOW hWindow,out_ RECT *pRect); //非客户区坐标,整个窗口坐标(左上角0,0)
XC_API int XWnd_GetClientLeft(HWINDOW hWindow); //客户区左间距
XC_API int XWnd_GetClientTop(HWINDOW hWindow);  //客户区上间距
XC_API int XWnd_GetClientRight(HWINDOW hWindow); //客户区右间距
XC_API int XWnd_GetClientBottom(HWINDOW hWindow); //客户区下间距
XC_API int XWnd_GetCaptionHeight(HWINDOW hWindow); //获取标题栏高度
XC_API void XWnd_SetBorderSize(HWINDOW hWindow,int left,int top,int right,int bottom); //设置窗口边框大小
XC_API void XWnd_SetCaptionHeight(HWINDOW hWindow,int captionHeight); //设置标题栏高度
XC_API void XWnd_WindowToClientRect(HWINDOW hWindow,in_out_ RECT *pRect); //窗口非客户区坐标转换到客户区坐标
XC_API void XWnd_WindowToClientPt(HWINDOW hWindow,in_out_ POINT *pPt); //窗口非客户区点转换到客户区坐标点
XC_API BOOL XWnd_ShowWindow(HWINDOW hWindow,int nCmdShow);
XC_API BOOL XWnd_SetWindowPos(HWINDOW hWindow,HWND hWndInsertAfter,int x,int y,int cx,int cy,UINT uFlags);
XC_API int XC_GetObjectType(HXCGUI hXCGUI); //获取资源类型
XC_API bool XC_IsSViewExtend(HELE hEle);  //判断元素是否从滚动视图元素扩展的新元素,包含滚动视图元素
XC_API bool XC_RegisterWndClass(wchar_t *pClassName,HICON hIcon=NULL); //注册窗口类
XC_API bool XInitXCGUI();
XC_API void XRunXCGUI();
XC_API void xtrace(char *pszFormat, ...);
XC_API void xtracew(wchar_t *pszFormat, ...);
XC_API void SSLWnd_Init(char *SS);
XC_API HWINDOW XC_LoadXML_Window(wchar_t *pFileName,HXMLRES hXmlRes=NULL,HWND hWndParent=NULL);
XC_API bool XC_LoadXML_Style(HWINDOW hWindow,wchar_t *pFileName,HXMLRES hXmlRes=NULL);
XC_API HXMLRES XXmlRes_Load(wchar_t *pFileName);
XC_API void XXmlRes_Destroy(HXMLRES hXmlRes);
XC_API int XXmlRes_FindID(HXMLRES hXmlRes,wchar_t *pName);
XC_API void XXmlRes_FindImage(HXMLRES hXmlRes,wchar_t *pName,out_ wchar_t *pOut,int outLen);


}


#ifdef	XCGUI_PLUS  //C++类支持,对类成员函数注册的支持


extern "C"
{
extern XC_API void *XEle_Malloc(int size);
extern XC_API void XEle_RegisterMessageEx(HELE hEle,int message,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info);
extern XC_API void XEle_RegisterEventEx(HELE hEle,int type,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info);
extern XC_API void XEle_RegisterMsgProcEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info);    
extern XC_API void XEle_RegisterEventProcEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info);  

extern XC_API void XWnd_RegisterMessageEx(HWINDOW hWindow,int message,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info);  
extern XC_API void XWnd_RegisterNCMessageEx(HWINDOW hWindow,int message,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info); 
extern XC_API void XWnd_RegisterMsgProcEx(HWINDOW hWindow,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info);	

extern XC_API void XSView_SetDrawScrollViewEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info);
extern XC_API void XList_SetUserDrawItemEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info); 
extern XC_API void XList_SetUserDrawItemHeaderEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info); 
extern XC_API void XTree_SetUserDrawItemEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info); 
extern XC_API void XListBox_SetUserDrawItemEx(HELE hEle,pFunClassEventMsg pCallBackFun,void *pClass_Fun_Info); 
}

class CXEventMsg
{
public:
	virtual void CXEventMsg__(void){}

//注册元素事件
#define XCGUI_RegEleEvent(hEle,type,MemberFunction) \
	RegisterAll(hEle,type,reinterpret_cast<void (CXEventMsg::*)(void)>(MemberFunction),ele_event)

//注册元素消息
#define XCGUI_RegEleMessage(hEle,type,MemberFunction) \
		RegisterAll(hEle,type,reinterpret_cast<void (CXEventMsg::*)(void)>(MemberFunction),ele_msg)

//注册元素消息处理过程
#define XCGUI_RegEleMsgProc(hEle,type,MemberFunction) \
		RegisterAll(hEle,type,reinterpret_cast<void (CXEventMsg::*)(void)>(MemberFunction),ele_msg_proc)

//注册元素事件处理过程
#define XCGUI_RegEleEventProc(hEle,type,MemberFunction) \
		RegisterAll(hEle,type,reinterpret_cast<void (CXEventMsg::*)(void)>(MemberFunction),ele_event_proc)

//注册窗口消息
#define XCGUI_RegWndMessage(hWindow,type,MemberFunction) \
		RegisterAll(hWindow,type,reinterpret_cast<void (CXEventMsg::*)(void)>(MemberFunction),wnd_msg)

//注册窗口逻辑非客户区消息
#define XCGUI_RegWndNCMessage(hWindow,type,MemberFunction) \
		RegisterAll(hWindow,type,reinterpret_cast<void (CXEventMsg::*)(void)>(MemberFunction),wnd_msg_nc)

//注册窗口消息处理过程
#define XCGUI_RegWndMsgProc(hWindow,MemberFunction) \
		RegisterAll(hWindow,0,reinterpret_cast<void (CXEventMsg::*)(void)>(MemberFunction),wnd_msg_proc)

//注册滚动视图绘制
#define XCGUI_SView_SetDrawScrollView(hEle,MemberFunction) \
		RegisterAll(hEle,0,reinterpret_cast<void (CXEventMsg::*)(void)>(MemberFunction),ele_scrollView_draw)

//注册列表项绘制
#define XCGUI_List_SetUserDrawItem(hEle,MemberFunction) \
		RegisterAll(hEle,0,reinterpret_cast<void (CXEventMsg::*)(void)>(MemberFunction),ele_list_drawItem)

//列表头项绘制
#define XCGUI_List_SetUserDrawItemHeader(hEle,MemberFunction) \
		RegisterAll(hEle,0,reinterpret_cast<void (CXEventMsg::*)(void)>(MemberFunction),ele_list_drawItemHeader)

//树项绘制
#define XCGUI_Tree_SetUserDrawItem(hEle,MemberFunction) \
		RegisterAll(hEle,0,reinterpret_cast<void (CXEventMsg::*)(void)>(MemberFunction),ele_tree_drawItem)

//列表框项绘制
#define XCGUI_ListBox_SetUserDrawItem(hEle,MemberFunction) \
		RegisterAll(hEle,0,reinterpret_cast<void (CXEventMsg::*)(void)>(MemberFunction),ele_listBox_drawItem)

	union xcgui_functions 
	{
		void (CXEventMsg::*fun_v_v)(void);
		bool (CXEventMsg::*fun_b_e_e_i_i)(HELE,HELE,int,int);
		bool (CXEventMsg::*fun_b_e_e_i)(HELE,HELE,int);
		bool (CXEventMsg::*fun_b_e_e)(HELE,HELE);

		bool (CXEventMsg::*fun_b_e_e_i_p)(HELE,HELE,int,POINT*);
		bool (CXEventMsg::*fun_b_e_e_i_b)(HELE,HELE,int,bool);
		bool (CXEventMsg::*fun_b_e_e_b_b)(HELE,HELE,bool,bool);
		bool (CXEventMsg::*fun_b_e_i_i_i)(HELE,int,int,int);

		void (CXEventMsg::*fun_v_e)(HELE);

		bool (CXEventMsg::*fun_b_e_i_p)(HELE,int,POINT*);
		bool (CXEventMsg::*fun_b_e_p)(HELE,POINT*);
		bool (CXEventMsg::*fun_b_e_dc)(HELE,HDC);

		bool (CXEventMsg::*fun_b_w_dc)(HWINDOW,HDC);
		bool (CXEventMsg::*fun_b_w)(HWINDOW);
		bool (CXEventMsg::*fun_b_w_i_p)(HWINDOW,int,POINT*);
		bool (CXEventMsg::*fun_b_w_i_size)(HWINDOW,int,SIZE*);
		bool (CXEventMsg::*fun_b_w_i_i)(HWINDOW,int,int);
		bool (CXEventMsg::*fun_b_w_p)(HWINDOW,POINT*);
		bool (CXEventMsg::*fun_b_w_e)(HWINDOW,HELE);
		bool (CXEventMsg::*fun_b_w_hwnd)(HWINDOW,HWND);
		bool (CXEventMsg::*fun_b_w_i)(HWINDOW,int);

		void (CXEventMsg::*fun_v_e_list)(HELE,list_drawItem_*);
		void (CXEventMsg::*fun_v_e_listHeader)(HELE,listHeader_drawItem_*);
		void (CXEventMsg::*fun_v_e_tree)(HELE,tree_drewItem_*);
		void (CXEventMsg::*fun_v_e_listBox)(HELE,listBox_drawItem_*);
	};
	enum xcgui_reg_type 
	{
		ele_event,        
		ele_msg,          
		ele_msg_proc,     
		ele_event_proc,   
		wnd_msg,          
		wnd_msg_nc,       
		wnd_msg_proc,     
		
		ele_scrollView_draw,     
		ele_list_drawItem,       
		ele_list_drawItemHeader, 
		ele_tree_drawItem,       
		ele_listBox_drawItem     
	};

	struct  xcgui_info_
	{
		CXEventMsg  *theThis;
		xcgui_functions  funs;
	};

	void RegisterAll(HXCGUI hXCGUI,int type,void (CXEventMsg::*fun)(void),int T) 
	{
		xcgui_info_ *pInfo=(xcgui_info_*)XEle_Malloc(sizeof(xcgui_info_));
		pInfo->theThis=this;
		pInfo->funs.fun_v_v=fun;

		switch(T)
		{
		case ele_event: 
			XEle_RegisterEventEx((HELE)hXCGUI,type,CXEventMsg::OnEventAndMsg,pInfo);
			break;
		case ele_msg: 
			XEle_RegisterMessageEx((HELE)hXCGUI,type,CXEventMsg::OnEventAndMsg,pInfo);
			break;
		case ele_msg_proc: 
			XEle_RegisterMsgProcEx((HELE)hXCGUI,CXEventMsg::OnEventAndMsg,pInfo);
			break;
		case ele_event_proc: 
			XEle_RegisterEventProcEx((HELE)hXCGUI,CXEventMsg::OnEventAndMsg,pInfo);
			break;
		case wnd_msg: 
			XWnd_RegisterMessageEx((HWINDOW)hXCGUI,type,CXEventMsg::OnEventAndMsg,pInfo);
			break;
		case wnd_msg_nc: 
			XWnd_RegisterNCMessageEx((HWINDOW)hXCGUI,type,CXEventMsg::OnEventAndMsg,pInfo);
			break;
		case wnd_msg_proc:
			XWnd_RegisterMsgProcEx((HWINDOW)hXCGUI,CXEventMsg::OnEventAndMsg,pInfo);
			break;
		case ele_scrollView_draw: 
			XSView_SetDrawScrollViewEx((HELE)hXCGUI,CXEventMsg::OnEventAndMsg,pInfo);
			break;
		case ele_list_drawItem: 
			XList_SetUserDrawItemEx((HELE)hXCGUI,CXEventMsg::OnEventAndMsg,pInfo);
			break;
		case ele_list_drawItemHeader: 
			XList_SetUserDrawItemHeaderEx((HELE)hXCGUI,CXEventMsg::OnEventAndMsg,pInfo);
			break;
		case ele_tree_drawItem: 
			XTree_SetUserDrawItemEx((HELE)hXCGUI,CXEventMsg::OnEventAndMsg,pInfo);
			break;
		case ele_listBox_drawItem:
			XListBox_SetUserDrawItemEx((HELE)hXCGUI,CXEventMsg::OnEventAndMsg,pInfo);
			break;
		};
	}
	static bool CALLBACK OnEventAndMsg(eventOrMsg_ *pEvent,xcgui_fun_type funType)
	{
		xcgui_info_ *info=(xcgui_info_*)pEvent->pClass_fun;
		bool bResult=false;
		switch(funType)
		{
		case xc_fun_b_e_e_i_i:
			bResult=(info->theThis->*info->funs.fun_b_e_e_i_i)(pEvent->hEle,pEvent->hEventEle,pEvent->wParam,pEvent->lParam);
			break;
		case xc_fun_b_e_e_i:
			bResult=(info->theThis->*info->funs.fun_b_e_e_i)(pEvent->hEle,pEvent->hEventEle,pEvent->wParam);
			break;
		case xc_fun_b_e_e:
			bResult=(info->theThis->*info->funs.fun_b_e_e)(pEvent->hEle,pEvent->hEventEle);
			break;
		case xc_fun_b_e_e_i_p:
			bResult=(info->theThis->*info->funs.fun_b_e_e_i_p)(pEvent->hEle,pEvent->hEventEle,pEvent->wParam,(POINT*)pEvent->lParam);
			break;
		case xc_fun_b_e_e_i_b:
			bResult=(info->theThis->*info->funs.fun_b_e_e_i_b)(pEvent->hEle,pEvent->hEventEle,pEvent->wParam,pEvent->lParam?true:false);
			break;
		case xc_fun_b_e_e_b_b:
			bResult=(info->theThis->*info->funs.fun_b_e_e_b_b)(pEvent->hEle,pEvent->hEventEle,pEvent->wParam?true:false,pEvent->lParam?true:false);
			break;
		case xc_fun_v_e:
			(info->theThis->*info->funs.fun_v_e)(pEvent->hEle);
			break;
		case xc_fun_b_e_i_i_i:
			bResult=(info->theThis->*info->funs.fun_b_e_i_i_i)(pEvent->hEle,pEvent->xint,pEvent->wParam,pEvent->lParam);
			break;
		case xc_fun_b_e_i_p:
			bResult=(info->theThis->*info->funs.fun_b_e_i_p)(pEvent->hEle,pEvent->wParam,(POINT*)pEvent->lParam);
			break;
		case xc_fun_b_e_p:
			bResult=(info->theThis->*info->funs.fun_b_e_p)(pEvent->hEle,(POINT*)pEvent->wParam);
			break;
		case xc_fun_b_e_dc:
			bResult=(info->theThis->*info->funs.fun_b_e_dc)(pEvent->hEle,(HDC)pEvent->wParam);
			break;
		case xc_fun_b_w_dc:
			bResult=(info->theThis->*info->funs.fun_b_w_dc)(pEvent->hWindow,(HDC)pEvent->wParam);
			break;
		case xc_fun_b_w:
			bResult=(info->theThis->*info->funs.fun_b_w)(pEvent->hWindow);
			break;
		case xc_fun_b_w_i_p:
			bResult=(info->theThis->*info->funs.fun_b_w_i_p)(pEvent->hWindow,pEvent->wParam,(POINT*)pEvent->lParam);
			break;
		case xc_fun_b_w_i_size:
			bResult=(info->theThis->*info->funs.fun_b_w_i_size)(pEvent->hWindow,pEvent->wParam,(SIZE*)pEvent->lParam);
			break;
		case xc_fun_b_w_i_i:
			bResult=(info->theThis->*info->funs.fun_b_w_i_i)(pEvent->hWindow,pEvent->wParam,pEvent->lParam);
			break;
		case xc_fun_b_w_p:
			bResult=(info->theThis->*info->funs.fun_b_w_p)(pEvent->hWindow,(POINT*)pEvent->wParam);
			break;
		case xc_fun_b_w_e:
			bResult=(info->theThis->*info->funs.fun_b_w_e)(pEvent->hWindow,(HELE)pEvent->wParam);
			break;
		case xc_fun_b_w_hwnd:
			bResult=(info->theThis->*info->funs.fun_b_w_hwnd)(pEvent->hWindow,(HWND)pEvent->wParam);
			break;
		case xc_fun_b_w_i:
			bResult=(info->theThis->*info->funs.fun_b_w_i)(pEvent->hWindow,pEvent->wParam);
			break;
		case xc_fun_v_e_list:
			(info->theThis->*info->funs.fun_v_e_list)(pEvent->hEle,(list_drawItem_*)pEvent->wParam);
			break;
		case xc_fun_v_e_listHeader:
			(info->theThis->*info->funs.fun_v_e_listHeader)(pEvent->hEle,(listHeader_drawItem_*)pEvent->wParam);
			break;
		case xc_fun_v_e_tree:
			(info->theThis->*info->funs.fun_v_e_tree)(pEvent->hEle,(tree_drewItem_*)pEvent->wParam);
			break;
		case xc_fun_v_e_listBox:
			(info->theThis->*info->funs.fun_v_e_listBox)(pEvent->hEle,(listBox_drawItem_*)pEvent->wParam);
			break;
		}
		return bResult;
	}
};

#endif //XCGUI_PLUS

#endif //XCGUI_HEADER_FILE_