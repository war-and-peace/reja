add_library(shell "shell.hpp" "shell.cpp")
target_compile_features(shell PRIVATE cxx_std_23)