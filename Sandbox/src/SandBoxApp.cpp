#include <Boomerang.h>

class Sandbox : public Boomerang::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};
Boomerang::Application* Boomerang::CreateApplication()
{
	return new Sandbox();
}
 