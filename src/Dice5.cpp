#include "Dice5.h"
#include "Game.h"

Dice5::Dice5()
// call super constructor
	:Button(
		"../Assets/textures/5.png",
		"5",
		DICE5, glm::vec2(400.0f, 300.0f))
{

}

Dice5::~Dice5()
{
}

bool Dice5::ButtonClick()
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
