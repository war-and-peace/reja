#pragma once

#include <state_manager.hpp>

namespace reja {

enum class ShellState : std::uint8_t { MENU, DISPLAY };
enum class ShellType : std::uint8_t { BASIC, INTERACTIVE };

class Shell {
   public:
    explicit Shell(Manager manager, const ShellType shellType);
    // auto drawCommandOutput() -> void;

   private:
    Manager manager_;
    ShellState state_;
    ShellType type_;
};

}  // namespace reja