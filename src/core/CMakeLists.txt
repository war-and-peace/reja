add_library(core "units.hpp" "units.cpp" "state_manager.hpp" "state_manager.cpp")
target_compile_features(core PRIVATE cxx_std_23)