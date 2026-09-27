Route1_Frlg_MapScripts::
	.byte 0

Route1_EventScript_MartClerk::
	lock
	faceplayer
	goto_if_set FLAG_GOT_ORAN_BERRY_ON_ROUTE_1, Route1_EventScript_AlreadyGotOranBerry
	msgbox Route1_Text_WorkAtPokeMartTakeSample
	textcolor NPC_TEXT_COLOR_NEUTRAL
	checkitemspace ITEM_ORAN_BERRY
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	bufferitemname STR_VAR_2, ITEM_ORAN_BERRY
	playfanfare MUS_LEVEL_UP
	message gText_ObtainedTheItem
	waitmessage
	waitfanfare
	additem ITEM_ORAN_BERRY
	msgbox Route1_Text_PutOranBerryAway
	call EventScript_RestorePrevTextColor
	setflag FLAG_GOT_ORAN_BERRY_ON_ROUTE_1
	release
	end

Route1_EventScript_AlreadyGotOranBerry::
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
	release
	end

Route1_EventScript_Boy::
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
	end

Route1_EventScript_RouteSign::
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
	end


Route1_EventScript_WalkedOutRoute1Trigger::
	lockall
	goto_if_set FLAG_WALKED_OUT_ROUTE_1_GAUNTLET, Route1_EventScript_AlreadyGotWalkedOutRoute1Gauntlet
	setflag FLAG_WALKED_OUT_ROUTE_1_GAUNTLET
	releaseall
	end

Route1_EventScript_AlreadyGotWalkedOutRoute1Gauntlet::
	releaseall
	end

Route1_EventScript_WalkedInTriggerLeft::
	lockall
	setvar VAR_TEMP_1, 0
	goto Route1_EventScript_WalkedInTrigger
	end

Route1_EventScript_WalkedInTriggerRight::
	lockall
	setvar VAR_TEMP_1, 1
	goto Route1_EventScript_WalkedInTrigger
	end

Route1_EventScript_WalkedInTrigger::
	goto_if_set FLAG_WALKED_IN_ROUTE_1_GAUNTLET, Route1_EventScript_AlreadyGotWalkedInRoute1Gauntlet
	setflag FLAG_WALKED_IN_ROUTE_1_GAUNTLET
	releaseall
	end

Route1_EventScript_AlreadyGotWalkedInRoute1Gauntlet::
	releaseall
	end

Route1_EventScript_GauntletStartTriggerLeft::
	lockall
	setvar VAR_TEMP_1, 0
	goto_if_set FLAG_WALKED_OUT_ROUTE_1_GAUNTLET, Route1_EventScript_GauntletEnded
	goto_if_set FLAG_WALKED_IN_ROUTE_1_GAUNTLET, Route1_EventScript_GauntletStartedTrigger
	releaseall
	end

Route1_EventScript_GauntletStartTriggerRight::
	lockall
	setvar VAR_TEMP_1, 1
	goto_if_set FLAG_WALKED_OUT_ROUTE_1_GAUNTLET, Route1_EventScript_GauntletEnded
	goto_if_set FLAG_WALKED_IN_ROUTE_1_GAUNTLET, Route1_EventScript_GauntletStartedTrigger
	releaseall
	end

Route1_EventScript_GauntletStartedTrigger::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 30
	playbgm MUS_TOO_BAD, 0
	message Route1_Text_PrideLock
	waitmessage
	delay 85
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
	waitmovement 0
	playse SE_PIN
	releaseall
	end

Route1_EventScript_GauntletEnded::
	releaseall
	end

Route1_EventScript_OptionalFightCheckGauntlet::
	goto_if_set FLAG_GOT_BUDEW_FROM_ROSE, Route1_EventScript_AlreadyGotBudew
	goto_if_unset FLAG_WALKED_OUT_ROUTE_1_GAUNTLET, Route1_EventScript_OptionalFight
	msgbox Route1_Text_YouAreTooLate, MSGBOX_DEFAULT
	releaseall
	end

Route1_EventScript_OptionalFight::
	call_if_set FLAG_DECLINED_OPTIONAL_FIGHT_ROUTE1, Route1_EventScript_AskToBattleAgain
	call_if_unset FLAG_DECLINED_OPTIONAL_FIGHT_ROUTE1, Route1_EventScript_AskToBattle
	goto_if_eq VAR_RESULT, NO, Route1_EventScript_DeclineBattle
	msgbox Route1_Text_BeautifulPokemon, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Route1_EventScript_BattleOptionalRoseBulbasaur
	case 1, Route1_EventScript_BattleOptionalRoseSquirtle
	case 2, Route1_EventScript_BattleOptionalRoseCharmander
	end

Route1_EventScript_AskToBattleAgain::
	msgbox Route1_Text_OptionalBattleMe, MSGBOX_YESNO
	return

Route1_EventScript_AskToBattle::
	msgbox Route1_Text_OptionalLetsBattle, MSGBOX_YESNO
	return

Route1_EventScript_DeclineBattle::
	setflag FLAG_DECLINED_OPTIONAL_FIGHT_ROUTE1
	msgbox Route1_Text_WontWaitForever, MSGBOX_DEFAULT
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

Route1_EventScript_BattleOptionalRoseBulbasaur::
	trainerbattle_no_intro TRAINER_OPTIONAL_BEAUTY_ROSE_BULBASAUR, Route1_Text_RoseDefeat
	goto Route1_EventScript_DefeatedRose
	end

Route1_EventScript_BattleOptionalRoseCharmander::
	trainerbattle_no_intro TRAINER_OPTIONAL_BEAUTY_ROSE_CHARMANDER, Route1_Text_RoseDefeat
	goto Route1_EventScript_DefeatedRose
	end

Route1_EventScript_BattleOptionalRoseSquirtle::
	trainerbattle_no_intro TRAINER_OPTIONAL_BEAUTY_ROSE_SQUIRTLE, Route1_Text_RoseDefeat
	goto Route1_EventScript_DefeatedRose
	end

Route1_EventScript_DefeatedRose::
	lock
	goto_if_set FLAG_GOT_BUDEW_FROM_ROSE, Route1_EventScript_AlreadyGotBudew
	msgbox Route1_Text_RewardForDefeatingRose, MSGBOX_DEFAULT
	setvar VAR_TEMP_1, SPECIES_BUDEW
	givemon SPECIES_BUDEW, 5
	goto_if_eq VAR_RESULT, 0, Route1_EventScript_ReceiveBudewParty
	goto_if_eq VAR_RESULT, 1, Route1_EventScript_ReceiveBudewPC
	goto_if_eq VAR_RESULT, 2, Common_EventScript_NoMoreRoomForPokemon
	release
	end

Route1_EventScript_ReceiveBudewParty::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_LEVEL_UP
	message Route1_Text_ObtainedBudewFromRose
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_BUDEW
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route1_EventScript_EndReceiveBudew
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Route1_EventScript_EndReceiveBudew
	end

Route1_EventScript_ReceiveBudewPC::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_LEVEL_UP
	message Route1_Text_ObtainedBudewFromRose
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_BUDEW
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route1_EventScript_BudewTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto Route1_EventScript_BudewTransferredToPC
	end

Route1_EventScript_BudewTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto Route1_EventScript_EndReceiveBudew
	end

Route1_EventScript_EndReceiveBudew::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	msgbox Route1_Text_ExplainBudew, MSGBOX_DEFAULT
	setflag FLAG_GOT_BUDEW_FROM_ROSE
	release
	end

Route1_EventScript_AlreadyGotBudew::
	msgbox Route1_Text_VeryPrideful, MSGBOX_DEFAULT
	release
	end

Route1_EventScript_Ouroboros::
	switch VAR_STARTER_MON
	case 0, Route1_EventScript_OuroborosBulbasaur
	case 1, Route1_EventScript_OuroborosSquirtle
	case 2, Route1_EventScript_OuroborosCharmander
	end

Route1_EventScript_OuroborosBulbasaur::
	trainerbattle_single TRAINER_BUG_CATCHER_OUROBOROS_BULBASAUR, Route1_Text_CanJumpFromLedges, Route1_Text_OuroborosDefeat
	msgbox Route1_Text_OuroborosPostBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_OuroborosCharmander::
	trainerbattle_single TRAINER_BUG_CATCHER_OUROBOROS_CHARMANDER, Route1_Text_CanJumpFromLedges, Route1_Text_OuroborosDefeat
	msgbox Route1_Text_OuroborosPostBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_OuroborosSquirtle::
	trainerbattle_single TRAINER_BUG_CATCHER_OUROBOROS_SQUIRTLE, Route1_Text_CanJumpFromLedges, Route1_Text_OuroborosDefeat
	msgbox Route1_Text_OuroborosPostBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_Jake::
	switch VAR_STARTER_MON
	case 0, Route1_EventScript_JakeBulbasaur
	case 1, Route1_EventScript_JakeSquirtle
	case 2, Route1_EventScript_JakeCharmander
	end

Route1_EventScript_JakeBulbasaur::
	trainerbattle_single TRAINER_YOUNGSTER_JAKE_BULBASAUR, Route1_Text_JakeIntro, Route1_Text_JakeDefeat
	msgbox Route1_Text_JakePostBattle, MSGBOX_AUTOCLOSE

	end

Route1_EventScript_JakeSquirtle::
	trainerbattle_single TRAINER_YOUNGSTER_JAKE_SQUIRTLE, Route1_Text_JakeIntro, Route1_Text_JakeDefeat
	msgbox Route1_Text_JakePostBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_JakeCharmander::
	trainerbattle_single TRAINER_YOUNGSTER_JAKE_CHARMANDER, Route1_Text_JakeIntro, Route1_Text_JakeDefeat
	msgbox Route1_Text_JakePostBattle, MSGBOX_AUTOCLOSE
	end

Route1_Text_WorkAtPokeMartTakeSample::
	.string "Hi!\n"
	.string "I work at a POKéMON MART.\p"
	.string "It's part of a convenient chain\n"
	.string "selling all sorts of items.\p"
	.string "Please, visit us in VIRIDIAN CITY.\p"
	.string "I know, I'll give you a sample.\n"
	.string "Here you go!$"

Route1_Text_ComeSeeUsIfYouNeedPokeBalls::
	.string "Please come see us if you need\n"
	.string "POKé BALLS for catching POKéMON.$"

Route1_Text_PutOranBerryAway::
	.string "{PLAYER} put the ORAN BERRY away in\n"
	.string "the BAG's ITEMS POCKET.$"

Route1_Text_CanJumpFromLedges::
	.string "See those ledges along the road?\p"
	.string "It's a bit scary, but you can jump\n"
	.string "from them.\p"
	.string "You can get back to PALLET TOWN\n"
	.string "quicker that way.$"

Route1_Text_RouteSign::
	.string "ROUTE 1\n"
	.string "PALLET TOWN - VIRIDIAN CITY$"

Route1_Text_PrideLock::
    .string "Your pride prevents you from\n"
    .string "leaving this area!$"

Route1_Text_OptionalBattleMe::
	.string "Come on, battle with me, so I can\n"
	.string "check out your POKéMON!$"

Route1_Text_OptionalLetsBattle::
	.string "Aren't these flowers beautiful?\p"
	.string "Just as beautiful as my POKéMON\n"
	.string "Do you want to battle it?$"

Route1_Text_WontWaitForever::
	.string "I won't wait forever,\p"
	.string "I'll battle whoever asks first$"

Route1_Text_BeautifulPokemon::
	.string "Its beauty will leave you\n"
	.string "mindblown!$"

Route1_Text_RoseDefeat::
	.string "Ah... Your POKéMON are even prettier!$"

Route1_Text_YouAreTooLate::
	.string "You are too late, I already\n"
	.string "defeated a prideful TRAINER.\p"
	.string "I think his name was {RIVAL}.$"

Route1_Text_RewardForDefeatingRose::
	.string "I want you to have this POKéMON\n"
	.string "it needs a prideful trainer.$"

Route1_Text_ObtainedBudewFromRose::
	.string "{PLAYER} obtained a BUDEW from\n"
	.string "the trainer ROSE!$"

Route1_Text_ExplainBudew::
	.string "It's a BUDEW.\n"
	.string "It'll become a very pretty POKéMON.$"

Route1_Text_VeryPrideful::
	.string "You're very prideful, good.$"

Route1_Text_OuroborosDefeat::
    .string "Stop mashing A, you won$"

Route1_Text_OuroborosPostBattle::
	.string "Check your PP, buddy.$"

Route1_Text_JakeIntro::
    .string "Hey! You!\p"
    .string "Did you think you could get\n"
    .string "through Route 1 just like that?$"

Route1_Text_JakeDefeat::
    .string "Huh? You beat me?\p"
    .string "Awww, that shucks.$"
    
Route1_Text_JakePostBattle::
    .string "I bet you cheated!.$"
