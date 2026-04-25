#pragma once
#include <filesystem>
#include <optional>
#include <vector>

#include "units.hpp"

namespace reja {
class Manager {
   public:
    explicit Manager(std::vector<Task> tasks) : tasks_(std::move(tasks)) {}
    explicit Manager(const std::filesystem::path& config_path);
    auto addTask(Task task) -> void;
    auto removeTask(const Task& task) -> void;
    auto removeTask(const std::uint64_t taskId) -> void;
    [[nodiscard]] auto findTask(const Task& task) const -> std::optional<Task>;
    [[nodiscard]] auto findTask(const std::uint64_t taskId) const -> std::optional<Task>;
    [[nodiscard]] auto getTasks() const -> std::vector<Task>;

   private:
    std::vector<Task> tasks_;
};
}  // namespace reja