# Set the source files

set(LIB_FILES
    temp-c-raylib.c
)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS YES CACHE BOOL "Export all symbols")


add_library(${PROJECT_NAME} SHARED ${LIB_FILES})

target_link_libraries(${PROJECT_NAME} raylib)


target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

install(
    TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
)
