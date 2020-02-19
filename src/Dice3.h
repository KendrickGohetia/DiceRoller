#pragma once
#ifndef __DICE3__
#define __DICE3__

#include "Button.h"

class Dice3 : public Button
{
public:
	Dice3();
	~Dice3();

	bool ButtonClick() override;
private:

	bool m_isClicked;
};

#endif /* defined (__DICE3__) */