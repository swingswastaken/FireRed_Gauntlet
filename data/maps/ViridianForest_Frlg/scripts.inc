ViridianForest_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianForest_OnTransition
	.byte 0

ViridianForest_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
	end

ViridianForest_EventScript_WalkedInTrigger::
	lockall
	goto_if_set FLAG_WALKED_OUT_VIRIDIAN_FOREST_GAUNTLET, ViridianForest_EventScript_SkipSetWalkedInViridianForestGauntlet
	goto_if_set FLAG_WALKED_IN_VIRIDIAN_FOREST_GAUNTLET, ViridianForest_EventScript_GauntletStarted
	setflag FLAG_WALKED_IN_VIRIDIAN_FOREST_GAUNTLET
	releaseall
	end

ViridianForest_EventScript_SkipSetWalkedInViridianForestGauntlet::
	releaseall
	end

ViridianForest_EventScript_GauntletStarted::
	ViridianForest_EventScript_GauntletStartedTrigger::	
	textcolor NPC_TEXT_COLOR_NEUTRAL
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 30
	playbgm MUS_TOO_BAD, 0
	message ViridianForest_Text_PrideLock
	waitmessage
	delay 85
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
	waitmovement 0
	playse SE_PIN
	releaseall
	end

ViridianForest_EventScript_Youngster::
	msgbox ViridianForest_Text_FriendsItchingToBattle, MSGBOX_NPC
	end

ViridianForest_EventScript_Boy::
	msgbox ViridianForest_Text_RanOutOfPokeBalls, MSGBOX_NPC
	end

ViridianForest_EventScript_TrainerTips1::
	msgbox ViridianForest_Text_AvoidGrassyAreasWhenWeak, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips2::
	msgbox ViridianForest_Text_UseAntidoteForPoison, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips3::
	msgbox ViridianForest_Text_ContactOakViaPCToRatePokedex, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips4::
	msgbox ViridianForest_Text_CantCatchOwnedMons, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips5::
	msgbox ViridianForest_Text_WeakenMonsBeforeCapture, MSGBOX_SIGN
	end

ViridianForest_EventScript_ExitSign::
	msgbox ViridianForest_Text_LeavingViridianForest, MSGBOX_SIGN
	end

ViridianForest_EventScript_Rick::
	trainerbattle_single TRAINER_BUG_CATCHER_RICK, ViridianForest_Text_RickIntro, ViridianForest_Text_RickDefeat
	msgbox ViridianForest_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Doug::
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG, ViridianForest_Text_DougIntro, ViridianForest_Text_DougDefeat
	msgbox ViridianForest_Text_DougPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Sammy::
	trainerbattle_single TRAINER_BUG_CATCHER_SAMMY, ViridianForest_Text_SammyIntro, ViridianForest_Text_SammyDefeat
	msgbox ViridianForest_Text_SammyPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Charlie::
	trainerbattle_single TRAINER_BUG_CATCHER_CHARLIE, ViridianForest_Text_CharlieIntro, ViridianForest_Text_CharlieDefeat
	msgbox ViridianForest_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_OptionalFightCheckGauntlet::
	goto_if_set FLAG_GOT_KRICKETOT_FROM_SANS, ViridianForest_EventScript_AlreadyGotKricketot
	goto_if_unset FLAG_WALKED_OUT_VIRIDIAN_FOREST_GAUNTLET, ViridianForest_EventScript_OptionalFight
	msgbox ViridianForest_Text_BadKid, MSGBOX_DEFAULT
	releaseall
	end

ViridianForest_EventScript_OptionalFight::
	call_if_set FLAG_DECLINED_OPTIONAL_FIGHT_VIRIDIAN_FOREST, ViridianForest_EventScript_AskToBattleAgain
	call_if_unset FLAG_DECLINED_OPTIONAL_FIGHT_VIRIDIAN_FOREST, ViridianForest_EventScript_AskToBattle
	goto_if_eq VAR_RESULT, NO, ViridianForest_EventScript_DeclineBattle
	goto ViridianForest_EventScript_BattleOptionalSans
	end

ViridianForest_EventScript_AskToBattleAgain::
	msgbox ViridianForest_Text_SansBadTime, MSGBOX_YESNO
	return

ViridianForest_EventScript_AskToBattle::
	msgbox ViridianForest_Text_SansBadTime, MSGBOX_YESNO
	return

ViridianForest_EventScript_DeclineBattle::
	setflag FLAG_DECLINED_OPTIONAL_FIGHT_VIRIDIAN_FOREST
	msgbox ViridianForest_Text_StrongestAttack, MSGBOX_DEFAULT
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

ViridianForest_EventScript_BattleOptionalSans::
	trainerbattle_single TRAINER_OPTIONAL_BUG_CATCHER_SANS, ViridianForest_Text_SansIntro, ViridianForest_Text_SansDefeat
	goto ViridianForest_EventScript_DefeatedSans
	end

ViridianForest_EventScript_DefeatedSans::
	lock
	goto_if_set FLAG_GOT_KRICKETOT_FROM_SANS, ViridianForest_EventScript_AlreadyGotKricketot
	msgbox ViridianForest_Text_SansPostBattle, MSGBOX_DEFAULT
	setvar VAR_TEMP_1, SPECIES_KRICKETOT
	givemon SPECIES_KRICKETOT, 8
	goto_if_eq VAR_RESULT, 0, ViridianForest_EventScript_ReceiveKricketotParty
	goto_if_eq VAR_RESULT, 1, ViridianForest_EventScript_ReceiveKricketotPC
	goto_if_eq VAR_RESULT, 2, Common_EventScript_NoMoreRoomForPokemon
	release
	end

ViridianForest_EventScript_ReceiveKricketotParty::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_LEVEL_UP
	message ViridianForest_Text_ObtainedKricketotFromSans
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_KRICKETOT
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ViridianForest_EventScript_EndReceiveKricketot
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto ViridianForest_EventScript_EndReceiveKricketot
	end

ViridianForest_EventScript_ReceiveKricketotPC::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_LEVEL_UP
	message ViridianForest_Text_ObtainedKricketotFromSans
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_KRICKETOT
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ViridianForest_EventScript_KricketotTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto ViridianForest_EventScript_KricketotTransferredToPC
	end

ViridianForest_EventScript_KricketotTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto ViridianForest_EventScript_EndReceiveKricketot
	end

ViridianForest_EventScript_EndReceiveKricketot::
	setflag FLAG_GOT_KRICKETOT_FROM_SANS
	release
	end

ViridianForest_EventScript_AlreadyGotKricketot::
	msgbox ViridianForest_Text_SansPostBattle, MSGBOX_DEFAULT
	release
	end

ViridianForest_Text_FriendsItchingToBattle::
	.string "I came here with some friends to\n"
	.string "catch us some BUG POKéMON!\p"
	.string "They're all itching to get into\n"
	.string "some POKéMON battles!$"

ViridianForest_Text_RickIntro::
	.string "Hey! You have POKéMON!\n"
	.string "Come on!\l"
	.string "Let's battle 'em!$"

ViridianForest_Text_RickDefeat::
	.string "No!\nCATERPIE can't hack it!$"

ViridianForest_Text_RickPostBattle::
	.string "Ssh! You'll scare the bugs away.\n"
	.string "Another time, okay?$"

ViridianForest_Text_DougIntro::
	.string "Yo!\n"
	.string "You can't jam out if you're a\l"
	.string "POKéMON TRAINER!$"

ViridianForest_Text_DougDefeat::
	.string "Huh?\n"
	.string "I ran out of POKéMON!$"

ViridianForest_Text_DougPostBattle::
	.string "That totally stinks! I'm going to\n"
	.string "catch some stronger ones!$"

ViridianForest_Text_SammyIntro::
	.string "Hey, wait up!\n"
	.string "What's the hurry? Why the rush?$"

ViridianForest_Text_SammyDefeat::
	.string "I give!\n"
	.string "You're good at this!$"

ViridianForest_Text_SammyPostBattle::
	.string "Sometimes, you can find stuff on\n"
	.string "the ground.\p"
	.string "I'm looking for the stuff I\n"
	.string "dropped. Can you help me?$"

ViridianForest_Text_SansBadTime::
	.string "do you wanna have a bad time?$"

ViridianForest_Text_StrongestAttack::
	.string "Always wondered why people never\n"
	.string "use their strongest attack first.$"

ViridianForest_Text_SansIntro::
	.string "...\n"
	.string "It's a beautiful day outside.\l"
	.string "Pidgeys are singing,\l"
	.string "Budews are blooming...\l"
	.string "On days like these,\l"
	.string "kids like you...\l"
	.string "Should be burning in\l"
	.string "harsh sunlight.$"

ViridianForest_Text_SansDefeat::
	.string "Nice one, kiddo.$"

ViridianForest_Text_SansPostBattle::
	.string "What? You thought I was for real?$"

ViridianForest_Text_BadKid::
	.string "There was a bad kid here earlier.\n"
	.string "But I defeated him.\p"
	.string "Don't worry, you're a good kid.$"

ViridianForest_Text_CharlieIntro::
	.string "Did you know that POKéMON evolve?$"

ViridianForest_Text_CharlieDefeat::
	.string "Oh!\n"
	.string "I lost!$"

ViridianForest_Text_CharliePostBattle::
	.string "BUG POKéMON evolve quickly.\n"
	.string "They're a lot of fun!$"

ViridianForest_Text_RanOutOfPokeBalls::
	.string "I was throwing POKé BALLS to\n"
	.string "catch POKéMON, and I ran out.\p"
	.string "That's why you can never have too\n"
	.string "many POKé BALLS.$"

ViridianForest_Text_AvoidGrassyAreasWhenWeak::
	.string "TRAINER TIPS\p"
	.string "If your POKéMON are weak and you\n"
	.string "want to avoid battles, stay away\l"
	.string "from grassy areas!$"

ViridianForest_Text_UseAntidoteForPoison::
	.string "For poison, use ANTIDOTE!\n"
	.string "Get it at POKéMON MARTS!$"

ViridianForest_Text_ContactOakViaPCToRatePokedex::
	.string "TRAINER TIPS\p"
	.string "Contact PROF. OAK via a PC to\n"
	.string "get your POKéDEX evaluated!$"

ViridianForest_Text_CantCatchOwnedMons::
	.string "TRAINER TIPS\p"
	.string "You can't catch a POKéMON that\n"
	.string "belongs to someone else.\p"
	.string "Throw POKé BALLS only at wild\n"
	.string "POKéMON to catch them!$"

ViridianForest_Text_WeakenMonsBeforeCapture::
	.string "TRAINER TIPS\p"
	.string "Weaken POKéMON before attempting\n"
	.string "capture!\p"
	.string "When healthy, they may escape!$"

ViridianForest_Text_LeavingViridianForest::
	.string "LEAVING VIRIDIAN FOREST\n"
	.string "PEWTER CITY AHEAD$"

ViridianForest_Text_PrideLock::
    .string "Your pride prevents you from\n"
    .string "leaving this area!$"

ViridianForest_Text_ObtainedKricketotFromSans::
	.string "{PLAYER} obtained a KRICKETOT\n"
	.string "from the trainer SANS!$"
