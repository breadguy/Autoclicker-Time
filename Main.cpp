#include <iostream>
#include <time.h>
#include <Windows.h>

int x, y;
void click(clock_t &st);

BOOL isWaiting;

int main()
{
	while (!GetAsyncKeyState(VK_INSERT))
	{
		clock_t st;
		st = clock();
		if (GetAsyncKeyState(VK_LMENU))
		{
			system("CLS");
			float te = clock() - st;
			te = te / CLOCKS_PER_SEC;
			std::cout << "Executing the click function after: " << te << " seconds" << std::endl;
			click(st);
			isWaiting = FALSE;
			st = clock();
		}
		else if (!isWaiting)
		{
			std::cout << std::endl;
			std::cout << "--------------------------------" << std::endl;
			std::cout << "Waiting for LEFT ALT" << std::endl;
			isWaiting = !isWaiting;
		}
	}
}

void click(clock_t &st)
{
	mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
	std::cout << "Left Mouse Down" << std::endl;
	mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
	std::cout << "Left Mouse Up" << std::endl << std::endl;

	float te = clock() - st;
	te = te / CLOCKS_PER_SEC;
	std::cout << "TTC: " << te << " seconds" << std::endl << std::endl;
}