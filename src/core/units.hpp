#pragma once
#include <cstdint>
#include <string>

namespace reja {

struct Task {
    std::string message_;
    std::uint64_t creation_time_;
    std::uint64_t reminder_time_;
    std::uint64_t id_;
};

}  // namespace reja