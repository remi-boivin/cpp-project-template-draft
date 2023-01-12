#include <iostream>

enum class LogSeverity {
  kDebug,
  kVerbose,
  kInfo,
  kNormal,
  kError,
};

class Logger {
public:
  Logger(LogSeverity log_level);

  void log(const std::string &message, LogSeverity severity);

private:
  LogSeverity m_log_level;
};