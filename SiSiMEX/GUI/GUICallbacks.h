#pragma once
#include "GUI.h"

////////////////////////////////////////////////////////////////////////////////
// SiSiMEX main menu
////////////////////////////////////////////////////////////////////////////////

void onguiRadioButtonApplicationModeChanged(Fl_Round_Button*);
void onguiButtonStartApplication();


////////////////////////////////////////////////////////////////////////////////
// Multi-agents application
////////////////////////////////////////////////////////////////////////////////

void onGuiButtonListLocalNodes();
void onGuiButtonInspectLocalNode();
void onguiButtonGetContributorsForItem();
void onGuiButtonQuitMultiagentApplication();


////////////////////////////////////////////////////////////////////////////////
// Yellow Pages application
////////////////////////////////////////////////////////////////////////////////

void onGuiButtonQuitYellowPages();