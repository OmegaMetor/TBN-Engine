cmake_minimum_required(VERSION 3.0.0)
project(SFMLEngine VERSION 0.1.0)

find_package(SFML 2.5 
  COMPONENTS 
    system window graphics network audio REQUIRED
)

add_library(SFMLEngine STATIC src/engine.cpp)

target_link_libraries(SFMLEngine sfml-graphics)

include_directories(SFMLEngine include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
