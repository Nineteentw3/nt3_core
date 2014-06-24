--[[
-- NT3 Core Premake File
-- Language: Lua
--]]

local _premake_dir = os.getenv("NT3_PREMAKE_DIR");

dofile (_premake_dir .. "/premake5_defines.lua")

solution_name = "nt3_core";
project_name = solution_name;

-- Make sure that there's a projects folder
mkdir(_starting_dir, "")

printq("Creating Solution: ", solution_name)
printq("Creating Project : ", project_name)

--[[
-- PREMAKE5 SOLUTION CREATION
--]]
solution ( solution_name )
  language ( _language._cpp )
  framework ( _framework._4_5 )
  location ( config.location )
  includedirs
    {
      "../include/"
    }
  platforms
    {
      _platform._x86,
      _platform._x64
    }
  configurations
    {
      _configuration._debug,
      _configuration._release
    }
    
  configuration { _platform._x86 }
    targetdir ( config.target .. _platform._x86 )
    libdirs
      {
        ""
      }
      
  configuration { _platform._x64 }
    targetdir ( config.target .. _platform._x64 )
    libdirs
      {
        ""
      }
      
  configuration { _configuration._debug }
    defines
      {
        "_DEBUG",
        _defines.nt3_debug
      }
    flags
      {
        _flags.FatalWarnings
      }
    targetsuffix ( "_d" )
    linkoptions
      {
        ""
      }
    
  configuration { _configuration._release }
    optimize "Speed"
    defines
      {
        _defines.nt3_release
      }
    flags
      {
        _flags.FatalWarnings,
        _flags.NoEditAndContinue
      }
    targetsuffix ( "" )
    linkoptions
      {
        ""
      }
      
  --[[
  -- PREMAKE5 PROJECT CREATION
  --]]
  project ( project_name )
  
    -- Create the folders for this project
    mkdir(_starting_dir, project_name .. "/include")
    mkdir(_starting_dir, project_name .. "/source")
    
    targetname ( project_name )
    kind ( _kind._lib )
    files 
      {
        _starting_dir..project_name.."/include/**.h*",
        _starting_dir..project_name.."/source/**.c*"
      }

  project ( "test" )
  
    -- Create the folders for this project
    mkdir(_starting_dir, "test/include")
    mkdir(_starting_dir, "test/source")
  
    targetname ( "test" )
    kind ( _kind._console )
    links
      {
        project_name
      }
    files 
      {
        _starting_dir.."test/include/**.h*",
        _starting_dir.."test/source/**.c*"
      }
      
print("\n")
      