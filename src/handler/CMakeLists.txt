add_library(handler handler.cpp)
target_link_libraries(handler PUBLIC 
                        httplib::httplib
                        )