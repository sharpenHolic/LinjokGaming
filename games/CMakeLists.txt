# 将该目录下的cpp文件包含在gamesrc之内
add_subdirectory(mario)
aux_source_directory(. gamesrc)
message(STATUS "gamesrc: ${gamesrc}")
add_library(GamesLib ${gamesrc})