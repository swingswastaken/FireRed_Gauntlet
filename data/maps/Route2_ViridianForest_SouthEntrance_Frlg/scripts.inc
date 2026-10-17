Route2_ViridianForest_SouthEntrance_Frlg_MapScripts::
	.byte 0

Route2_ViridianForest_SouthEntrance_EventScript_Nurse::
	lock
	faceplayer
	msgbox Route2_Text_TakeAShortRest, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route2_ViridianForest_SouthEntrance_EventScript_DeclineHeal
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	release
	end

Route2_ViridianForest_SouthEntrance_EventScript_DeclineHeal::
	msgbox Route2_Text_TooPrideful, MSGBOX_NPC
	release
	end

Route2_ViridianForest_SouthEntrance_EventScript_Gentleman::
	lock
	faceplayer
	msgbox Route2_Text_WIP, MSGBOX_NPC
	release
	end

Route2_ViridianForest_SouthEntrance_EventScript_Woman1::
	msgbox Route2_ViridianForest_SouthEntrance_Text_ForestIsMaze, MSGBOX_NPC
	end

Route2_ViridianForest_SouthEntrance_EventScript_Woman2::
	msgbox Route2_ViridianForest_SouthEntrance_Text_RattataHasWickedBite, MSGBOX_NPC
	end

Route2_ViridianForest_SouthEntrance_Text_TakeAShortRest::
	.string "Your pokemon look tired, do you want\n"
	.string "to take a short rest?$"

Route2_ViridianForest_SouthEntrance_Text_TooPrideful::
	.string "I get you're very prideful but...\n"
	.string "don't forget to let your pokemon\l"
	.string "rest and recover.$"

Route2_ViridianForest_SouthEntrance_Text_WIP::
	.string "Sorry, my services are unavailable.\n"
	.string "The penguin is working on it.$"

Route2_ViridianForest_SouthEntrance_Text_ForestIsMaze::
	.string "Are you going to VIRIDIAN FOREST?\n"
	.string "It's a natural maze in there.\l"
	.string "Be careful you don't get lost.$"

Route2_ViridianForest_SouthEntrance_Text_RattataHasWickedBite::
	.string "RATTATA may be small, but don't\n"
	.string "underestimate its wicked bite.\p"
	.string "Have you caught one already?$"


