#include "Dice3.h"
#include "Game.h"

Dice3::Dice3()
// call super constructor
	:Button(
		"../Assets/textures/3.png",
		"3",
		DICE3, glm::vec2(400.0f, 300.0f))
{

}

Dice3::~Dice3()
{
}

bool Dice3::ButtonClick()
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
