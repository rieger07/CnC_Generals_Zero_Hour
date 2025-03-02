add_library(BaseLib INTERFACE)
target_include_directories(BaseLib INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/Include
    ${CMAKE_CURRENT_SOURCE_DIR}/Microsoft
)

add_subdirectory(Source/WWVegas)