#pragma once

#ifdef BR_PLATFORM_WINDOWS

extern Boomerang::Application* Boomerang::CreateApplication();

int main(int argc, char** argv)
{	
	printf("Boomerang Engine");
	auto app = Boomerang::CreateApplication();
	app->Run();
	delete app; 
}
#endif

