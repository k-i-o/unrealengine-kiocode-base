#pragma once

#include "../../includes.h"

namespace ImGuiHelper {

	void HelpMarker(const char* desc);
	void AddText(ImVec2 pos, char* text, ImColor color);
	float DrawOutlinedText(ImFont* pFont, const ImVec2& pos, float size, ImU32 color, bool center, const char* text, ...);
	float DrawOutlinedTextForeground(ImFont* pFont, const ImVec2& pos, float size, ImU32 color, bool center, const char* text, ...);
	void RectFilled(float x0, float y0, float x1, float y1, ImColor color, float rounding, int rounding_corners_flags);
	void HealthBar(float x, float y, float w, float h, int phealth, ImColor col);
	void HealthBar(float x, float y, float w, float h, int phealth, ImColor col);
}