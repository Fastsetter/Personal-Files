#include<windows.h>

void foo(void){
    OutputDebugStringA(
        "This is the first thing we have actuall printed\n"
    );
}
int CALLBACK WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevINstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    foo();
    return 0;
}


