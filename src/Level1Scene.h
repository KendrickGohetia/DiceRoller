#pragma once
#ifndef __LEVEL_1_SCENE__
#define __LEVEL_1_SCENE__

#include "Scene.h"
#include "Label.h"
#include "RollButton.h"
#include "Dice1.h"
#include "Dice2.h"
#include "Dice3.h"
#include "Dice4.h"
#include "Dice5.h"
#include "Dice6.h"
#include "Background.h"


class Level1Scene : public Scene
{
public:
	Level1Scene();
	~Level1Scene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;

	

	// getters
	glm::vec2 getMousePosition();

private:
	// game objects
	RollButton* m_pRollButton;
	Dice1* m_pDice1_1;
	Dice1* m_pDice1_2;
	Dice2* m_pDice2_1;
	Dice2* m_pDice2_2;
	Dice3* m_pDice3_1;
	Dice3* m_pDice3_2;
	Dice4* m_pDice4_1;
	Dice4* m_pDice4_2;
	Dice5* m_pDice5_1;
	Dice5* m_pDice5_2;
	Dice6* m_pDice6_1;
	Dice6* m_pDice6_2;
	Label* m_pResultLabel1;
	Label* m_pResultLabel2;
	Background* m_pBackground;



	// private data member
	glm::vec2 m_mousePosition;

	SDL_Color blue = { 0, 0, 255, 255 };
	SDL_Color red = { 255, 0, 0, 255 };
	SDL_Color green = { 0, 255, 0, 255 };
	SDL_Color black = { 0, 0, 0, 255 };

	int r1, r2;
	
	
};

#endif /* defined (__LEVEL_1_SCENE__) */
