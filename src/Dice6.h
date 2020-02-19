#pragma once
#ifndef __DICE6__
#define __DICE6__

#include "Button.h"

class Dice6 : public Button
{
public:
	Dice6();
	~Dice6();

	bool ButtonClick() override;
private:

	bool m_isClicked;
};

#endif /* defined (__DICE6__) */