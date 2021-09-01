#pragma once
#include "gdrv.h"

class winmain
{
public:
	static char DatFileName[300];
	static int single_step;
	static SDL_Window* MainWindow;
	static SDL_Renderer* Renderer;

	static int WinMain(LPCSTR lpCmdLine);
	static LRESULT CALLBACK message_handler(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
	static int event_handler(const SDL_Event* event);
	static void memalloc_failure();
	static int ProcessWindowMessages();
	static HDC _GetDC(HWND hWnd);
	static int a_dialog(HINSTANCE hInstance, HWND hWnd);
	static void end_pause();
	static void new_game();
	static void pause();
	static void help_introduction(HINSTANCE a1, HWND a2);
	static void Restart();
private:
	static int return_value, bQuit, DispFrameRate, DispGRhistory, activated;
	static int has_focus, mouse_down, last_mouse_x, last_mouse_y, no_time_loss;
	static DWORD then, now;
	static UINT iFrostUniqueMsg;
	static gdrv_bitmap8 gfr_display;
	static HCURSOR mouse_hsave;
	static bool restart;

	static HDC _BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint);
};
