#if 0
#include <stdio.h>
/*
#define MB_OK				0x00000000L
#define MB_OKCANCEL			0x00000001L
#define MB_ABORTRETRYIGNORE 0x00000002L
#define MB_YESNOCANCEL		0x00000003L
#define MB_YESNO			0x00000004L
#define MB_RETRYCANCEL		0x00000005L

#define MB_ICONHEAD			0x00000010L
#define MB_ICONQUESTION		0x00000020L
#define MB_ICONEXCLAMATION	0x00000030L
#define MB_ICONASTERISK		0x00000040L

void MessageBox(const char* pszMessage, unsigned int flag) {
	int iButton = flag & 0x000f;
	int iIcon = (flag & 0x00f0) >> 4;
	const char* pszButtons[] = { "ok","okcancel","abortretryignore","yesnocalcel","yesno","retrycancel" };
	const char* pszIcons[] = { "","hand","question","exclamation","asterisk" };

	printf("msg = %s\n" "button = %s\n" "icon = %s\n", pszMessage, pszButtons[iButton], pszIcons[iIcon]);
}
*/
#include <windows.h>
void main() {
	//MessageBox("hello", MB_OK | MB_ICONQUESTION);
	MessageBox(NULL, "hello", "hello world", MB_OKCANCEL | MB_ICONQUESTION);
	MessageBox(NULL, "hello", "hello world", MB_OKCANCEL | MB_ICONASTERISK);
}
#endif
