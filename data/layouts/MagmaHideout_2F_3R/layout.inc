MagmaHideout_2F_3R_MapBorder::
	.incbin "data/layouts/MagmaHideout_2F_3R/border.bin"

MagmaHideout_2F_3R_MapBlockdata::
	.incbin "data/layouts/MagmaHideout_2F_3R/map.bin"

	.align 2
MagmaHideout_2F_3R_Layout::
	.4byte 0x3c
	.4byte 0x13
	.4byte MagmaHideout_2F_3R_MapBorder
	.4byte MagmaHideout_2F_3R_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Lavaridge

