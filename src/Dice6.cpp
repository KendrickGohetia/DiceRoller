#include "Dice6.h"
#include "Game.h"

Dice6::Dice6()
// call super constructor
	:Button(
		"../Assets/textures/6.png",
		"6",
		DICE6, glm::vec2(400.0f, 300.0f))
{

}

Dice6::~Dice6()
{
}

bool Dice6::ButtonClick()
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
