#include "smpch.h"
#include "Window.h"
#include "Platform/Windows/WindowsWindow.h"
namespace SoonMoom
{
	Window* Window::Create(const WindowProps& props)
	{
		return new WindowsWindow(props);
	}


}