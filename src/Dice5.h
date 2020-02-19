#pragma once
#ifndef __DICE5__
#define __DICE5__

#include "Button.h"

class Dice5 : public Button
{
public:
	Dice5();
	~Dice5();

	bool ButtonClick() override;
private:

	bool m_isClicked;
};

#endif /* defined (__DICE5__) */