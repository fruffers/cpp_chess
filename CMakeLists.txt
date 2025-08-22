cmake_minimum_required(VERSION 3.10)
project(CppChess VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(CppChess src/main.cpp)

set_property(TARGET CppChess PROPERTY CXX_STANDARD 17)

# SFML setup
set(SFML_ROOT "${CMAKE_SOURCE_DIR}/lib/SFML-3.0.0")
set(SFML_INCLUDE_DIR "${SFML_ROOT}/include")
set(SFML_LIBRARY_DIR "${SFML_ROOT}/lib")

include_directories(${SFML_INCLUDE_DIR})
link_directories(${SFML_LIBRARY_DIR})

# List the SFML libraries you need
set(SFML_LIBS
	"${SFML_LIBRARY_DIR}/libsfml-graphics.a"
	"${SFML_LIBRARY_DIR}/libsfml-window.a"
	"${SFML_LIBRARY_DIR}/libsfml-system.a"
)

target_link_libraries(CppChess ${SFML_LIBS})
target_compile_definitions(CppChess PRIVATE SFML_STATIC)