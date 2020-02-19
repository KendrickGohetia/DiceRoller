#include "RollButton.h"
#include "Game.h"

RollButton::RollButton()
// call super constructor
	:Button(
		"../Assets/textures/rollButton.png",
		"rollButton",
		ROLL_BUTTON, glm::vec2(400.0f, 300.0f)), m_isClicked(false)
{

}

RollButton::~RollButton()
{
}

bool RollButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			randNums();

			r1 = getR1();
			r2 = getR2();

			std::cout << "R1: " << getR1() << std::endl;
			std::cout << "R2: " << getR2() << std::endl;
			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}


