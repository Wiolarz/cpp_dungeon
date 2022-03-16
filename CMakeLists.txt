cmake_minimum_required(VERSION 3.20)
project(cpp_dungeon)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_dungeon main.cpp economy.cpp economy.h arcane.cpp arcane.h balance.cpp balance.h explore.cpp explore.h items.cpp items.h jobs.cpp jobs.h manager.cpp manager.h terrain.cpp terrain.h units.cpp units.h)
