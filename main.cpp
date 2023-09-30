LRESULT CALLBACK wndProc(HWND hWnd, UINT message)
{
    switch(message)
    {
    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    default:
        return DefWindowProc(hWnd, message, wParam,
            lParam);
    }
    return 0;
}