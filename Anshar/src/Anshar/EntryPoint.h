#pragma once

#ifdef AN_PLATFORM_WINDOWS

extern Anshar::Application* Anshar::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Anshar::CreateApplication();
	app->Run();
	delete app;
}

#endif
