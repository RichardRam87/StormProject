#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace StormEngine {

	class STORM_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define SE_CORE_INFO(...)       ::StormEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SE_CORE_TRACE(...)      ::StormEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SE_CORE_WARN(...)       ::StormEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SE_CORE_ERROR(...)      ::StormEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SE_CORE_CRITICAL(...)   ::StormEngine::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define SE_INFO(...)            ::StormEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define SE_TRACE(...)           ::StormEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SE_WARN(...)            ::StormEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SE_ERROR(...)           ::StormEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define SE_CRITICAL(...)        ::StormEngine::Log::GetClientLogger()->critical(__VA_ARGS__)

// if dist build
// #define SE_CORE_INFO --> declare as null, strips from dist builds 