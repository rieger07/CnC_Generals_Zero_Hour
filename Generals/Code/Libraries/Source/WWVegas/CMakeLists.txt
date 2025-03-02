add_library(WWVegas INTERFACE)

file(GLOB WW3D2_SOURCE "WW3D2/*.cpp")
add_library(WW3D2
    ${WW3D2_SOURCE})
target_include_directories(WW3D2 INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

file(GLOB WWAudio_SOURCE "WWAudio/*.cpp")
add_library(WWAudio
    ${WWAudio_SOURCE})
target_include_directories(WWAudio INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

file(GLOB WWDebug_SOURCE "WWDebug/*.cpp")
add_library(WWDebug
    ${WWDebug_SOURCE})
target_include_directories(WWDebug INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/WWDebug
)

file(GLOB WWDownload_SOURCE "WWDownload/*.cpp")
add_library(WWDownload
    ${WWDownload_SOURCE})
target_include_directories(WWDownload INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

file(GLOB WWLib_SOURCE "WWLib/*.cpp")
add_library(WWLib
    ${WWLib_SOURCE})
target_include_directories(WWLib INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/WWLib
)

file(GLOB WWMath_SOURCE "WWMath/*.cpp")
add_library(WWMath
    ${WWMath_SOURCE})
target_include_directories(WWMath INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/WWMath
)

file(GLOB WWSaveLoad_SOURCE "WWSaveLoad/*.cpp")
add_library(WWSaveLoad
    ${WWSaveLoad_SOURCE})
target_include_directories(WWSaveLoad INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

file(GLOB Wwutil_SOURCE "Wwutil/*.cpp")
add_library(Wwutil
    ${Wwutil_SOURCE})
target_include_directories(Wwutil INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)


target_link_libraries(WW3D2 PUBLIC pch WWLib WWMath WWDebug BaseLib)

target_link_libraries(WWVegas INTERFACE
                        WW3D2
                        WWAudio
                        WWDebug
                        WWDownload
                        WWLib
                        WWMath
                        WWSaveLoad
                        Wwutil
                        )