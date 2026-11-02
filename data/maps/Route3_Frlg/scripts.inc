Route3_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route3_Frlg_OnLoad
	.byte 0

Route3_Frlg_OnLoad::
	setvar VAR_GAUNTLET_NURSE_HEALS_USED, 0
	end

Route3_EventScript_WalkedOutRoute3Trigger::
	goto_if_set FLAG_WALKED_OUT_ROUTE_3_GAUNTLET, Route3_EventScript_AlreadyGotWalkedOutRoute3Gauntlet
	setflag FLAG_WALKED_OUT_ROUTE_3_GAUNTLET
	end

Route3_EventScript_AlreadyGotWalkedOutRoute3Gauntlet::
	end

Route3_EventScript_WalkedInTrigger::
	goto_if_set FLAG_WALKED_OUT_ROUTE_3_GAUNTLET, Route3_EventScript_SkipSetWalkedInRoute3Gauntlet
	goto_if_set FLAG_WALKED_IN_ROUTE_3_GAUNTLET, Route3_EventScript_GauntletStarted
	setflag FLAG_WALKED_IN_ROUTE_3_GAUNTLET
	end

Route3_EventScript_SkipSetWalkedInRoute3Gauntlet::
	end

Route3_EventScript_GauntletStarted::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 30
	playbgm MUS_TOO_BAD, 0
	message Route3_Text_PrideLock
	waitmessage
	delay 85
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	playse SE_PIN
	releaseall
	end

Route3_EventScript_GauntletEnded::
	releaseall
	end

Route3_EventScript_CheckHeals::
	goto_if_ne VAR_GAUNTLET_NURSE_HEALS_USED, 2, Route3_EventScript_Nurse
	msgbox Route3_Text_CantHealAnymore, MSGBOX_NPC
	end

Route3_EventScript_Nurse::
	lock
	faceplayer
	msgbox Route3_Text_TakeAShortRest, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route3_EventScript_DeclineHeal
	closemessage
	addvar VAR_GAUNTLET_NURSE_HEALS_USED, 1
	call Common_EventScript_OutOfCenterPartyHeal
	release
	end

Route3_EventScript_DeclineHeal::
	msgbox Route3_Text_TooPrideful, MSGBOX_NPC
	release
	end

Route3_EventScript_Gentleman::
	lock
	faceplayer
	msgbox Route3_Text_WIP, MSGBOX_NPC
	release
	end

Route3_EventScript_Youngster::
	msgbox Route3_Text_TunnelFromCeruleanTiring, MSGBOX_NPC
	end

Route3_EventScript_RouteSign::
	msgbox Route3_Text_RouteSign, MSGBOX_SIGN
	end

Route3_Text_TakeAShortRest::
	.string "I can only heal your team 2 times.\p"
	.string "Your pokemon look tired, do you want\n"
	.string "to take a short rest?$"

Route3_Text_TooPrideful::
	.string "I get you're very prideful but...\n"
	.string "don't forget to let your pokemon\l"
	.string "rest and recover.$"

Route3_Text_CantHealAnymore::
	.string "Sorry, my Audino has run out of\n"
	.string "Healing Pulse PP.$"

Route3_Text_WIP::
	.string "Sorry, my services are unavailable.\n"
	.string "The penguin is working on it.$"
	
Route3_Text_PrideLock::
    .string "Your pride prevents you from\n"
    .string "leaving this area!$"

Route3_Text_TunnelFromCeruleanTiring::
	.string "Whew… I better take a rest…\n"
	.string "Groan…\p"
	.string "That tunnel from CERULEAN takes a\n"
	.string "lot out of you!$"

Route3_Text_ColtonIntro::
	.string "Hey!\n"
	.string "I saw you in VIRIDIAN FOREST!\n"
	.string "That Kricketune took your POKéMON!\p"

Route3_Text_ColtonDefeat::
	.string "What do you say? That it didnt'?\n"
	.string "The multiverse is full of surprises.$"

Route3_Text_ColtonPostBattle::
	.string "There are other ways of getting POKéMON\n"
	.string "than just catchin' em in the grass.$"

Route3_Text_BenIntro::
	.string "Hi!\n"
	.string "I like climbing boots!\p"
	.string "They're delightfully uncomfy and\n"
	.string "hard to wear!$"

Route3_Text_BenDefeat::
	.string "My boots!$"

Route3_Text_BenPostBattle::
	.string "Are you using a POKéMON CENTER's\n"
	.string "PC for storing your POKéMON?\p"
	.string "Each BOX can hold up to\n"
	.string "30 POKéMON.\p"
	.string "Not like you'll fill it anyway,\n"
	.string "you're Nuzlocking, aren't you?$"

Route3_Text_JaniceIntro::
	.string "Excuse me!\n"
	.string "You looked at me, didn't you?$"

Route3_Text_JaniceDefeat::
	.string "You're mean!$"

Route3_Text_JanicePostBattle::
	.string "You shouldn't be staring if you\n"
	.string "don't want to battle!$"

Route3_Text_GregIntro::
	.string "Are you a TRAINER?\n"
	.string "Let's get with it right away!$"

Route3_Text_GregDefeat::
	.string "If I had new POKéMON, I would've\n"
	.string "won!$"

Route3_Text_GregPostBattle::
	.string "If a POKéMON BOX on the PC gets\n"
	.string "full, just switch to another BOX.\p"
	.string "Unless it's the GRAVEYARD BOX,\n"
	.string "in that case you will NOT scale.$"

Route3_Text_SallyIntro::
	.string "That look you gave me…\n"
	.string "It's so intriguing!$"

Route3_Text_SallyDefeat::
	.string "Be nice!$"

Route3_Text_SallyPostBattle::
	.string "You chose to fight me instead\n"
	.string "of the Bug Trainer! How sweet!$"

Route3_Text_CalvinIntro::
	.string "Hey! You're not wearing climbing\p"
	.string "boots! What's wrong with you?$"

Route3_Text_CalvinDefeat::
	.string "Lost!\n"
	.string "Lost! Lost!$"

Route3_Text_CalvinPostBattle::
	.string "I always wear climbing boots\n"
	.string "How would have I gotten here else?\p"
	.string "That's my secret.$"

Route3_Text_JamesIntro::
	.string "I'll battle you with the POKéMON\n"
	.string "I just caught.$"

Route3_Text_JamesDefeat::
	.string "Done like dinner!$"

Route3_Text_JamesPostBattle::
	.string "Trained POKéMON are stronger than\n"
	.string "the wild ones.$"

Route3_Text_RobinIntro::
	.string "Eek!\n"
	.string "Did you touch me?$"

Route3_Text_RobinDefeat::
	.string "That's it?$"

Route3_Text_RobinPostBattle::
	.string "ROUTE 4 is at the foot of\n"
	.string "MT. MOON.$"

Route3_Text_RouteSign::
	.string "ROUTE 3\n"
	.string "MT. MOON AHEAD$"

