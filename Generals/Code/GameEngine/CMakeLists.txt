add_library(pch INTERFACE
                Source/Precompiled/PreRTS.cpp)
target_precompile_headers(pch INTERFACE
                Include/Precompiled/PreRTS.h)
target_link_libraries(pch INTERFACE BaseLib)


add_library(GameEngine
    Include/Common/GameMemory.h
)
set_target_properties(GameEngine PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(GameEngine PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/Include"
)

target_link_libraries(GameEngine INTERFACE pch BaseLib WWMath)
