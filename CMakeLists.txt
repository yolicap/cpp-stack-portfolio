cmake_minimum_required(VERSION 3.29.0)
project(beep-me CXX)
set(VERSION "0.1.0")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)

include(FetchContent)
FetchContent_Declare(
  httplib
  GIT_REPOSITORY https://github.com/yhirose/cpp-httplib.git
  GIT_TAG        v0.15.3 # latest version
  FIND_PACKAGE_ARGS NAMES httplib cpp-httplib yhirose
)
FetchContent_Declare(
  json
  GIT_REPOSITORY https://github.com/yhirose/cpp-httplib.git
  GIT_TAG        v0.15.3 # latest version
  FIND_PACKAGE_ARGS nlohmann_json 3.2.0 REQUIRED
)
FetchContent_MakeAvailable(httplib)