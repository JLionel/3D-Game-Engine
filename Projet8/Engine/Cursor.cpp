#include "pch.h"

LockMode Cursor::_cursorLockMode = LockMode::None;

void Cursor::Lock()
{
	SetCursorPos(SCREEN_RESOLUTION_WIDTH / 2, SCREEN_RESOLUTION_HEIGHT / 2);
	_cursorLockMode = LockMode::Locked;
}

void Cursor::Unlock()
{
	_cursorLockMode = LockMode::None;
}

void Cursor::SetVisible(bool visibility)
{
	if (visibility)
		while (ShowCursor(true) < 0);
	else
		while (ShowCursor(false) >= 0);
}

void Cursor::CursorUpdate()
{
	switch (_cursorLockMode)
	{
		case LockMode::Locked:
			{
				SetCursorPos(SCREEN_RESOLUTION_WIDTH / 2, SCREEN_RESOLUTION_HEIGHT / 2);
			}
			break;
		case LockMode::None:
			break;
	}
}

BOOL Cursor::CursorPosition(LPPOINT cursorPos)
{
	if (GetCursorPos(cursorPos))
	{
		cursorPos->x = SCREEN_RESOLUTION_WIDTH * cursorPos->x / static_cast<float>(SCREEN_WIDTH);
		cursorPos->y = SCREEN_RESOLUTION_HEIGHT * cursorPos->y / static_cast<float>(SCREEN_HEIGHT);
		return TRUE;
	}
	
	return FALSE;
}

