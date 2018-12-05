#include "DC.h"

CDC::CDC(CView *p) {
	pView = p;
	hdc = GetDC(pView->hwnd);
}

CDC::~CDC(){
	ReleaseDC(pView->hwnd, hdc);
}
BOOL CDC::MoveToEx(int x, int y, LPPOINT lpPoint) {
	return ::MoveToEx(hdc, x, y, lpPoint);
}
BOOL CDC::LineTo(int x, int y) {
	return ::LineTo(hdc, x, y);
}
BOOL CDC::Polyline(CONST POINT* lppt, int cPoints) {
	return ::Polyline(hdc, lppt, cPoints);
}
//앞에 클래스명 없이 :: 사용되면 전역함수이다.