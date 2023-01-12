#include <log.hpp>

Logger::Logger(LogSeverity log_level) : m_log_level(log_level) {}

void Logger::log(const std::string &message, LogSeverity severity) {
  if (severity >= m_log_level) {
    std::cout << message << std::endl;
  }
}
