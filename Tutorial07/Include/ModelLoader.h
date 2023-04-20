#pragma once
#include "Prerequisities.h"
#include "Commons.h"

class ModelLoader
{
public:
	ModelLoader() = default;
	~ModelLoader() {};

	void
	init();

	void
	update();

	void
	render();

	void
	destroy();

	LoadData
	load(std::string objFileName);


};
