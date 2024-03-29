#ifndef UFI_TERMINAL_H
#define UFI_TERMINAL_H

#include <string>

class UFI_Terminal
{
private:
	UFI_Terminal(const UFI_Terminal& rhs);
	UFI_Terminal& operator=(const UFI_Terminal& rhs);

public:
	UFI_Terminal();
	~UFI_Terminal();
	std::string RunTerminalCmd(const char*);
	bool Zenity_pallete(SDL_Color*);
};

#endif // UFI_TERMINAL_H
