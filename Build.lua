-- premake5.lua
workspace "StormProject"
    architecture "x64"
    configurations { "Debug", "Release", "Dist" }
    startproject "Sandbox"

    -- Workspace-wide build options for MSVC
   filter "system:windows"
   buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus", "/utf-8" }
   defines { "SE_PLATFORM_WINDOWS" }

OutputDir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"

group "StormEngine"
 include "StormEngine/Build-StormEngine.lua"
group ""

include "Sandbox/Build-Sandbox.lua"
    