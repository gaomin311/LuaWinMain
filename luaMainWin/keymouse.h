//供lua调用的按键、鼠标接口

struct lua_State;

static int moveto(lua_State *L);
static int leftclick(lua_State *L);
static int leftdown(lua_State *L);
static int leftup(lua_State *L);
static int rightclick(lua_State *L);
static int keypress(lua_State *L);
static int keydown(lua_State *L);
static int keyup(lua_State *L);
static int messagebox(lua_State *L);
void initkm();
int luaopen_kmlib(lua_State *L);

