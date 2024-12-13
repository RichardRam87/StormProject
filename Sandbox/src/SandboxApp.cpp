#include <StormEngine.h>

class Sandbox : public StormEngine::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

StormEngine::Application* StormEngine::CreateApplication()
{
	return new Sandbox();
}