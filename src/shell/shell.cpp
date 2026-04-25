#include "shell.hpp"

#include <utility>

namespace reja {

Shell::Shell(Manager manager, const ShellType shellType)
    : manager_(std::move(manager)), state_(ShellState::MENU), type_(shellType) {}

}  // namespace reja