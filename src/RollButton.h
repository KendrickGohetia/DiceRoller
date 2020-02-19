#pragma once
#ifndef __ROLL_BUTTON__
#define __ROLL_BUTTON__

#include "Button.h"

class RollButton : public Button
{
public:
	RollButton();
	~RollButton();


	bool ButtonClick() override;
private:
	bool m_isClicked;

	int r1, r2;
};

#endif /* defined (__ROLL_BUTTON__) */