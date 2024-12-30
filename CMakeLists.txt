cmake_minimum_required(VERSION 3.25)
project(myio C)

set(CMAKE_C_STANDARD 11)

set(SOURCES
    main.c
)

set(HEADERS
    myio.h
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
