cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

set(SHIELD x_nucleo_iks01a3)


project(test_semaphore)

target_include_directories(app PRIVATE
  src
  src/capteurs
)
FILE(GLOB app_sources src/*.c
                      src/capteurs/*.c)
target_sources(app PRIVATE ${app_sources})
