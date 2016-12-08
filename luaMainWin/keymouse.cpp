#include "stdafx.h"
#include "lua.hpp"
#include "keymouse.h"
#include "CKML.h"

CKML km;

void initkm()
{
	::CoInitialize(NULL);
	CLSID clsid;
	HRESULT hr = CLSIDFromProgID(OLESTR("MCUAPP.KML"), &clsid);
	km.CreateDispatch(clsid);
	long ret = km.OpenDevice();
}

int moveto(lua_State *L)
{
	int x = lua_tonumber(L, 1);
	int y = lua_tonumber(L, 1);

	km.MoveTo(x, y);
	return 0;
}

int leftclick(lua_State *L)
{
	km.LeftClick(1);
	return 0;
}

int messagebox(lua_State *L)
{
	int n = lua_gettop(L);
	if (n < 1) return 0;

	const char* str = lua_tostring(L, 1);
	CString str1(str);
	AfxMessageBox(str1);

	return 0;
}

int leftdown(lua_State *L)
{
	km.LeftDown();
	return 0;
}

int leftup(lua_State *L)
{
	km.LeftUp();
	return 0;
}

int rightclick(lua_State *L)
{
	km.RightClick(1);
	return 0;
}

int keypress(lua_State *L)
{
	const char* str = lua_tostring(L, 1);
	CString key;
	key.Format(L"%s", str);
	km.KeyPress(key, 1);
	return 0;
}

int keydown(lua_State *L)
{
	return 0;
}

int keyup(lua_State *L)
{
	return 0;
}

int luaopen_kmlib(lua_State *L)
{
	luaL_Reg lib[] = {
		{ "moveto", moveto },
		{ "leftclick", leftclick },
		{ "leftdown", leftdown },
		{ "leftup", leftup },
		{ "rightclick", rightclick },
		{ "keypress", keypress },
		{ "keydown", keydown },
		{ "keyup", keyup },
		{ "messagebox", messagebox },
		{ NULL, NULL },
	};
	luaL_newlib(L, lib);
	return 1;
}



