Route2_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route2_Frlg_OnLoad
	.byte 0

Route2_Frlg_OnLoad::
	setvar VAR_GAUNTLET_NURSE_HEALS_USED, 0
	end

Route2_EventScript_CheckHeals::
	goto_if_ne VAR_GAUNTLET_NURSE_HEALS_USED, 1, Route2_EventScript_Nurse
	msgbox Route2_Text_CantHealAnymore, MSGBOX_NPC
	end

Route2_EventScript_Nurse::
	lock
	faceplayer
	msgbox Route2_Text_TakeAShortRest, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route2_EventScript_DeclineHeal
	closemessage
	addvar VAR_GAUNTLET_NURSE_HEALS_USED, 1
	call Common_EventScript_OutOfCenterPartyHeal
	release
	end

Route2_EventScript_DeclineHeal::
	msgbox Route2_Text_TooPrideful, MSGBOX_NPC
	release
	end

Route2_EventScript_Gentleman::
	lock
	faceplayer
	msgbox Route2_Text_WIP, MSGBOX_NPC
	release
	end

Route2South_EventScript_WalkedOutRoute2SouthTrigger::
	lockall
	goto_if_set FLAG_WALKED_OUT_ROUTE2_SOUTH_GAUNTLET, Route2South_EventScript_AlreadyGotWalkedOutRoute2SouthGauntlet
	setflag FLAG_WALKED_OUT_ROUTE2_SOUTH_GAUNTLET
	releaseall
	end

Route2South_EventScript_AlreadyGotWalkedOutRoute2SouthGauntlet::
	releaseall
	end

Route2South_EventScript_WalkedInTrigger::
	lockall
	goto_if_set FLAG_WALKED_OUT_ROUTE2_SOUTH_GAUNTLET, Route2South_EventScript_SkipSetWalkedInRoute2SouthGauntlet
	goto_if_set FLAG_WALKED_IN_ROUTE2_SOUTH_GAUNTLET, Route2South_EventScript_GauntletStarted
	setflag FLAG_WALKED_IN_ROUTE2_SOUTH_GAUNTLET
	releaseall
	end

Route2South_EventScript_SkipSetWalkedInRoute2SouthGauntlet::
	releaseall
	end

Route2South_EventScript_GauntletStarted::
	Route2South_EventScript_GauntletStartedTrigger::	
	textcolor NPC_TEXT_COLOR_NEUTRAL
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 30
	playbgm MUS_TOO_BAD, 0
	message Route2_Text_PrideLock
	waitmessage
	delay 85
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
	waitmovement 0
	playse SE_PIN
	releaseall
	end

Route2_EventScript_HikerTom::
	trainerbattle_single TRAINER_HIKER_TOM, Route2_Text_HikerTomIntro, Route2_Text_HikerTomDefeat
	msgbox Route2_Text_HikerTomPostBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_PokemaniacLuis::
	trainerbattle_single TRAINER_POKEMANIAC_LUIS, Route2_Text_PokemaniacLuisIntro, Route2_Text_PokemaniacLuisDefeat
	msgbox Route2_Text_PokemaniacLuisPostBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_RouteSign::
	msgbox Route2_Text_RouteSign, MSGBOX_SIGN
	end

Route2_EventScript_DiglettsCaveSign::
	msgbox Route2_Text_DiglettsCave, MSGBOX_SIGN
	end


Route2_Text_PrideLock::
    .string "Your pride prevents you from\n"
    .string "leaving this area!$"

Route2_Text_TakeAShortRest::
	.string "Your pokemon look tired, do you want\n"
	.string "to take a short rest?$"

Route2_Text_TooPrideful::
	.string "I get you're very prideful but...\n"
	.string "don't forget to let your pokemon\l"
	.string "rest and recover.$"

Route2_Text_CantHealAnymore::
	.string "Sorry, my Audino has run out of\n"
	.string "Healing Pulse PP.$"

Route2_Text_WIP::
	.string "Sorry, my services are unavailable.\n"
	.string "The penguin is working on it.$"

Route2_Text_RouteSign::
	.string "ROUTE 2\n"
	.string "VIRIDIAN CITY - PEWTER CITY$"

Route2_Text_HikerTomIntro::
	.string "I'm far from home.$"

Route2_Text_HikerTomDefeat::
	.string "Ah... I see now.\n"
	.string "This is Route 2$"

Route2_Text_HikerTomPostBattle::
	.string "There's no way home\n"
	.string "I can't get to digglet's cave.$"

Route2_Text_PokemaniacLuisIntro::
	.string "I LOVE Pokemon, my favourite's\n"
	.string "...\l"
	.string "SLUGMA$"

Route2_Text_PokemaniacLuisDefeat::
	.string "How could my toe lose$"

Route2_Text_PokemaniacLuisPostBattle::
	.string "Male Combees can evolve$"
	
Route2_Text_DiglettsCave::
	.string "DIGLETT'S CAVE$"

