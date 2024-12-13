#pragma once

#include "Core.h"

namespace StormEngine {

	class STORM_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	// To Be defined in the client
	Application* CreateApplication();
}



