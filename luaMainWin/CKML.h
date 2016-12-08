// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Users\\Administrator\\Desktop\\kmlSDK\\kml.dll" no_namespace
// CKML 包装器类

class CKML : public COleDispatchDriver
{
public:
	CKML(){} // 调用 COleDispatchDriver 默认构造函数
	CKML(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CKML(const CKML& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IKML 方法
public:
	CString Get_Plugin_Description(LPCTSTR ItemName)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xc9, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, ItemName);
		return result;
	}
	long OpenDevice()
	{
		long result;
		InvokeHelper(0xca, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long OpenDeviceEx(long VenderID, long ProductID)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0xcb, DISPATCH_METHOD, VT_I4, (void*)&result, parms, VenderID, ProductID);
		return result;
	}
	long CloseDevice()
	{
		long result;
		InvokeHelper(0xcc, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long CheckDevice()
	{
		long result;
		InvokeHelper(0xcd, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long Restart()
	{
		long result;
		InvokeHelper(0xce, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString GetModel()
	{
		CString result;
		InvokeHelper(0xcf, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString GetVersion()
	{
		CString result;
		InvokeHelper(0xd0, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString GetProductionDate()
	{
		CString result;
		InvokeHelper(0xd1, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long SetDeviceID(LPCTSTR WritePwd, long VenderID, long ProductID)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0xd2, DISPATCH_METHOD, VT_I4, (void*)&result, parms, WritePwd, VenderID, ProductID);
		return result;
	}
	long RestoreDeviceID(LPCTSTR WritePwd)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xd3, DISPATCH_METHOD, VT_I4, (void*)&result, parms, WritePwd);
		return result;
	}
	CString GetDeviceTime()
	{
		CString result;
		InvokeHelper(0xd4, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long GetLimitMode(LPCTSTR ReadPwd)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xd5, DISPATCH_METHOD, VT_I4, (void*)&result, parms, ReadPwd);
		return result;
	}
	long SetLimitMode(LPCTSTR WritePwd, long Mode)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0xd6, DISPATCH_METHOD, VT_I4, (void*)&result, parms, WritePwd, Mode);
		return result;
	}
	long GetLimitStatus()
	{
		long result;
		InvokeHelper(0xd7, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString GetLimitStartTime(LPCTSTR ReadPwd)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xd8, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, ReadPwd);
		return result;
	}
	long SetLimitStartTime(LPCTSTR WritePwd, LPCTSTR lsTime)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0xd9, DISPATCH_METHOD, VT_I4, (void*)&result, parms, WritePwd, lsTime);
		return result;
	}
	CString GetLimitStopTime(LPCTSTR ReadPwd)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xda, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, ReadPwd);
		return result;
	}
	long SetLimitStopTime(LPCTSTR WritePwd, LPCTSTR lsTime)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0xdb, DISPATCH_METHOD, VT_I4, (void*)&result, parms, WritePwd, lsTime);
		return result;
	}
	long GetRTCStatus()
	{
		long result;
		InvokeHelper(0xdc, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString GetSN()
	{
		CString result;
		InvokeHelper(0xdd, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long InitLock()
	{
		long result;
		InvokeHelper(0xde, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long SetReadPassword(LPCTSTR WritePwd, LPCTSTR NewReadPwd)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0xdf, DISPATCH_METHOD, VT_I4, (void*)&result, parms, WritePwd, NewReadPwd);
		return result;
	}
	long SetWritePassword(LPCTSTR WritePwd, LPCTSTR NewWritePwd)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0xe0, DISPATCH_METHOD, VT_I4, (void*)&result, parms, WritePwd, NewWritePwd);
		return result;
	}
	CString ReadString(LPCTSTR ReadPwd, long Address, long Count)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0xe1, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, ReadPwd, Address, Count);
		return result;
	}
	long WriteString(LPCTSTR WritePwd, long Address, LPCTSTR wString)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_BSTR;
		InvokeHelper(0xe2, DISPATCH_METHOD, VT_I4, (void*)&result, parms, WritePwd, Address, wString);
		return result;
	}
	long SetStringKey(LPCTSTR WritePwd, LPCTSTR Key)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0xe3, DISPATCH_METHOD, VT_I4, (void*)&result, parms, WritePwd, Key);
		return result;
	}
	CString EncString(LPCTSTR inString)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xe4, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, inString);
		return result;
	}
	CString DecString(LPCTSTR inString)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xe5, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, inString);
		return result;
	}
	long KeyDown(LPCTSTR Key)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xe6, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Key);
		return result;
	}
	long KeyUp(LPCTSTR Key)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xe7, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Key);
		return result;
	}
	long KeyPress(LPCTSTR Key, long Count)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0xe8, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Key, Count);
		return result;
	}
	long CombinationKeyDown(LPCTSTR Key1, LPCTSTR Key2, LPCTSTR Key3, LPCTSTR Key4, LPCTSTR Key5, LPCTSTR Key6)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0xe9, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Key1, Key2, Key3, Key4, Key5, Key6);
		return result;
	}
	long CombinationKeyUp(LPCTSTR Key1, LPCTSTR Key2, LPCTSTR Key3, LPCTSTR Key4, LPCTSTR Key5, LPCTSTR Key6)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0xea, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Key1, Key2, Key3, Key4, Key5, Key6);
		return result;
	}
	long CombinationKeyPress(LPCTSTR Key1, LPCTSTR Key2, LPCTSTR Key3, LPCTSTR Key4, LPCTSTR Key5, LPCTSTR Key6, long Count)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4;
		InvokeHelper(0xeb, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Key1, Key2, Key3, Key4, Key5, Key6, Count);
		return result;
	}
	long SimulationPressKey(LPCTSTR Keys)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xec, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Keys);
		return result;
	}
	long KeyUpAll()
	{
		long result;
		InvokeHelper(0xed, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetCapsLock()
	{
		long result;
		InvokeHelper(0xee, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetNumLock()
	{
		long result;
		InvokeHelper(0xef, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long LeftDown()
	{
		long result;
		InvokeHelper(0xf0, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long LeftUp()
	{
		long result;
		InvokeHelper(0xf1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long LeftClick(long Count)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xf2, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Count);
		return result;
	}
	long LeftDoubleClick(long Count)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xf3, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Count);
		return result;
	}
	long RightDown()
	{
		long result;
		InvokeHelper(0xf4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long RightUp()
	{
		long result;
		InvokeHelper(0xf5, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long RightClick(long Count)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xf6, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Count);
		return result;
	}
	long RightDoubleClick(long Count)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xf7, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Count);
		return result;
	}
	long MiddleDown()
	{
		long result;
		InvokeHelper(0xf8, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long MiddleUp()
	{
		long result;
		InvokeHelper(0xf9, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long MiddleClick(long Count)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xfa, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Count);
		return result;
	}
	long MiddleDoubleClick(long Count)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xfb, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Count);
		return result;
	}
	long MouseUpAll()
	{
		long result;
		InvokeHelper(0xfc, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long WheelUp(long Count)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xfd, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Count);
		return result;
	}
	long WheelDown(long Count)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xfe, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Count);
		return result;
	}
	long SimulationMove(long X, long Y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0xff, DISPATCH_METHOD, VT_I4, (void*)&result, parms, X, Y);
		return result;
	}
	void Delay(long Millisecond)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x100, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Millisecond);
	}
	long RandomDelay(long MinMillisecond, long MaxMillisecond)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x101, DISPATCH_METHOD, VT_I4, (void*)&result, parms, MinMillisecond, MaxMillisecond);
		return result;
	}
	long MouseWheel(long Value)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x102, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Value);
		return result;
	}
	long RunApp(LPCTSTR AppName)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x103, DISPATCH_METHOD, VT_I4, (void*)&result, parms, AppName);
		return result;
	}
	long GetCursorPos(long * X, long * Y)
	{
		long result;
		static BYTE parms[] = VTS_PI4 VTS_PI4;
		InvokeHelper(0x104, DISPATCH_METHOD, VT_I4, (void*)&result, parms, X, Y);
		return result;
	}
	long ScreenWidth()
	{
		long result;
		InvokeHelper(0x105, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long ScreenHeight()
	{
		long result;
		InvokeHelper(0x106, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long MessageBox(LPCTSTR Msg)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x107, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Msg);
		return result;
	}
	long MouseX()
	{
		long result;
		InvokeHelper(0x108, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long MouseY()
	{
		long result;
		InvokeHelper(0x109, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString Now()
	{
		CString result;
		InvokeHelper(0x10a, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long Disconnect(long Second)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x10b, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Second);
		return result;
	}
	long MoveTo(long X, long Y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x10c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, X, Y);
		return result;
	}
	long MoveToR(long X, long Y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x10d, DISPATCH_METHOD, VT_I4, (void*)&result, parms, X, Y);
		return result;
	}
	long MoveToFrom(long fX, long fY, long tX, long tY)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x10e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, fX, fY, tX, tY);
		return result;
	}
	long SetKM21Mode(long Mode)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x10f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Mode);
		return result;
	}
	long GetKM21Mode()
	{
		long result;
		InvokeHelper(0x110, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long ReMoveTo(long X, long Y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x111, DISPATCH_METHOD, VT_I4, (void*)&result, parms, X, Y);
		return result;
	}
	long SayString(LPCTSTR Keys)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x112, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Keys);
		return result;
	}

	// IKML 属性
public:

};
