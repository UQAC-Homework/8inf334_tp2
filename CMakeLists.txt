cmake_minimum_required(VERSION 4.1)
project(8inf334_tp2)

set(CMAKE_CXX_STANDARD 20)

add_executable(8inf334_tp2 main.cpp
        source/Logger.cpp
        include/Logger.h
        source/Exporter.cpp
        include/Exporter.h
        include/ArticleData.h
        source/Importer.cpp
        include/Importer.h
        source/JsonParser.cpp
        include/JsonParser.h
)
