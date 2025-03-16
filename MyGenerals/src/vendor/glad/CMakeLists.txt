add_library(GLAD
    include/glad/glad.h
    include/KHR/khrplatform.h
    src/glad.c
)

target_include_directories(GLAD PUBLIC include/)