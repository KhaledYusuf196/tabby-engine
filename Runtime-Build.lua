-- premake5.lua
workspace "Tabby Engine"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "Runtime"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

OutputDir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"

group "Core"
	include "Core/Build-Core.lua"
group ""

include "Runtime/Build-App.lua"