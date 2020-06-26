#include <windows.h>
 
void CreateDefaultProcWindow()
{
    HINSTANCE hInstance = ::GetModuleHandleW(NULL);//or from wWinMain
    ::CreateWindowW(NULL, L"default proc window", WS_VISIBLE | WS_POPUP, 0, 0, 800, 600, NULL, NULL, hInstance, NULL);
}

void CreateNormalWindow()
{
    
}

void CreateDialogWindow()
{

}

void CreateMessageWindow()
{

}