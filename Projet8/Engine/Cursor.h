#pragma once

enum class LockMode
{
	None,
	Locked,
};

class Cursor final
{

public:
	Cursor() = delete;

	static void Lock();
	static void Unlock();

	static void SetVisible(bool visibility);

	static void CursorUpdate();

	static BOOL CursorPosition(_Out_ LPPOINT cursorPos);
private:
	static LockMode _cursorLockMode;

};
