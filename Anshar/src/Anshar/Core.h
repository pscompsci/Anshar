#pragma once

#ifdef AN_PLATFORM_WINDOWS
	#ifdef AN_BUILD_DLL
		#define ANSHAR_API __declspec(dllexport)
	#else
		#define ANSHAR_API __declspec(dllimport)
	#endif
#else
	#error Anshar only supports Windows
#endif