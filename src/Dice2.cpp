#include "Dice2.h"
#include "Game.h"

Dice2::Dice2()
// call super constructor
	:Button(
		"../Assets/textures/2.png",
		"2",
		DICE2, glm::vec2(400.0f, 300.0f))
{

}

Dice2::~Dice2()
{
}

bool Dice2::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
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
