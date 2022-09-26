cmake_minimum_required(VERSION 3.16)

set(CORE_LIB utils)

set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/includes)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(PUBLIC_INCLUDES
    ${INC_DIR}/BaseClock.h
    ${INC_DIR}/BenchFunc.h
    ${INC_DIR}/Types.h
    ${INC_DIR}/Hex.h
)

set(PRIVATE_SOURCES
    ${SRC_DIR}/BaseClock.cpp
    ${SRC_DIR}/Hex.cpp
)

set(SOURCES
    ${PUBLIC_INCLUDES}
    ${PRIVATE_SOURCES}
)

include_directories(
    ${SRC_DIR}
    ${INC_DIR}
)

add_library(${CORE_LIB}
    STATIC
    ${SOURCES}
)
