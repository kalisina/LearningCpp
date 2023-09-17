#include "Logger.h"
#include <iostream>

	Logger::Logger() {
		m_LogLevel = 0;
	}

	void Logger::SetLevel(int level) {
		m_LogLevel = level;
	}

	void Logger::Error(const char* message) {
		if (m_LogLevel >= LogLevelError) {
			std::cout << "[Error] " << message << std::endl;
		}
	}

	void Logger::Warn(const char* message) {
		if (m_LogLevel >= LogLevelWarning) {
			std::cout << "[Warning] " << message << std::endl;
		}
	}

	void Logger::Info(const char* message) {
		if (m_LogLevel >= LogLevelInfo) {
			std::cout << "[Info] " << message << std::endl;
		}
	}
