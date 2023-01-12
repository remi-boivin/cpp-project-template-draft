#include <log.hpp>

int main(void) {
  Logger logger(LogSeverity::kDebug);  // Set log level to DEBUG
  logger.log("An error has occurred.", LogSeverity::kError);
  logger.log("Debugging information.", LogSeverity::kDebug);
  logger.log("Verbose information.", LogSeverity::kVerbose);
  logger.log("Normal log message.", LogSeverity::kNormal);
  return 0;
    return (0);
}