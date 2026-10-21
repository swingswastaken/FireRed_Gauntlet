PewterCity_House2_Frlg_MapScripts::
	.byte 0


PewterCity_House2_EventScript_OldMan::
	lock
	faceplayer
	setvar VAR_0x8008, INGAME_TRADE_DRIFLOON
	call EventScript_GetInGameTradeSpeciesInfo
	goto_if_set FLAG_DID_JOHNNY_TRADE, PewterCity_House2_EventScript_AlreadyTraded
	msgbox PewterCity_House2_Text_MonsLearnTechniquesAsTheyGrow, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PewterCity_House2_EventScript_DeclineTrade
	call EventScript_ChooseMonForInGameTrade
	goto_if_ge VAR_0x8004, PARTY_SIZE, PewterCity_House2_EventScript_DeclineTrade
	call EventScript_DoInGameTrade
	msgbox Trade_Text_Thanks
	setflag FLAG_DID_JOHNNY_TRADE
	release
	end

PewterCity_House2_EventScript_DeclineTrade::
	msgbox PewterCity_House2_Text_WellIfYouDontWantTo
	release
	end

PewterCity_House2_EventScript_AlreadyTraded::
	msgbox PewterCity_House2_Text_IAmHappierNow
	release
	end

PewterCity_House2_Text_MonsLearnTechniquesAsTheyGrow::
	.string "My grandson died a couple of months\n"
	.string "ago. He always loved balloons...\p"
	.string "This POKÉMON reminds me of him.\p"
	.string "I can't sleep at night, please.\n"
	.string "Take it so I can move on.$"

PewterCity_House2_Text_WellIfYouDontWantTo::
	.string "Well, if you don't want to trade,\n"
	.string "I understand. I'll keep this balloon.$"

PewterCity_House2_Text_IAmHappierNow::
	.string "I feel like a weight has been\n"
	.string "lifted off my shoulders.\p"
	.string "Who were you, again?$"
