#include "state_manager.hpp"

#include <algorithm>
#include <utility>

namespace reja {

Manager::Manager([[maybe_unused]] const std::filesystem::path& config_path) {
    std::unreachable();
}

auto Manager::addTask(Task task) -> void {
    tasks_.emplace_back(std::move(task));
}

auto Manager::removeTask(const Task& task) -> void {
    removeTask(task.id_);
}

auto Manager::removeTask(const std::uint64_t taskId) -> void {
    if (const auto task_iter = std::ranges::find(tasks_, taskId, &Task::id_); task_iter != tasks_.end()) {
        tasks_.erase(task_iter);
    }
}

[[nodiscard]] auto Manager::findTask(const Task& task) const -> std::optional<Task> {
    return findTask(task.id_);
}

[[nodiscard]] auto Manager::findTask(const std::uint64_t taskId) const -> std::optional<Task> {
    if (const auto task_iter = std::ranges::find(tasks_, taskId, &Task::id_); task_iter != tasks_.end()) {
        return *task_iter;
    }
    return std::nullopt;
}

auto Manager::getTasks() const -> std::vector<Task> {
    return tasks_;
}

}  // namespace reja