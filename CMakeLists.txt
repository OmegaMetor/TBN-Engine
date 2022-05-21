cmake_minimum_required(VERSION 3.0.0)
project(SFMLGame VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(SFML 2.5 
  COMPONENTS 
    system window graphics network audio REQUIRED
)

add_executable(SFMLGame main.cpp)
add_subdirectory(SFMLEngine)
target_link_libraries(SFMLGame SFMLEngine sfml-graphics)
target_include_directories(SFMLGame PRIVATE SFMLEngine/include include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
