#include <Anshar.h>

class Sandbox : public Anshar::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

Anshar::Application* Anshar::CreateApplication()
{
	return new Sandbox();
}

