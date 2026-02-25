cmake_minimum_required(VERSION 4.1)
project(8inf334_tp2)

set(CMAKE_CXX_STANDARD 20)

add_executable(8inf334_tp2 main.cpp
        source/Enregistreur.cpp
        include/Enregistreur.h
        source/Exportateur.cpp
        include/Exportateur.h
        include/DonneesArticle.h
        source/Importateur.cpp
        include/Importateur.h
        source/AnalysateurJSON.cpp
        include/AnalysateurJSON.h
        source/DonneesArticle.cpp
        source/Client.cpp
        include/Client.h
)
