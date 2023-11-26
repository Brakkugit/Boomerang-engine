#pragma once

#include "Core.h"

namespace Boomerang {
	class BOOMERANG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}