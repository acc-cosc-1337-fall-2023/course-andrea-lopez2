add_library(ex_06_01_library "create_str.cpp" "create_str.h" "tic_tac_toe_manager.cpp" "tic_tac_toe_manager.h")
add_executable(ex_06_01_exe "main.cpp" "create_str.cpp" "tic_tac_toe_manager.cpp")