#pragma once
class Logger
{
public: 
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;

public:
	Logger(); // constructor
	void SetLevel(int level);
	void Error(const char* message);
	void Warn(const char* message);
	void Info(const char* message);

private:
	int m_LogLevel = LogLevelInfo;
};

