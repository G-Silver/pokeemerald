#ifndef GUARD_FIELD_EFFECT_OBJECTS_H
#define GUARD_FIELD_EFFECT_OBJECTS_H

const struct SpritePalette gFieldEffectObjectPaletteInfo0 = {gFieldEffectObjectPalette0, 0x1004};

const struct SpritePalette gFieldEffectObjectPaletteInfo1 = {gFieldEffectObjectPalette1, 0x1005};

const union AnimCmd gFieldEffectObjectImageAnim_850C9D0[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Shadow[] =
{
    gFieldEffectObjectImageAnim_850C9D0,
};

const struct SpriteFrameImage gFieldEffectObjectPicTable_ShadowSmall[] = {
    obj_frame_tiles(gFieldEffectObjectPic_ShadowSmall),
};

const struct SpriteFrameImage gFieldEffectObjectPicTable_ShadowMedium[] = {
    obj_frame_tiles(gFieldEffectObjectPic_ShadowMedium),
};

const struct SpriteFrameImage gFieldEffectObjectPicTable_ShadowLarge[] = {
    obj_frame_tiles(gFieldEffectObjectPic_ShadowLarge),
};

const struct SpriteFrameImage gFieldEffectObjectPicTable_ShadowExtraLarge[] = {
    obj_frame_tiles(gFieldEffectObjectPic_ShadowExtraLarge),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_ShadowSmall = {0xFFFF, 0xFFFF, &gEventObjectBaseOam_8x8, gFieldEffectObjectImageAnimTable_Shadow, gFieldEffectObjectPicTable_ShadowSmall, gDummySpriteAffineAnimTable, oamc_shadow};

const struct SpriteTemplate gFieldEffectObjectTemplate_ShadowMedium = {0xFFFF, 0xFFFF, &gEventObjectBaseOam_16x8, gFieldEffectObjectImageAnimTable_Shadow, gFieldEffectObjectPicTable_ShadowMedium, gDummySpriteAffineAnimTable, oamc_shadow};

const struct SpriteTemplate gFieldEffectObjectTemplate_ShadowLarge = {0xFFFF, 0xFFFF, &gEventObjectBaseOam_32x8, gFieldEffectObjectImageAnimTable_Shadow, gFieldEffectObjectPicTable_ShadowLarge, gDummySpriteAffineAnimTable, oamc_shadow};

const struct SpriteTemplate gFieldEffectObjectTemplate_ShadowExtraLarge = {0xFFFF, 0xFFFF, &gEventObjectBaseOam_64x32, gFieldEffectObjectImageAnimTable_Shadow, gFieldEffectObjectPicTable_ShadowExtraLarge, gDummySpriteAffineAnimTable, oamc_shadow};

const struct SpriteFrameImage gFieldEffectObjectPicTable_TallGrass[] = {
    overworld_frame(gFieldEffectObjectPic_TallGrass, 2, 2, 0),
    overworld_frame(gFieldEffectObjectPic_TallGrass, 2, 2, 1),
    overworld_frame(gFieldEffectObjectPic_TallGrass, 2, 2, 2),
    overworld_frame(gFieldEffectObjectPic_TallGrass, 2, 2, 3),
    overworld_frame(gFieldEffectObjectPic_TallGrass, 2, 2, 4),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CA84[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(2, 10),
    ANIMCMD_FRAME(3, 10),
    ANIMCMD_FRAME(4, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_TallGrass[] =
{
    gFieldEffectObjectImageAnim_850CA84,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_TallGrass = {0xFFFF, 0x1005, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_TallGrass, gFieldEffectObjectPicTable_TallGrass, gDummySpriteAffineAnimTable, unc_grass_normal};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Ripple[] = {
    overworld_frame(gFieldEffectObjectPic_Ripple, 2, 2, 0),
    overworld_frame(gFieldEffectObjectPic_Ripple, 2, 2, 1),
    overworld_frame(gFieldEffectObjectPic_Ripple, 2, 2, 2),
    overworld_frame(gFieldEffectObjectPic_Ripple, 2, 2, 3),
    overworld_frame(gFieldEffectObjectPic_Ripple, 2, 2, 4),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CAE0[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(2, 9),
    ANIMCMD_FRAME(3, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(2, 11),
    ANIMCMD_FRAME(4, 11),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Ripple[] =
{
    gFieldEffectObjectImageAnim_850CAE0,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Ripple = {0xFFFF, 0x1005, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_Ripple, gFieldEffectObjectPicTable_Ripple, gDummySpriteAffineAnimTable, sub_81561D0};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Ash[] = {
    overworld_frame(gFieldEffectObjectPic_Ash, 2, 2, 0),
    overworld_frame(gFieldEffectObjectPic_Ash, 2, 2, 1),
    overworld_frame(gFieldEffectObjectPic_Ash, 2, 2, 2),
    overworld_frame(gFieldEffectObjectPic_Ash, 2, 2, 3),
    overworld_frame(gFieldEffectObjectPic_Ash, 2, 2, 4),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CB48[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(3, 12),
    ANIMCMD_FRAME(4, 12),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Ash[] =
{
    gFieldEffectObjectImageAnim_850CB48,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Ash = {0xFFFF, 0x1005, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_Ash, gFieldEffectObjectPicTable_Ash, gDummySpriteAffineAnimTable, sub_8155460};

const struct SpriteFrameImage gFieldEffectObjectPicTable_SurfBlob[] = {
    overworld_frame(gFieldEffectObjectPic_SurfBlob, 4, 4, 0),
    overworld_frame(gFieldEffectObjectPic_SurfBlob, 4, 4, 1),
    overworld_frame(gFieldEffectObjectPic_SurfBlob, 4, 4, 2),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CB94[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CB9C[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CBA4[] =
{
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CBAC[] =
{
    ANIMCMD_FRAME(2, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_SurfBlob[] =
{
    gFieldEffectObjectImageAnim_850CB94,
    gFieldEffectObjectImageAnim_850CB9C,
    gFieldEffectObjectImageAnim_850CBA4,
    gFieldEffectObjectImageAnim_850CBAC,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_SurfBlob = {0xFFFF, 0xFFFF, &gEventObjectBaseOam_32x32, gFieldEffectObjectImageAnimTable_SurfBlob, gFieldEffectObjectPicTable_SurfBlob, gDummySpriteAffineAnimTable, sub_8155658};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Arrow[] = {
    overworld_frame(gFieldEffectObjectPic_Arrow, 2, 2, 0),
    overworld_frame(gFieldEffectObjectPic_Arrow, 2, 2, 1),
    overworld_frame(gFieldEffectObjectPic_Arrow, 2, 2, 2),
    overworld_frame(gFieldEffectObjectPic_Arrow, 2, 2, 3),
    overworld_frame(gFieldEffectObjectPic_Arrow, 2, 2, 4),
    overworld_frame(gFieldEffectObjectPic_Arrow, 2, 2, 5),
    overworld_frame(gFieldEffectObjectPic_Arrow, 2, 2, 6),
    overworld_frame(gFieldEffectObjectPic_Arrow, 2, 2, 7),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CC1C[] =
{
    ANIMCMD_FRAME(3, 32),
    ANIMCMD_FRAME(7, 32),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CC28[] =
{
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_FRAME(4, 32),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CC34[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(5, 32),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CC40[] =
{
    ANIMCMD_FRAME(2, 32),
    ANIMCMD_FRAME(6, 32),
    ANIMCMD_JUMP(0),
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Arrow[] =
{
    gFieldEffectObjectImageAnim_850CC1C,
    gFieldEffectObjectImageAnim_850CC28,
    gFieldEffectObjectImageAnim_850CC34,
    gFieldEffectObjectImageAnim_850CC40,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Arrow = {0xFFFF, 0xFFFF, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_Arrow, gFieldEffectObjectPicTable_Arrow, gDummySpriteAffineAnimTable, SpriteCallbackDummy};

const struct SpriteFrameImage gFieldEffectObjectPicTable_GroundImpactDust[] = {
    obj_frame_tiles(gFieldEffectObjectPic_GroundImpactDust_0),
    obj_frame_tiles(gFieldEffectObjectPic_GroundImpactDust_1),
    obj_frame_tiles(gFieldEffectObjectPic_GroundImpactDust_2),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CC8C[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_GroundImpactDust[] =
{
    gFieldEffectObjectImageAnim_850CC8C,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_GroundImpactDust = {0xFFFF, 0x1004, &gEventObjectBaseOam_16x8, gFieldEffectObjectImageAnimTable_GroundImpactDust, gFieldEffectObjectPicTable_GroundImpactDust, gDummySpriteAffineAnimTable, sub_8156194};

const struct SpriteFrameImage gFieldEffectObjectPicTable_BikeHopTallGrass[] = {
    obj_frame_tiles(gFieldEffectObjectPic_BikeHopTallGrass_0),
    obj_frame_tiles(gFieldEffectObjectPic_BikeHopTallGrass_1),
    obj_frame_tiles(gFieldEffectObjectPic_BikeHopTallGrass_2),
    obj_frame_tiles(gFieldEffectObjectPic_BikeHopTallGrass_3),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CCD8[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_BikeHopTallGrass[] =
{
    gFieldEffectObjectImageAnim_850CCD8,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_BikeHopTallGrass = {0xFFFF, 0x1005, &gEventObjectBaseOam_16x8, gFieldEffectObjectImageAnimTable_BikeHopTallGrass, gFieldEffectObjectPicTable_BikeHopTallGrass, gDummySpriteAffineAnimTable, sub_8156194};

const struct SpriteFrameImage gFieldEffectObjectPicTable_SandFootprints[] = {
    obj_frame_tiles(gFieldEffectObjectPic_SandFootprints_0),
    obj_frame_tiles(gFieldEffectObjectPic_SandFootprints_1),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CD18[] =
{
    ANIMCMD_FRAME(0, 1, .vFlip = TRUE),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CD20[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CD28[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CD30[] =
{
    ANIMCMD_FRAME(1, 1, .hFlip = TRUE),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_SandFootprints[] =
{
    gFieldEffectObjectImageAnim_850CD18,
    gFieldEffectObjectImageAnim_850CD18,
    gFieldEffectObjectImageAnim_850CD20,
    gFieldEffectObjectImageAnim_850CD28,
    gFieldEffectObjectImageAnim_850CD30,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_SandFootprints = {0xFFFF, 0x1004, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_SandFootprints, gFieldEffectObjectPicTable_SandFootprints, gDummySpriteAffineAnimTable, sub_8154C60};

const struct SpriteFrameImage gFieldEffectObjectPicTable_DeepSandFootprints[] = {
    obj_frame_tiles(gFieldEffectObjectPic_DeepSandFootprints_0),
    obj_frame_tiles(gFieldEffectObjectPic_DeepSandFootprints_1),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CD74[] =
{
    ANIMCMD_FRAME(0, 1, .vFlip = TRUE),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CD7C[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CD84[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CD8C[] =
{
    ANIMCMD_FRAME(1, 1, .hFlip = TRUE),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_DeepSandFootprints[] =
{
    gFieldEffectObjectImageAnim_850CD74,
    gFieldEffectObjectImageAnim_850CD74,
    gFieldEffectObjectImageAnim_850CD7C,
    gFieldEffectObjectImageAnim_850CD84,
    gFieldEffectObjectImageAnim_850CD8C,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_DeepSandFootprints = {0xFFFF, 0x1004, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_DeepSandFootprints, gFieldEffectObjectPicTable_DeepSandFootprints, gDummySpriteAffineAnimTable, sub_8154C60};

const struct SpriteFrameImage gFieldEffectObjectPicTable_BikeTireTracks[] = {
    obj_frame_tiles(gFieldEffectObjectPic_BikeTireTracks_0),
    obj_frame_tiles(gFieldEffectObjectPic_BikeTireTracks_1),
    obj_frame_tiles(gFieldEffectObjectPic_BikeTireTracks_2),
    obj_frame_tiles(gFieldEffectObjectPic_BikeTireTracks_3),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CDE0[] =
{
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CDE8[] =
{
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CDF0[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CDF8[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CE00[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CE08[] =
{
    ANIMCMD_FRAME(0, 1, .hFlip = TRUE),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CE10[] =
{
    ANIMCMD_FRAME(3, 1, .hFlip = TRUE),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CE18[] =
{
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_BikeTireTracks[] =
{
    gFieldEffectObjectImageAnim_850CDE0,
    gFieldEffectObjectImageAnim_850CDE0,
    gFieldEffectObjectImageAnim_850CDE8,
    gFieldEffectObjectImageAnim_850CDF0,
    gFieldEffectObjectImageAnim_850CDF8,
    gFieldEffectObjectImageAnim_850CE00,
    gFieldEffectObjectImageAnim_850CE08,
    gFieldEffectObjectImageAnim_850CE10,
    gFieldEffectObjectImageAnim_850CE18,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_BikeTireTracks = {0xFFFF, 0x1004, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_BikeTireTracks, gFieldEffectObjectPicTable_BikeTireTracks, gDummySpriteAffineAnimTable, sub_8154C60};

const struct SpriteFrameImage gFieldEffectObjectPicTable_BikeHopBigSplash[] = {
    overworld_frame(gFieldEffectObjectPic_BikeHopBigSplash, 2, 2, 0),
    overworld_frame(gFieldEffectObjectPic_BikeHopBigSplash, 2, 2, 1),
    overworld_frame(gFieldEffectObjectPic_BikeHopBigSplash, 2, 2, 2),
    overworld_frame(gFieldEffectObjectPic_BikeHopBigSplash, 2, 2, 3),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CE7C[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_BikeHopBigSplash[] =
{
    gFieldEffectObjectImageAnim_850CE7C,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_BikeHopBigSplash = {0xFFFF, 0x1004, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_BikeHopBigSplash, gFieldEffectObjectPicTable_BikeHopBigSplash, gDummySpriteAffineAnimTable, sub_8156194};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Splash[] = {
    overworld_frame(gFieldEffectObjectPic_Splash, 2, 1, 0),
    overworld_frame(gFieldEffectObjectPic_Splash, 2, 1, 1),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CEBC[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850CEC8[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_JUMP(0),
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Splash[] =
{
    gFieldEffectObjectImageAnim_850CEBC,
    gFieldEffectObjectImageAnim_850CEC8,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Splash = {0xFFFF, 0x1004, &gEventObjectBaseOam_16x8, gFieldEffectObjectImageAnimTable_Splash, gFieldEffectObjectPicTable_Splash, gDummySpriteAffineAnimTable, sub_8154D90};

const struct SpriteFrameImage gFieldEffectObjectPicTable_BikeHopSmallSplash[] = {
    overworld_frame(gFieldEffectObjectPic_BikeHopSmallSplash, 2, 1, 0),
    overworld_frame(gFieldEffectObjectPic_BikeHopSmallSplash, 2, 1, 1),
    overworld_frame(gFieldEffectObjectPic_BikeHopSmallSplash, 2, 1, 2),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CF24[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_BikeHopSmallSplash[] =
{
    gFieldEffectObjectImageAnim_850CF24,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_BikeHopSmallSplash = {0xFFFF, 0x1004, &gEventObjectBaseOam_16x8, gFieldEffectObjectImageAnimTable_BikeHopSmallSplash, gFieldEffectObjectPicTable_BikeHopSmallSplash, gDummySpriteAffineAnimTable, sub_8156194};

const struct SpriteFrameImage gFieldEffectObjectPicTable_LongGrass[] = {
    obj_frame_tiles(gFieldEffectObjectPic_LongGrass_0),
    obj_frame_tiles(gFieldEffectObjectPic_LongGrass_1),
    obj_frame_tiles(gFieldEffectObjectPic_LongGrass_2),
    obj_frame_tiles(gFieldEffectObjectPic_LongGrass_3),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CF70[] =
{
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(2, 3),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_LongGrass[] =
{
    gFieldEffectObjectImageAnim_850CF70,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_LongGrass = {0xFFFF, 0x1005, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_LongGrass, gFieldEffectObjectPicTable_LongGrass, gDummySpriteAffineAnimTable, unc_grass_tall};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Unknown16[] = {
    obj_frame_tiles(gFieldEffectObjectPic_Unknown16_0),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown16_1),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown16_2),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown16_3),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown16_4),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown16_5),
};

const union AnimCmd gFieldEffectObjectImageAnim_850CFDC[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(5, 8),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Unknown16[] =
{
    gFieldEffectObjectImageAnim_850CFDC,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Unknown16 = {0xFFFF, 0x1005, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_Unknown16, gFieldEffectObjectPicTable_Unknown16, gDummySpriteAffineAnimTable, sub_8156194};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Unknown17[] = {
    obj_frame_tiles(gFieldEffectObjectPic_Unknown16_5),
    overworld_frame(gFieldEffectObjectPic_Unknown17, 2, 2, 0),
    overworld_frame(gFieldEffectObjectPic_Unknown17, 2, 2, 1),
    overworld_frame(gFieldEffectObjectPic_Unknown17, 2, 2, 2),
    overworld_frame(gFieldEffectObjectPic_Unknown17, 2, 2, 3),
    overworld_frame(gFieldEffectObjectPic_Unknown17, 2, 2, 4),
    overworld_frame(gFieldEffectObjectPic_Unknown17, 2, 2, 5),
    overworld_frame(gFieldEffectObjectPic_Unknown17, 2, 2, 6),
    overworld_frame(gFieldEffectObjectPic_Unknown17, 2, 2, 7),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D05C[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_FRAME(8, 4),
    ANIMCMD_JUMP(7),
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Unknown17[] =
{
    gFieldEffectObjectImageAnim_850D05C,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Unknown17 = {0xFFFF, 0x1005, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_Unknown17, gFieldEffectObjectPicTable_Unknown17, gDummySpriteAffineAnimTable, sub_81561D0};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Unknown18[] = {
    obj_frame_tiles(gFieldEffectObjectPic_Unknown18_0),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown18_1),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown18_2),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown18_3),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D0C0[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_JUMP(0),
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Unknown18[] =
{
    gFieldEffectObjectImageAnim_850D0C0,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Unknown18 = {0xFFFF, 0x1005, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_Unknown18, gFieldEffectObjectPicTable_Unknown18, gDummySpriteAffineAnimTable, sub_81561D0};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Unknown19[] = {
    obj_frame_tiles(gFieldEffectObjectPic_Unknown19_0),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown19_1),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown19_2),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown19_3),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D118[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_JUMP(0),
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Unknown19[] =
{
    gFieldEffectObjectImageAnim_850D118,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Unknown19 = {0xFFFF, 0x1004, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_Unknown19, gFieldEffectObjectPicTable_Unknown19, gDummySpriteAffineAnimTable, sub_81561D0};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Unknown29[] = {
    obj_frame_tiles(gFieldEffectObjectPic_Unknown29_0),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown29_1),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown29_2),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D160[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Unknown29[] =
{
    gFieldEffectObjectImageAnim_850D160,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Unknown29 = {0xFFFF, 0x1004, &gEventObjectBaseOam_16x8, gFieldEffectObjectImageAnimTable_Unknown29, gFieldEffectObjectPicTable_Unknown29, gDummySpriteAffineAnimTable, sub_81559BC};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Unknown20[] = {
    obj_frame_tiles(gFieldEffectObjectPic_Unknown20_0),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown20_1),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown20_2),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown20_3),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D1AC[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_JUMP(0),
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Unknown20[] =
{
    gFieldEffectObjectImageAnim_850D1AC,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Unknown20 = {0xFFFF, 0x1004, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_Unknown20, gFieldEffectObjectPicTable_Unknown20, gDummySpriteAffineAnimTable, sub_81561D0};

const union AffineAnimCmd gFieldEffectObjectRotScalAnim_850D1E4[] =
{
    AFFINEANIMCMD_FRAME(0xFF00, 0x100, -128, 0),
    AFFINEANIMCMD_FRAME(0x1, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_FRAME(0xFFFF, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_FRAME(0xFFFF, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_FRAME(0x1, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_JUMP(1),
};

const union AffineAnimCmd gFieldEffectObjectRotScalAnim_850D234[] =
{
    AFFINEANIMCMD_FRAME(0x100, 0x100, -128, 0),
    AFFINEANIMCMD_FRAME(0xFFFF, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_FRAME(0x1, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_FRAME(0x1, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_FRAME(0xFFFF, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_JUMP(1),
};

const union AffineAnimCmd *const gFieldEffectObjectRotScalAnimTable_Unknown21[] =
{
    gFieldEffectObjectRotScalAnim_850D1E4,
    gFieldEffectObjectRotScalAnim_850D234,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Unknown21 = {0x0, 0xFFFF, &gDummyOamData, gDummySpriteAnimTable, NULL, gFieldEffectObjectRotScalAnimTable_Unknown21, SpriteCallbackDummy};

const struct SpriteFrameImage gFieldEffectObjectPicTable_BerryTreeGrowthSparkle[] = {
    obj_frame_tiles(gFieldEffectObjectPic_BerryTreeGrowthSparkle_0),
    obj_frame_tiles(gFieldEffectObjectPic_BerryTreeGrowthSparkle_1),
    obj_frame_tiles(gFieldEffectObjectPic_BerryTreeGrowthSparkle_2),
    obj_frame_tiles(gFieldEffectObjectPic_BerryTreeGrowthSparkle_3),
    obj_frame_tiles(gFieldEffectObjectPic_BerryTreeGrowthSparkle_4),
    obj_frame_tiles(gFieldEffectObjectPic_BerryTreeGrowthSparkle_5),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D2D4[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(5, 8),
    ANIMCMD_LOOP(0),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_LOOP(3),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(5, 8),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_BerryTreeGrowthSparkle[] =
{
    gFieldEffectObjectImageAnim_850D2D4,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_BerryTreeGrowthSparkle = {0xFFFF, 0xFFFF, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_BerryTreeGrowthSparkle, gFieldEffectObjectPicTable_BerryTreeGrowthSparkle, gDummySpriteAffineAnimTable, sub_81561D0};

const struct SpriteFrameImage gFieldEffectObjectPicTable_TreeDisguise[] = {
    overworld_frame(gFieldEffectObjectPic_TreeDisguise, 2, 4, 0),
    overworld_frame(gFieldEffectObjectPic_TreeDisguise, 2, 4, 1),
    overworld_frame(gFieldEffectObjectPic_TreeDisguise, 2, 4, 2),
    overworld_frame(gFieldEffectObjectPic_TreeDisguise, 2, 4, 3),
    overworld_frame(gFieldEffectObjectPic_TreeDisguise, 2, 4, 4),
    overworld_frame(gFieldEffectObjectPic_TreeDisguise, 2, 4, 5),
    overworld_frame(gFieldEffectObjectPic_TreeDisguise, 2, 4, 6),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D37C[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850D384[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_TreeDisguise[] =
{
    gFieldEffectObjectImageAnim_850D37C,
    gFieldEffectObjectImageAnim_850D384,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_TreeDisguise = {0xFFFF, 0xFFFF, &gEventObjectBaseOam_16x32, gFieldEffectObjectImageAnimTable_TreeDisguise, gFieldEffectObjectPicTable_TreeDisguise, gDummySpriteAffineAnimTable, sub_8155C88};

const struct SpriteFrameImage gFieldEffectObjectPicTable_MountainDisguise[] = {
    overworld_frame(gFieldEffectObjectPic_MountainDisguise, 2, 4, 0),
    overworld_frame(gFieldEffectObjectPic_MountainDisguise, 2, 4, 1),
    overworld_frame(gFieldEffectObjectPic_MountainDisguise, 2, 4, 2),
    overworld_frame(gFieldEffectObjectPic_MountainDisguise, 2, 4, 3),
    overworld_frame(gFieldEffectObjectPic_MountainDisguise, 2, 4, 4),
    overworld_frame(gFieldEffectObjectPic_MountainDisguise, 2, 4, 5),
    overworld_frame(gFieldEffectObjectPic_MountainDisguise, 2, 4, 6),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D3FC[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

const union AnimCmd gFieldEffectObjectImageAnim_850D404[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_MountainDisguise[] =
{
    gFieldEffectObjectImageAnim_850D3FC,
    gFieldEffectObjectImageAnim_850D404,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_MountainDisguise = {0xFFFF, 0xFFFF, &gEventObjectBaseOam_16x32, gFieldEffectObjectImageAnimTable_MountainDisguise, gFieldEffectObjectPicTable_MountainDisguise, gDummySpriteAffineAnimTable, sub_8155C88};

const struct SpriteFrameImage gFieldEffectObjectPicTable_SandDisguisePlaceholder[] = {
    overworld_frame(gFieldEffectObjectPic_SandDisguisePlaceholder, 2, 4, 0),
    overworld_frame(gFieldEffectObjectPic_SandDisguisePlaceholder, 2, 4, 1),
    overworld_frame(gFieldEffectObjectPic_SandDisguisePlaceholder, 2, 4, 2),
    overworld_frame(gFieldEffectObjectPic_SandDisguisePlaceholder, 2, 4, 3),
    overworld_frame(gFieldEffectObjectPic_SandDisguisePlaceholder, 2, 4, 4),
    overworld_frame(gFieldEffectObjectPic_SandDisguisePlaceholder, 2, 4, 5),
    overworld_frame(gFieldEffectObjectPic_SandDisguisePlaceholder, 2, 4, 6),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_SandDisguisePlaceholder = {0xFFFF, 0xFFFF, &gEventObjectBaseOam_16x32, gFieldEffectObjectImageAnimTable_TreeDisguise, gFieldEffectObjectPicTable_SandDisguisePlaceholder, gDummySpriteAffineAnimTable, sub_8155C88};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Bird[] = {
    obj_frame_tiles(gFieldEffectObjectPic_Bird),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D49C[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Bird[] =
{
    gFieldEffectObjectImageAnim_850D49C,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Bird = {0xFFFF, 0xFFFF, &gEventObjectBaseOam_32x32, gFieldEffectObjectImageAnimTable_Bird, gFieldEffectObjectPicTable_Bird, gDummySpriteAffineAnimTable, SpriteCallbackDummy};

const struct SpriteFrameImage gFieldEffectObjectPicTable_ShortGrass[] = {
    overworld_frame(gFieldEffectObjectPic_ShortGrass, 2, 2, 0),
    overworld_frame(gFieldEffectObjectPic_ShortGrass, 2, 2, 1),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D4D0[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_ShortGrass[] =
{
    gFieldEffectObjectImageAnim_850D4D0,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_ShortGrass = {0xFFFF, 0x1005, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_ShortGrass, gFieldEffectObjectPicTable_ShortGrass, gDummySpriteAffineAnimTable, sub_8154A10};

const struct SpriteFrameImage gFieldEffectObjectPicTable_HotSpringsWater[] = {
    obj_frame_tiles(gFieldEffectObjectPic_HotSpringsWater),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D500[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_HotSpringsWater[] =
{
    gFieldEffectObjectImageAnim_850D500,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_HotSpringsWater = {0xFFFF, 0x1005, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_HotSpringsWater, gFieldEffectObjectPicTable_HotSpringsWater, gDummySpriteAffineAnimTable, sub_8155158};

const struct SpriteFrameImage gFieldEffectObjectPicTable_JumpOutOfAsh[] = {
    overworld_frame(gFieldEffectObjectPic_JumpOutOfAsh, 2, 2, 0),
    overworld_frame(gFieldEffectObjectPic_JumpOutOfAsh, 2, 2, 1),
    overworld_frame(gFieldEffectObjectPic_JumpOutOfAsh, 2, 2, 2),
    overworld_frame(gFieldEffectObjectPic_JumpOutOfAsh, 2, 2, 3),
    overworld_frame(gFieldEffectObjectPic_JumpOutOfAsh, 2, 2, 4),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D54C[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(4, 6),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_JumpOutOfAsh[] =
{
    gFieldEffectObjectImageAnim_850D54C,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_JumpOutOfAsh = {0xFFFF, 0x100D, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_JumpOutOfAsh, gFieldEffectObjectPicTable_JumpOutOfAsh, gDummySpriteAffineAnimTable, sub_80B7CAC};

const struct SpritePalette gFieldEffectObjectPaletteInfo2 = {gFieldEffectObjectPalette2, 0x100D};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Unknown33[] = {
    obj_frame_tiles(gFieldEffectObjectPic_Unknown33_0),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown33_1),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown33_2),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown33_3),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown33_4),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D5B0[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(4, 6),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Unknown33[] =
{
    gFieldEffectObjectImageAnim_850D5B0,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Unknown33 = {0xFFFF, 0x100D, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_Unknown33, gFieldEffectObjectPicTable_Unknown33, gDummySpriteAffineAnimTable, sub_80B7A58};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Bubbles[] = {
    overworld_frame(gFieldEffectObjectPic_Bubbles, 2, 4, 0),
    overworld_frame(gFieldEffectObjectPic_Bubbles, 2, 4, 1),
    overworld_frame(gFieldEffectObjectPic_Bubbles, 2, 4, 2),
    overworld_frame(gFieldEffectObjectPic_Bubbles, 2, 4, 3),
    overworld_frame(gFieldEffectObjectPic_Bubbles, 2, 4, 4),
    overworld_frame(gFieldEffectObjectPic_Bubbles, 2, 4, 5),
    overworld_frame(gFieldEffectObjectPic_Bubbles, 2, 4, 6),
    overworld_frame(gFieldEffectObjectPic_Bubbles, 2, 4, 7),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D624[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(4, 6),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Bubbles[] =
{
    gFieldEffectObjectImageAnim_850D624,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Bubbles = {0xFFFF, 0x1004, &gEventObjectBaseOam_16x32, gFieldEffectObjectImageAnimTable_Bubbles, gFieldEffectObjectPicTable_Bubbles, gDummySpriteAffineAnimTable, sub_8155AEC};

const struct SpriteFrameImage gFieldEffectObjectPicTable_Unknown35[] = {
    obj_frame_tiles(gFieldEffectObjectPic_Unknown35_0),
    obj_frame_tiles(gFieldEffectObjectPic_Unknown35_1),
};

const union AnimCmd gFieldEffectObjectImageAnim_850D674[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Unknown35[] =
{
    gFieldEffectObjectImageAnim_850D674,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Unknown35 = {0xFFFF, 0x100F, &gEventObjectBaseOam_16x16, gFieldEffectObjectImageAnimTable_Unknown35, gFieldEffectObjectPicTable_Unknown35, gDummySpriteAffineAnimTable, sub_8155E50};

const struct SpritePalette gFieldEffectObjectPaletteInfo3 = {gFieldEffectObjectPalette3, 0x100F};

const union AnimCmd gFieldEffectObjectImageAnim_850D6A8[] = {
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

const union AnimCmd *const gFieldEffectObjectImageAnimTable_Rayquaza[] = {
    gFieldEffectObjectImageAnim_850D6A8,
};

const struct SpriteFrameImage  gFieldEffectObjectPicTable_Rayquaza[] = {
    overworld_frame(gEventObjectPic_Rayquaza, 4, 4, 0),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Rayquaza = {0xFFFF, 0xFFFF, &gEventObjectBaseOam_32x32, gFieldEffectObjectImageAnimTable_Rayquaza, gFieldEffectObjectPicTable_Rayquaza, gDummySpriteAffineAnimTable, sub_8155F80};

const struct SpritePalette gFieldEffectObjectPaletteInfoUnused = {gEventObjectPalette2, 0x1011};

#endif //GUARD_FIELD_EFFECT_OBJECTS_H
