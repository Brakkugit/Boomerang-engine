#pragma once

#ifdef BR_PLATFORM_WINDOWS
#ifdef BR_BUILD_DLL
#define BOOMERANG_API __declspec(dllexport)
#else
#define BOOMERANG_API __declspec(dllimport)
#endif
#else
#error Boomerang only supports Windows!
#endif 
