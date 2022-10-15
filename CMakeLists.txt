cmake_minimum_required(VERSION 3.23)

include_directories(il2x_output/IL2X_CoreLib/)
include_directories(il2x_output/RayTraceBenchmark/)

project(il2x C)

set(CMAKE_C_STANDARD 99)

add_library(ray_trace_benchmark il2x_output/RayTraceBenchmark/RayTraceBenchmark_Program.c)
add_library(il2x_corelib il2x_output/IL2X_CoreLib/System_Object.c)

add_executable(il2x main.c)

target_link_libraries( il2x ray_trace_benchmark il2x_corelib )