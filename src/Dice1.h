#pragma once
#ifndef __DICE1__
#define __DICE1__

#include "Button.h"

class Dice1 : public Button
{
public:
	Dice1();
	~Dice1();

	bool ButtonClick() override;
private:

	bool m_isClicked;
};

#endif /* defined (__DICE1__) */