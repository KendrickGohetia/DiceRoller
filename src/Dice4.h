#pragma once
#ifndef __DICE4__
#define __DICE4__

#include "Button.h"

class Dice4 : public Button
{
public:
	Dice4();
	~Dice4();

	bool ButtonClick() override;
private:

	bool m_isClicked;
};

#endif /* defined (__DICE4__) */