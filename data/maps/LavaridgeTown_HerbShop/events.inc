LavaridgeTown_HerbShop_EventObjects: @ 852DDB0
	object_event 1, EVENT_OBJ_GFX_WOMAN_3, 0, 3, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LavaridgeTown_HerbShop_EventScript_1FE4D7, 0
	object_event 2, EVENT_OBJ_GFX_OLD_MAN_2, 0, 7, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, LavaridgeTown_HerbShop_EventScript_1FE505, 0
	object_event 3, EVENT_OBJ_GFX_OLD_MAN_1, 0, 9, 3, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, 0, 0, LavaridgeTown_HerbShop_EventScript_1FE4FC, 0

LavaridgeTown_HerbShop_MapWarps: @ 852DDF8
	warp_def 3, 7, 0, 0, MAP_LAVARIDGE_TOWN
	warp_def 4, 7, 0, 0, MAP_LAVARIDGE_TOWN

LavaridgeTown_HerbShop_MapEvents:: @ 852DE08
	map_events LavaridgeTown_HerbShop_EventObjects, LavaridgeTown_HerbShop_MapWarps, 0x0, 0x0

