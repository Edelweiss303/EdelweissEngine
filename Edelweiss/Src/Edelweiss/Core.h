#pragma once

#ifdef EDLWS_PLATFORM_WINDOWS
	#ifdef EDLWS_BUILD_DLL
		#define EDELWEISS_API __declspec(dllexport)
	#else
		#define EDELWEISS_API __declspec(dllimport)
	#endif 
#else
	#error Edelweiss Engine only supports Windows!
#endif 

