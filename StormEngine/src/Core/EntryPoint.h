#pragma once

#ifdef SE_PLATFORM_WINDOWS

extern StormEngine::Application* StormEngine::CreateApplication();

int main(int argc, char** argv)
{
	StormEngine::Log::Init();
	SE_CORE_WARN("Initialized Log!");

	int a = 5;
	SE_INFO("Hello var={0}", a);

	auto app = StormEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif