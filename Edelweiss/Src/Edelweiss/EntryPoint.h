#pragma once
#ifdef EDLWS_PLATFORM_WINDOWS

extern Edelweiss::Application* Edelweiss::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Edelweiss::CreateApplication();
	app->Run();
	delete app;
}
#endif