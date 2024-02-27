#pragma once

namespace GameInput
{
	static const int SPACEBAR = 32;
	int Forwards = 'W';
	int Backwards = 'S';
	int Left = 'A';
	int Right = 'D';
	int Jump = SPACEBAR;

	void SetKeybinds(const char* keybinds)
	{
		// WASD
		Forwards = keybinds[0];
		Left = keybinds[1];
		Backwards = keybinds[2];
		Right = keybinds[3];
	}
};