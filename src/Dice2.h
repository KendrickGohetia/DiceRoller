#pragma once
#ifndef __DICE2__
#define __DICE2__

#include "Button.h"

class Dice2 : public Button
{
public:
	Dice2();
	~Dice2();

	bool ButtonClick() override;
private:

	bool m_isClicked;
};

#endif /* defined (__DICE2__) */