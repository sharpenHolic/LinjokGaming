aux_source_directory(. mariosrc)
message(STATUS "mariosrc: ${mariosrc}")
add_library(MarioLib ${mariosrc})