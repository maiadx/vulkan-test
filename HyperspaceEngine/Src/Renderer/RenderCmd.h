#pragma once
#include "Renderer/Platform/RenderAPIContext.h"

class hyRenderCmd
{
	static hyRenderAPIContext* RenderAPIContext;

public:

	static void CreateContext(hyRenderAPI api);
	static void DestroyContext();	

	



};
