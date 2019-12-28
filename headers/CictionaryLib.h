#pragma once
#ifdef CictionaryLib_EXPORTS
#define CictionaryLib_API __declspec(dllexport)
#else
#define CictionaryLib_API __declspec(dllimport)
#endif

#include "pch.h"
#include "framework.h"

extern "C" CictionaryLib_API void StartCictionary();

extern "C" CictionaryLib_API void SayHi();
