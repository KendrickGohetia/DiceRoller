#include "Level1Scene.h"
#include "Game.h"
#include <iostream>

Level1Scene::Level1Scene()
{
	start();
}

Level1Scene::~Level1Scene()
{
}

void Level1Scene::draw()
{
	m_pRollButton->draw();

	switch (r1) {
	case 1:
		m_pDice1_1->draw();
		break;
	case 2:
		m_pDice2_1->draw();
		break;
	case 3:
		m_pDice3_1->draw();
		break;
	case 4:
		m_pDice4_1->draw();
		break;
	case 5:
		m_pDice5_1->draw();
		break;
	case 6:
		m_pDice6_1->draw();
		break;
	}

	switch (r2) {
	case 1:
		m_pDice1_2->draw();
		break;
	case 2:
		m_pDice2_2->draw();
		break;
	case 3:
		m_pDice3_2->draw();
		break;
	case 4:
		m_pDice4_2->draw();
		break;
	case 5:
		m_pDice5_2->draw();
		break;
	case 6:
		m_pDice6_2->draw();
		break;
	}
}

void Level1Scene::update()
{
	m_pRollButton->setMousePosition(m_mousePosition);

	if (m_pRollButton->ButtonClick()) {

		switch (r1) {
		case 1:
			delete m_pDice1_1;
			break;
		case 2:
			delete m_pDice2_1;
			break;
		case 3:
			delete m_pDice3_1;
			break;
		case 4:
			delete m_pDice4_1;
			break;
		case 5:
			delete m_pDice5_1;
			break;
		case 6:
			delete m_pDice6_1;
			break;
		}

		switch (r2) {
		case 1:
			delete m_pDice1_2;
			break;
		case 2:
			delete m_pDice2_2;
			break;
		case 3:
			delete m_pDice3_2;
			break;
		case 4:
			delete m_pDice4_2;
			break;
		case 5:
			delete m_pDice5_2;
			break;
		case 6:
			delete m_pDice6_2;
			break;
		}

		r1 = m_pRollButton->getR1();
		r2 = m_pRollButton->getR2();

		switch (r1) {
		case 1:
			m_pDice1_1 = new Dice1();
			m_pDice1_1->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.25f, Config::SCREEN_HEIGHT * 0.4f));
			addChild(m_pDice1_1);
			break;
		case 2:
			m_pDice2_1 = new Dice2();
			m_pDice2_1->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.25f, Config::SCREEN_HEIGHT * 0.4f));
			addChild(m_pDice2_1);
			break;
		case 3:
			m_pDice3_1 = new Dice3();
			m_pDice3_1->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.25f, Config::SCREEN_HEIGHT * 0.4f));
			addChild(m_pDice3_1);
			break;
		case 4:
			m_pDice4_1 = new Dice4();
			m_pDice4_1->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.25f, Config::SCREEN_HEIGHT * 0.4f));
			addChild(m_pDice4_1);
			break;
		case 5:
			m_pDice5_1 = new Dice5();
			m_pDice5_1->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.25f, Config::SCREEN_HEIGHT * 0.4f));
			addChild(m_pDice5_1);
			break;
		case 6:
			m_pDice6_1 = new Dice6();
			m_pDice6_1->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.25f, Config::SCREEN_HEIGHT * 0.4f));
			addChild(m_pDice6_1);
			break;
		}

		switch (r2) {
		case 1:
			m_pDice1_2 = new Dice1();
			m_pDice1_2->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.75f, Config::SCREEN_HEIGHT * 0.4f));
			addChild(m_pDice1_2);
			break;
		case 2:
			m_pDice2_2 = new Dice2();
			m_pDice2_2->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.75f, Config::SCREEN_HEIGHT * 0.4f));
			addChild(m_pDice2_2);
			break;
		case 3:
			m_pDice3_2 = new Dice3();
			m_pDice3_2->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.75f, Config::SCREEN_HEIGHT * 0.4f));
			addChild(m_pDice3_2);
			break;
		case 4:
			m_pDice4_2 = new Dice4();
			m_pDice4_2->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.75f, Config::SCREEN_HEIGHT * 0.4f));
			addChild(m_pDice4_2);
			break;
		case 5:
			m_pDice5_2 = new Dice5();
			m_pDice5_2->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.75f, Config::SCREEN_HEIGHT * 0.4f));
			addChild(m_pDice5_2);
			break;
		case 6:
			m_pDice6_2 = new Dice6();
			m_pDice6_2->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.75f, Config::SCREEN_HEIGHT * 0.4f));
			addChild(m_pDice6_2);
			break;
		}
	}

	
}

void Level1Scene::clean()
{
}

void Level1Scene::handleEvents()
{
	int wheel = 0;

	SDL_Event event;
	while(SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			TheGame::Instance()->quit();
			break;
		case SDL_MOUSEMOTION:
			m_mousePosition.x = event.motion.x;
			m_mousePosition.y = event.motion.y;
			break;

		case SDL_MOUSEBUTTONDOWN:
			switch(event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(true);
				break;
			}
		
			break;
		case SDL_MOUSEBUTTONUP:
			switch (event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(false);
				break;
			}
			break;
		case SDL_MOUSEWHEEL:
			wheel = event.wheel.y;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				TheGame::Instance()->quit();
				break;
			case SDLK_1:
				TheGame::Instance()->changeSceneState(SceneState::START_SCENE);
				break;
			case SDLK_2:
				TheGame::Instance()->changeSceneState(SceneState::END_SCENE);
				break;
			

				/************************************************************************/
			case SDLK_w:
				
				break;
			case SDLK_s:
				
				break;
			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		case SDL_KEYUP:
			switch (event.key.keysym.sym)
			{
			case SDLK_w:
				
				break;

			case SDLK_s:
				
				break;

			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		default:
			break;
		}
	}
}

void Level1Scene::start()
{
	m_pRollButton = new RollButton();
	m_pRollButton->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5f, Config::SCREEN_HEIGHT * 0.7f));
	addChild(m_pRollButton);
}

glm::vec2 Level1Scene::getMousePosition()
{
	return m_mousePosition;
}

