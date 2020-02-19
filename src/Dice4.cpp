#include "Dice4.h"
#include "Game.h"

Dice4::Dice4()
// call super constructor
	:Button(
		"../Assets/textures/4.png",
		"4",
		DICE4, glm::vec2(400.0f, 300.0f))
{

}

Dice4::~Dice4()
{
}

bool Dice4::ButtonClick()
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
