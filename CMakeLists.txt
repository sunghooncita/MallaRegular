cmake_minimum_required(VERSION 3.29)
project(STL)

set(CMAKE_CXX_STANDARD 20)

add_executable(STL main.cpp
        Fecha.h
        Fecha.cpp
        ReanelCar.h
        UTM.h
        Usuario.h
        Usuario.cpp
        ReanelCar.cpp
        PuntoRecarga.h
        PuntoRecarga.cpp
        Coche.cpp
        Trayecto.h
        Trayecto.cpp
        ThashUsuario.h
        ThashUsuario.cpp
        MallaRegular.h
        Casilla.h
)
