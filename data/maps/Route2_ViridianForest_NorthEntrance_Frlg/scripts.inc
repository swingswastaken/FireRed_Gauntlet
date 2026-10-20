Route2_ViridianForest_NorthEntrance_Frlg_MapScripts::
	.byte 0

Route2_ViridianForest_NorthEntrance_EventScript_Nurse::
	lock
	faceplayer
	msgbox Route2_ViridianForest_NorthEntrance_Text_TakeAShortRest, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route2_ViridianForest_NorthEntrance_EventScript_DeclineHeal
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	release
	end

Route2_ViridianForest_NorthEntrance_EventScript_DeclineHeal::
	msgbox Route2_ViridianForest_NorthEntrance_Text_TooPrideful, MSGBOX_NPC
	release
	end

Route2_ViridianForest_NorthEntrance_EventScript_Gentleman::
	lock
	faceplayer
	msgbox Route2_ViridianForest_NorthEntrance_Text_WIP, MSGBOX_NPC
	release
	end

Route2_ViridianForest_NorthEntrance_EventScript_Youngster::
	msgbox Route2_ViridianForest_NorthEntrance_Text_ManyMonsOnlyInForests, MSGBOX_NPC
	end

Route2_ViridianForest_NorthEntrance_EventScript_OldMan::
	msgbox Route2_ViridianForest_NorthEntrance_Text_CanCutSkinnyTrees, MSGBOX_NPC
	end

Route2_ViridianForest_NorthEntrance_EventScript_CooltrainerF::
	msgbox Route2_ViridianForest_NorthEntrance_Text_CanCancelEvolution, MSGBOX_NPC
	end

Route2_ViridianForest_NorthEntrance_Text_TakeAShortRest::
	.string "Your pokemon look tired, do you want\n"
	.string "to take a short rest?$"

Route2_ViridianForest_NorthEntrance_Text_TooPrideful::
	.string "I get you're very prideful but...\n"
	.string "don't forget to let your pokemon\l"
	.string "rest and recover.$"

Route2_ViridianForest_NorthEntrance_Text_WIP::
	.string "Sorry, my services are unavailable.\n"
	.string "The penguin is working on it.$"

Route2_ViridianForest_NorthEntrance_Text_ManyMonsOnlyInForests::
	.string "Many POKéMON live only in forests \n"
	.string "and caves.\p"
	.string "You need to be persistent and look\n"
	.string "everywhere to get different kinds.$"

Route2_ViridianForest_NorthEntrance_Text_CanCutSkinnyTrees::
	.string "Have you noticed the skinny trees\n"
	.string "on the roadside?\p"
	.string "They can be cut down by a special\n"
	.string "POKéMON move, I hear.$"

Route2_ViridianForest_NorthEntrance_Text_CanCancelEvolution::
	.string "Do you know the evolution-cancel\n"
	.string "technique?\p"
	.string "When a POKéMON is evolving, you\n"
	.string "can stop the process.\p"
	.string "It's a technique for raising\n"
	.string "POKéMON the way they are.$"

