#include "Application.h"

#include "Hazel/Events/KeyEvent.h"
#include "Hazel/Events/MouseEvent.h"
#include "Hazel/Events/ApplicationEvent.h"

#include "Hazel/Log.h"

namespace Hazel {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		
		if (e.IsInCategory(EventCategoryApplication))
		{
			HZ_TRACE(e);
		}

		KeyPressedEvent e1('A', 1);
		if (e1.IsInCategory(EventCategoryInput))
		{
			HZ_TRACE(e1);
		}
		
		KeyReleasedEvent e2('B');
		HZ_TRACE(e2);

		MouseButtonPressedEvent e3(1);
		HZ_TRACE(e3);

		MouseScrolledEvent e4(2.2, 3.1);
		HZ_TRACE(e4);

		MouseMovedEvent e5(3.1, 4.2);
		HZ_TRACE(e5);
		//HZ_TRACE(e.ToString());

		while (true);
	}
}