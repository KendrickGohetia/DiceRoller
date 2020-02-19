#include "Dice1.h"
#include "Game.h"

Dice1::Dice1()
// call super constructor
	:Button(
		"../Assets/textures/1.png",
		"1",
		DICE1, glm::vec2(400.0f, 300.0f))
{

}

Dice1::~Dice1()
{
}

bool Dice1::ButtonClick()
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


