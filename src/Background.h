#pragma once
#ifndef __BACKGROUND__
#define __BACKGROUND__

#include "Button.h"

class Background : public Button
{
public:
	Background();
	~Background();

	bool ButtonClick() override;
private:

	bool m_isClicked;
};

#endif /* defined (__BACKGROUND__) */