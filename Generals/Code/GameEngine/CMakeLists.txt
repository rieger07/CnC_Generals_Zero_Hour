add_library(GameEngine
    Include/Common/GameMemory.h
)
set_target_properties(GameEngine PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(GameEngine PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/Include"
)

target_link_libraries(GameEngine INTERFACE BaseLib)