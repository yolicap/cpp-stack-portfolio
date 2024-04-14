add_subdirectory(handler)

add_executable(website "website.cpp")

target_link_libraries(website PUBLIC 
                        handler
                        )

target_include_directories(website PUBLIC
                        "${PROJECT_BINARY_DIR}"
                        "${PROJECT_SOURCE_DIR}/include"
                        )