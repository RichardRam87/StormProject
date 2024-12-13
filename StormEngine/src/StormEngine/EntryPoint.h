#pragma once

#ifdef SE_PLATFORM_WINDOWS

extern StormEngine::Application* StormEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = StormEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif