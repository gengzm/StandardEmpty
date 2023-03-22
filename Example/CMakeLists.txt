
# empty Example
file (GLOB Empty_SOURCE_EXAMPLE
    
    )
set(Example_Empty Example_Empty)
add_executable(${Example_Empty} ${Empty_SOURCE_EXAMPLE} ./Example_Empty.cpp )
target_include_directories(${Example_Empty} PRIVATE ) 
target_link_libraries(${Example_Empty} PRIVATE )