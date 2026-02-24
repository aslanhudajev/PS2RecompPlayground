cmake_minimum_required(VERSION 3.20)

project(PS2Runtime VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
set(FETCHCONTENT_QUIET FALSE)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(BUILD_GAMES OFF CACHE BOOL "" FORCE)

FetchContent_Declare(
    raylib
    GIT_REPOSITORY "https://github.com/raysan5/raylib.git"
    GIT_TAG "5.5" # we will migrate to 4.2.0 later, trust me it will be better
    GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(raylib)

# Use OBJECT library so object files are linked directly; avoids LLD not pulling
# ps2_iop.obj from a static archive.
add_library(ps2_runtime_obj OBJECT
    src/lib/game_overrides.cpp
    src/lib/ps2_audio.cpp
    src/lib/ps2_audio_vag.cpp
    src/lib/ps2_gif_arbiter.cpp
    src/lib/ps2_gs_gpu.cpp
    src/lib/ps2_gs_rasterizer.cpp
    src/lib/ps2_iop.cpp
    src/lib/ps2_iop_audio.cpp
    src/lib/ps2_memory.cpp
    src/lib/ps2_pad.cpp
    src/lib/ps2_runtime.cpp
    src/lib/ps2_stubs.cpp
    src/lib/ps2_syscalls.cpp
    src/lib/ps2_vif1_interpreter.cpp
    src/lib/ps2_vu1.cpp
)
add_library(ps2_runtime ALIAS ps2_runtime_obj)

file(GLOB RUNNER_SRC_FILES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/runner/*.cpp"
)

set(RUNNER_MAIN_CPP "${CMAKE_CURRENT_SOURCE_DIR}/src/runner/main.cpp")
set(ROOT_MAIN_CPP "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp")

if(EXISTS "${RUNNER_MAIN_CPP}")
    list(APPEND RUNNER_SRC_FILES "${RUNNER_MAIN_CPP}")
elseif(EXISTS "${ROOT_MAIN_CPP}")
    list(APPEND RUNNER_SRC_FILES "${ROOT_MAIN_CPP}")
endif()

add_executable(ps2EntryRunner
    ${RUNNER_SRC_FILES}
)

if(MSVC)
    target_compile_options(ps2EntryRunner PRIVATE /FS)
endif()

target_include_directories(ps2_runtime_obj PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
target_link_libraries(ps2_runtime_obj PUBLIC raylib)
target_link_libraries(ps2EntryRunner
    PRIVATE
    ps2_runtime
    raylib
)

# Work around WinAPI vs raylib symbol clash for CloseWindow on x64
if(MSVC)
    target_link_options(ps2EntryRunner PRIVATE "/FORCE:MULTIPLE")
endif()

install(TARGETS ps2_runtime_obj
    OBJECTS DESTINATION lib
)

install(DIRECTORY include/
    DESTINATION include
)