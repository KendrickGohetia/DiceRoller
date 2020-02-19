#include "Background.h"
#include "Game.h"

Background::Background()
// call super constructor
	:Button(
		"../Assets/textures/background.png",
		"backGround",
		BACKGROUND, glm::vec2(400.0f, 300.0f))
{

}

Background::~Background()
{
}

bool Background::ButtonClick()
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
