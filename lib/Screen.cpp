#include "Screen.h"

Screen::Screen(std::shared_ptr<Mediator> mid):Colleage{mid}{}
Screen::~Screen(){}

void Screen::Restor(Memento* mem){}
Memento* Screen::Backup(void){return nullptr;}
std::string Screen::GetInput(void){return "\0";}
std::string Screen::GetAutho(void){return "\0";}
std::string Screen::GetOutput(void){return "\0";}