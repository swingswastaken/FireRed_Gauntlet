static const union AnimCmd sAnim_StayStill[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpFaceSouth[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpFaceNorth[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpFaceWest[] =
{
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpFaceEast[] =
{
    ANIMCMD_FRAME(2, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoSouth[] =
{
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(3, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoNorth[] =
{
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(4, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoWest[] =
{
    ANIMCMD_FRAME(5, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(6, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoEast[] =
{
    ANIMCMD_FRAME(5, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(6, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastSouth[] =
{
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(3, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastNorth[] =
{
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(4, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastWest[] =
{
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastEast[] =
{
    ANIMCMD_FRAME(5, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(6, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFasterSouth[] =
{
    ANIMCMD_FRAME(3, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(3, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFasterNorth[] =
{
    ANIMCMD_FRAME(4, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(4, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFasterWest[] =
{
    ANIMCMD_FRAME(5, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_FRAME(6, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFasterEast[] =
{
    ANIMCMD_FRAME(5, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(6, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastestSouth[] =
{
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(3, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastestNorth[] =
{
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(4, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastestWest[] =
{
    ANIMCMD_FRAME(5, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(6, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastestEast[] =
{
    ANIMCMD_FRAME(5, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(6, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceSouth[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceNorth[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceNorth2F[] =
{
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceWest[] =
{
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceWest2F[] =
{
    ANIMCMD_FRAME(4, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceEast[] =
{
    ANIMCMD_FRAME(2, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceEast2F[] =
{
    ANIMCMD_FRAME(4, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceEast2F_Asym[] =
{
    ANIMCMD_FRAME(6, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoSouth[] =
{
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoSouth2F[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoNorth[] =
{
    ANIMCMD_FRAME(5, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(6, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoNorth2F[] =
{
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoWest[] =
{
    ANIMCMD_FRAME(7, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(8, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoWest2F[] =
{
    ANIMCMD_FRAME(4, 6),
    ANIMCMD_FRAME(5, 6),
    ANIMCMD_FRAME(5, 6),
    ANIMCMD_FRAME(4, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoEast[] =
{
    ANIMCMD_FRAME(7, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoEast2F[] =
{
    ANIMCMD_FRAME(4, 6, .hFlip = TRUE),
    ANIMCMD_FRAME(5, 6, .hFlip = TRUE),
    ANIMCMD_FRAME(5, 6, .hFlip = TRUE),
    ANIMCMD_FRAME(4, 6, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoEast2F_Asym[] =
{
    ANIMCMD_FRAME(6, 6),
    ANIMCMD_FRAME(7, 6),
    ANIMCMD_FRAME(7, 6),
    ANIMCMD_FRAME(6, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastSouth[] =
{
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastSouth2F[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastNorth[] =
{
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastNorth2F[] =
{
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastWest[] =
{
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(8, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastWest2F[] =
{
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastEast[] =
{
    ANIMCMD_FRAME(7, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastEast2F[] =
{
    ANIMCMD_FRAME(4, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(5, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(5, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(4, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastEast2F_Asym[] =
{
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterSouth[] =
{
    ANIMCMD_FRAME(3, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(4, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballSouth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballNorth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballWest[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballEast[] =
{
    ANIMCMD_FRAME(0, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(4, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballEast_Asym[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(6, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterSouth[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterNorth[] =
{
    ANIMCMD_FRAME(5, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(6, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterNorth[] =
{
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterWest[] =
{
    ANIMCMD_FRAME(7, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_FRAME(8, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterWest[] =
{
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterEast[] =
{
    ANIMCMD_FRAME(7, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterEast[] =
{
    ANIMCMD_FRAME(4, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterEast_Asym[] =
{
    ANIMCMD_FRAME(6, 8),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestSouth[] =
{
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballFastSouth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballFastNorth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballFastWest[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(4, 2),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballFastEast[] =
{
    ANIMCMD_FRAME(0, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(4, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(4, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballFastEast_Asym[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(6, 2),
    ANIMCMD_FRAME(6, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestNorth[] =
{
    ANIMCMD_FRAME(5, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(6, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestWest[] =
{
    ANIMCMD_FRAME(7, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(8, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestEast[] =
{
    ANIMCMD_FRAME(7, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunSouth[] =
{
    ANIMCMD_FRAME(12, 5),
    ANIMCMD_FRAME(9, 3),
    ANIMCMD_FRAME(13, 5),
    ANIMCMD_FRAME(9, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunNorth[] =
{
    ANIMCMD_FRAME(14, 5),
    ANIMCMD_FRAME(10, 3),
    ANIMCMD_FRAME(15, 5),
    ANIMCMD_FRAME(10, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunWest[] =
{
    ANIMCMD_FRAME(16, 5),
    ANIMCMD_FRAME(11, 3),
    ANIMCMD_FRAME(17, 5),
    ANIMCMD_FRAME(11, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunEast[] =
{
    ANIMCMD_FRAME(16, 5, .hFlip = TRUE),
    ANIMCMD_FRAME(11, 3, .hFlip = TRUE),
    ANIMCMD_FRAME(17, 5, .hFlip = TRUE),
    ANIMCMD_FRAME(11, 3, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunSouthFrlg[] = {
    ANIMCMD_FRAME(9, 5),
    ANIMCMD_FRAME(10, 3),
    ANIMCMD_FRAME(9, 5),
    ANIMCMD_FRAME(11, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunNorthFrlg[] = {
    ANIMCMD_FRAME(12, 5),
    ANIMCMD_FRAME(13, 3),
    ANIMCMD_FRAME(12, 5),
    ANIMCMD_FRAME(14, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunWestFrlg[] = {
    ANIMCMD_FRAME(15, 5),
    ANIMCMD_FRAME(16, 3),
    ANIMCMD_FRAME(15, 5),
    ANIMCMD_FRAME(17, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunEastFrlg[] = {
    ANIMCMD_FRAME(15, 5, .hFlip = TRUE),
    ANIMCMD_FRAME(16, 3, .hFlip = TRUE),
    ANIMCMD_FRAME(15, 5, .hFlip = TRUE),
    ANIMCMD_FRAME(17, 3, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_SpinSouth[] = {
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_LOOP(1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SpinNorth[] = {
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE),
    ANIMCMD_LOOP(1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SpinWest[] = {
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE), // Starts by facing East?
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_LOOP(1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SpinEast[] = {
    ANIMCMD_FRAME(2, 2), // Starts by facing West?
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_LOOP(1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_FieldMove[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_VSSeeker[] = {
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_LOOP(0),
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_FRAME(8, 4),
    ANIMCMD_LOOP(6),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_VSSeekerBike[] = {
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_LOOP(0),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_LOOP(6),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GetOnOffSurfBlobSouth[] =
{
    ANIMCMD_FRAME(9, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GetOnOffSurfBlobNorth[] =
{
    ANIMCMD_FRAME(10, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GetOnOffSurfBlobWest[] =
{
    ANIMCMD_FRAME(11, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GetOnOffSurfBlobEast[] =
{
    ANIMCMD_FRAME(11, 32, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_BunnyHopBackWheelSouth[] =
{
    ANIMCMD_FRAME(9, 4),
    ANIMCMD_FRAME(10, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopBackWheelNorth[] =
{
    ANIMCMD_FRAME(13, 4),
    ANIMCMD_FRAME(14, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopBackWheelWest[] =
{
    ANIMCMD_FRAME(17, 4),
    ANIMCMD_FRAME(18, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopBackWheelEast[] =
{
    ANIMCMD_FRAME(17, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopFrontWheelSouth[] =
{
    ANIMCMD_FRAME(11, 4),
    ANIMCMD_FRAME(12, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopFrontWheelNorth[] =
{
    ANIMCMD_FRAME(15, 4),
    ANIMCMD_FRAME(16, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopFrontWheelWest[] =
{
    ANIMCMD_FRAME(19, 4),
    ANIMCMD_FRAME(20, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopFrontWheelEast[] =
{
    ANIMCMD_FRAME(19, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(20, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieBackWheelSouth[] =
{
    ANIMCMD_FRAME(9, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieBackWheelNorth[] =
{
    ANIMCMD_FRAME(13, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieBackWheelWest[] =
{
    ANIMCMD_FRAME(17, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieBackWheelEast[] =
{
    ANIMCMD_FRAME(17, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieFrontWheelSouth[] =
{
    ANIMCMD_FRAME(11, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieFrontWheelNorth[] =
{
    ANIMCMD_FRAME(15, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieFrontWheelWest[] =
{
    ANIMCMD_FRAME(19, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieFrontWheelEast[] =
{
    ANIMCMD_FRAME(19, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MovingWheelieSouth[] =
{
    ANIMCMD_FRAME(21, 4),
    ANIMCMD_FRAME(10, 4),
    ANIMCMD_FRAME(22, 4),
    ANIMCMD_FRAME(10, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_MovingWheelieNorth[] =
{
    ANIMCMD_FRAME(23, 4),
    ANIMCMD_FRAME(14, 4),
    ANIMCMD_FRAME(24, 4),
    ANIMCMD_FRAME(14, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_MovingWheelieWest[] =
{
    ANIMCMD_FRAME(25, 4),
    ANIMCMD_FRAME(18, 4),
    ANIMCMD_FRAME(26, 4),
    ANIMCMD_FRAME(18, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_MovingWheelieEast[] =
{
    ANIMCMD_FRAME(25, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(26, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_BerryTreeStage0[] =
{
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BerryTreeStage1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(2, 32),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BerryTreeStage2[] =
{
    ANIMCMD_FRAME(3, 48),
    ANIMCMD_FRAME(4, 48),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BerryTreeStage3[] =
{
    ANIMCMD_FRAME(5, 32),
    ANIMCMD_FRAME(5, 32),
    ANIMCMD_FRAME(6, 32),
    ANIMCMD_FRAME(6, 32),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BerryTreeStage4[] =
{
    ANIMCMD_FRAME(7, 48),
    ANIMCMD_FRAME(7, 48),
    ANIMCMD_FRAME(8, 48),
    ANIMCMD_FRAME(8, 48),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_NurseBow[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(9, 32),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RockBreak[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TreeCut[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TakeOutRodSouth[] =
{
    ANIMCMD_FRAME(8, 4),
    ANIMCMD_FRAME(9, 4),
    ANIMCMD_FRAME(10, 4),
    ANIMCMD_FRAME(11, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TakeOutRodNorth[] =
{
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TakeOutRodWest[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TakeOutRodEast[] =
{
    ANIMCMD_FRAME(0, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(3, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PutAwayRodSouth[] =
{
    ANIMCMD_FRAME(11, 4),
    ANIMCMD_FRAME(10, 6),
    ANIMCMD_FRAME(9, 6),
    ANIMCMD_FRAME(8, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PutAwayRodNorth[] =
{
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_FRAME(6, 6),
    ANIMCMD_FRAME(5, 6),
    ANIMCMD_FRAME(4, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PutAwayRodWest[] =
{
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PutAwayRodEast[] =
{
    ANIMCMD_FRAME(3, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_HookedPokemonSouth[] =
{
    ANIMCMD_FRAME(10, 6),
    ANIMCMD_FRAME(11, 6),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(11, 30),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_HookedPokemonNorth[] =
{
    ANIMCMD_FRAME(6, 6),
    ANIMCMD_FRAME(7, 6),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(7, 30),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_HookedPokemonWest[] =
{
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(3, 30),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_HookedPokemonEast[] =
{
    ANIMCMD_FRAME(2, 6, .hFlip = TRUE),
    ANIMCMD_FRAME(3, 6, .hFlip = TRUE),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(3, 30, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AffineAnimCmd sAffineAnim_KyogreGroudon_GoSouthStart[] =
{
    AFFINEANIMCMD_FRAME(0x0, 0x0, 1, 1),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 1),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 1),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 1),
    AFFINEANIMCMD_LOOP(7),
    AFFINEANIMCMD_JUMP(0),
};

static const union AffineAnimCmd sAffineAnim_KyogreGroudon_GoSouth[] =
{
    AFFINEANIMCMD_FRAME(0x0, 0x0, -1, 1),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 1),
    AFFINEANIMCMD_LOOP(15),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 1, 1),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 1),
    AFFINEANIMCMD_LOOP(15),
    AFFINEANIMCMD_JUMP(0),
};

static const union AffineAnimCmd sAffineAnim_KyogreGroudon_AttackEast[] =
{
    AFFINEANIMCMD_FRAME(0x100, 0x100, 10, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_KyogreGroudon_AttackWest[] =
{
    AFFINEANIMCMD_FRAME(0x100, 0x100, 10, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_KyogreGroudon_DipEast[] =
{
    AFFINEANIMCMD_FRAME(0x0, 0x0, -1, 1),
    AFFINEANIMCMD_LOOP(8),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_KyogreGroudon_DipWest[] =
{
    AFFINEANIMCMD_FRAME(0x0, 0x0, 1, 1),
    AFFINEANIMCMD_LOOP(8),
    AFFINEANIMCMD_END,
};

static const union AnimCmd sAnim_HoOhFlapWings[] =
{
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_HoOhStayStill[] =
{
    ANIMCMD_FRAME(3, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnimTable_Inanimate[] = {
    [ANIM_STAY_STILL] = sAnim_StayStill,
};

static const union AnimCmd *const sAnimTable_QuintyPlump[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_QuintyPlumpFaceSouth,
    [ANIM_STD_FACE_NORTH] = sAnim_QuintyPlumpFaceNorth,
    [ANIM_STD_FACE_WEST] = sAnim_QuintyPlumpFaceWest,
    [ANIM_STD_FACE_EAST] = sAnim_QuintyPlumpFaceEast,
    [ANIM_STD_GO_SOUTH] = sAnim_QuintyPlumpGoSouth,
    [ANIM_STD_GO_NORTH] = sAnim_QuintyPlumpGoNorth,
    [ANIM_STD_GO_WEST] = sAnim_QuintyPlumpGoWest,
    [ANIM_STD_GO_EAST] = sAnim_QuintyPlumpGoEast,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_QuintyPlumpGoFastSouth,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_QuintyPlumpGoFastNorth,
    [ANIM_STD_GO_FAST_WEST] = sAnim_QuintyPlumpGoFastWest,
    [ANIM_STD_GO_FAST_EAST] = sAnim_QuintyPlumpGoFastEast,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_QuintyPlumpGoFasterSouth,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_QuintyPlumpGoFasterNorth,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_QuintyPlumpGoFasterWest,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_QuintyPlumpGoFasterEast,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_QuintyPlumpGoFastestSouth,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_QuintyPlumpGoFastestNorth,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_QuintyPlumpGoFastestWest,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_QuintyPlumpGoFastestEast,
};

static const union AnimCmd *const sAnimTable_Standard[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth,
    [ANIM_STD_GO_WEST] = sAnim_GoWest,
    [ANIM_STD_GO_EAST] = sAnim_GoEast,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast,
};

const union AnimCmd *const sAnimTable_Following[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth2F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest2F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast2F,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth2F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth2F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest2F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast2F,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth2F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth2F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest2F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast2F,
    // 'Faster' and above used for entering/exiting pokeball
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_EnterSouth,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_EnterNorth,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_EnterWest,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_EnterEast,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_ExitPokeballSouth,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_ExitPokeballNorth,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_ExitPokeballWest,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_ExitPokeballEast,
    [ANIM_EXIT_POKEBALL_FAST_SOUTH] = sAnim_ExitPokeballFastSouth,
    [ANIM_EXIT_POKEBALL_FAST_NORTH] = sAnim_ExitPokeballFastNorth,
    [ANIM_EXIT_POKEBALL_FAST_WEST] = sAnim_ExitPokeballFastWest,
    [ANIM_EXIT_POKEBALL_FAST_EAST] = sAnim_ExitPokeballFastEast,
};

// Like the above, but has separate frames for facing right
const union AnimCmd *const sAnimTable_Following_Asym[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth2F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest2F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast2F_Asym,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth2F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth2F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest2F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast2F_Asym,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth2F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth2F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest2F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast2F_Asym,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_EnterSouth,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_EnterNorth,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_EnterWest,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_EnterEast_Asym,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_ExitPokeballSouth,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_ExitPokeballNorth,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_ExitPokeballWest,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_ExitPokeballEast_Asym,
    [ANIM_EXIT_POKEBALL_FAST_SOUTH] = sAnim_ExitPokeballFastSouth,
    [ANIM_EXIT_POKEBALL_FAST_NORTH] = sAnim_ExitPokeballFastNorth,
    [ANIM_EXIT_POKEBALL_FAST_WEST] = sAnim_ExitPokeballFastWest,
    [ANIM_EXIT_POKEBALL_FAST_EAST] = sAnim_ExitPokeballFastEast_Asym,
};

static const union AnimCmd *const sAnimTable_HoOh[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast,
    [ANIM_STD_GO_SOUTH] = sAnim_HoOhFlapWings,
    [ANIM_STD_GO_NORTH] = sAnim_HoOhStayStill,
    [ANIM_STD_GO_WEST] = sAnim_GoWest,
    [ANIM_STD_GO_EAST] = sAnim_GoEast,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast,
};

// The movements for going up use the animations for going right instead.
static const union AnimCmd *const sAnimTable_GroudonSide[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth,
    [ANIM_STD_GO_NORTH] = sAnim_GoEast,
    [ANIM_STD_GO_WEST] = sAnim_GoWest,
    [ANIM_STD_GO_EAST] = sAnim_GoEast,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastEast,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterEast,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestEast,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast,
};

static const union AnimCmd sAnim_RayquazaCoiledAwake[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RayquazaFlyUp[] =
{
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RayquazaCoiledAsleep[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RayquazaCoiledMouthOpen[] =
{
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RayquazaNormal[] =
{
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_JUMP(0),
};

// Identical to sAnim_RayquazaCoiledAsleep
static const union AnimCmd sAnim_RayquazaFaceSouth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

// Identical to sAnim_RayquazaCoiledAsleep
static const union AnimCmd sAnim_RayquazaFaceNorth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

// Identical to sAnim_RayquazaCoiledAsleep
static const union AnimCmd sAnim_RayquazaFaceWest[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

// Identical to sAnim_RayquazaNormal
static const union AnimCmd sAnim_RayquazaFaceEast[] =
{
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_JUMP(0),
};

// Though they correspond to facing/walking movements, Rayquaza doesn't have
// equivalent images aside from flying up. Its other frames aside from the 'normal'
// frame are for the sequence where it awakens on Sky Pillar.
static const union AnimCmd *const sAnimTable_Rayquaza[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_RayquazaFaceSouth,
    [ANIM_STD_FACE_NORTH] = sAnim_RayquazaFaceNorth,
    [ANIM_STD_FACE_WEST] = sAnim_RayquazaFaceWest,
    [ANIM_STD_FACE_EAST] = sAnim_RayquazaFaceEast,
    [ANIM_STD_GO_SOUTH] = sAnim_RayquazaCoiledAsleep,
    [ANIM_STD_GO_NORTH] = sAnim_RayquazaFlyUp,
    [ANIM_STD_GO_WEST] = sAnim_RayquazaCoiledMouthOpen,
    [ANIM_STD_GO_EAST] = sAnim_RayquazaNormal,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_RayquazaCoiledAsleep,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_RayquazaFlyUp,
    [ANIM_STD_GO_FAST_WEST] = sAnim_RayquazaCoiledAwake,
    [ANIM_STD_GO_FAST_EAST] = sAnim_RayquazaNormal,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_RayquazaCoiledAsleep,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_RayquazaFlyUp,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_RayquazaCoiledMouthOpen,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_RayquazaNormal,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_RayquazaCoiledAsleep,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_RayquazaFlyUp,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_RayquazaCoiledMouthOpen,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_RayquazaNormal,
};

static const union AnimCmd *const sAnimTable_BrendanMayNormal[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth,
    [ANIM_STD_GO_WEST] = sAnim_GoWest,
    [ANIM_STD_GO_EAST] = sAnim_GoEast,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast,
    [ANIM_RUN_SOUTH] = (IS_FRLG ? sAnim_RunSouthFrlg : sAnim_RunSouth),
    [ANIM_RUN_NORTH] = (IS_FRLG ? sAnim_RunNorthFrlg : sAnim_RunNorth),
    [ANIM_RUN_WEST] = (IS_FRLG ? sAnim_RunWestFrlg : sAnim_RunWest),
    [ANIM_RUN_EAST] = (IS_FRLG ? sAnim_RunEastFrlg : sAnim_RunEast),
    [ANIM_SPIN_SOUTH] = sAnim_SpinSouth,
    [ANIM_SPIN_NORTH] = sAnim_SpinNorth,
    [ANIM_SPIN_WEST] = sAnim_SpinWest,
    [ANIM_SPIN_EAST] = sAnim_SpinEast,
};

static const union AnimCmd *const sAnimTable_AcroBike[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth,
    [ANIM_STD_GO_WEST] = sAnim_GoWest,
    [ANIM_STD_GO_EAST] = sAnim_GoEast,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast,
    [ANIM_BUNNY_HOP_BACK_WHEEL_SOUTH] = sAnim_BunnyHopBackWheelSouth,
    [ANIM_BUNNY_HOP_BACK_WHEEL_NORTH] = sAnim_BunnyHopBackWheelNorth,
    [ANIM_BUNNY_HOP_BACK_WHEEL_WEST] = sAnim_BunnyHopBackWheelWest,
    [ANIM_BUNNY_HOP_BACK_WHEEL_EAST] = sAnim_BunnyHopBackWheelEast,
    [ANIM_BUNNY_HOP_FRONT_WHEEL_SOUTH] = sAnim_BunnyHopFrontWheelSouth,
    [ANIM_BUNNY_HOP_FRONT_WHEEL_NORTH] = sAnim_BunnyHopFrontWheelNorth,
    [ANIM_BUNNY_HOP_FRONT_WHEEL_WEST] = sAnim_BunnyHopFrontWheelWest,
    [ANIM_BUNNY_HOP_FRONT_WHEEL_EAST] = sAnim_BunnyHopFrontWheelEast,
    [ANIM_STANDING_WHEELIE_BACK_WHEEL_SOUTH] = sAnim_StandingWheelieBackWheelSouth,
    [ANIM_STANDING_WHEELIE_BACK_WHEEL_NORTH] = sAnim_StandingWheelieBackWheelNorth,
    [ANIM_STANDING_WHEELIE_BACK_WHEEL_WEST] = sAnim_StandingWheelieBackWheelWest,
    [ANIM_STANDING_WHEELIE_BACK_WHEEL_EAST] = sAnim_StandingWheelieBackWheelEast,
    [ANIM_STANDING_WHEELIE_FRONT_WHEEL_SOUTH] = sAnim_StandingWheelieFrontWheelSouth,
    [ANIM_STANDING_WHEELIE_FRONT_WHEEL_NORTH] = sAnim_StandingWheelieFrontWheelNorth,
    [ANIM_STANDING_WHEELIE_FRONT_WHEEL_WEST] = sAnim_StandingWheelieFrontWheelWest,
    [ANIM_STANDING_WHEELIE_FRONT_WHEEL_EAST] = sAnim_StandingWheelieFrontWheelEast,
    [ANIM_MOVING_WHEELIE_SOUTH] = sAnim_MovingWheelieSouth,
    [ANIM_MOVING_WHEELIE_NORTH] = sAnim_MovingWheelieNorth,
    [ANIM_MOVING_WHEELIE_WEST] = sAnim_MovingWheelieWest,
    [ANIM_MOVING_WHEELIE_EAST] = sAnim_MovingWheelieEast,
};

static const union AnimCmd *const sAnimTable_Surfing[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth,
    [ANIM_STD_GO_WEST] = sAnim_GoWest,
    [ANIM_STD_GO_EAST] = sAnim_GoEast,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast,
    [ANIM_GET_ON_OFF_POKEMON_SOUTH] = sAnim_GetOnOffSurfBlobSouth,
    [ANIM_GET_ON_OFF_POKEMON_NORTH] = sAnim_GetOnOffSurfBlobNorth,
    [ANIM_GET_ON_OFF_POKEMON_WEST] = sAnim_GetOnOffSurfBlobWest,
    [ANIM_GET_ON_OFF_POKEMON_EAST] = sAnim_GetOnOffSurfBlobEast,
};

static const union AnimCmd *const sAnimTable_Nurse[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth,
    [ANIM_STD_GO_WEST] = sAnim_GoWest,
    [ANIM_STD_GO_EAST] = sAnim_GoEast,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth,
    [ANIM_STD_GO_FASTER_WEST]  = sAnim_GoFasterWest,
    [ANIM_STD_GO_FASTER_EAST]  = sAnim_GoFasterEast,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast,
    [ANIM_NURSE_BOW] = sAnim_NurseBow,
};

static const union AnimCmd *const sAnimTable_FieldMove[] = {
    [ANIM_FIELD_MOVE] = sAnim_FieldMove,
};

static const union AnimCmd *const sAnimTable_BerryTree[] = {
    [BERRY_STAGE_PLANTED - 1] = sAnim_BerryTreeStage0,
    [BERRY_STAGE_SPROUTED - 1] = sAnim_BerryTreeStage1,
    [BERRY_STAGE_TALLER - 1] = sAnim_BerryTreeStage2,
    [BERRY_STAGE_TRUNK - 1] = sAnim_BerryTreeStage2,
    [BERRY_STAGE_BUDDING - 1] = sAnim_BerryTreeStage2,
    [BERRY_STAGE_FLOWERING - 1] = sAnim_BerryTreeStage3,
    [BERRY_STAGE_BERRIES - 1] = sAnim_BerryTreeStage4,
};

static const union AnimCmd *const sAnimTable_BreakableRock[] = {
    [ANIM_STAY_STILL] = sAnim_StayStill,
    [ANIM_REMOVE_OBSTACLE] = sAnim_RockBreak,
};

static const union AnimCmd *const sAnimTable_CuttableTree[] = {
    [ANIM_STAY_STILL] = sAnim_StayStill,
    [ANIM_REMOVE_OBSTACLE] = sAnim_TreeCut,
};

static const union AnimCmd *const sAnimTable_Fishing[] = {
    [ANIM_TAKE_OUT_ROD_SOUTH] = sAnim_TakeOutRodSouth,
    [ANIM_TAKE_OUT_ROD_NORTH] = sAnim_TakeOutRodNorth,
    [ANIM_TAKE_OUT_ROD_WEST] = sAnim_TakeOutRodWest,
    [ANIM_TAKE_OUT_ROD_EAST] = sAnim_TakeOutRodEast,
    [ANIM_PUT_AWAY_ROD_SOUTH] = sAnim_PutAwayRodSouth,
    [ANIM_PUT_AWAY_ROD_NORTH] = sAnim_PutAwayRodNorth,
    [ANIM_PUT_AWAY_ROD_WEST] = sAnim_PutAwayRodWest,
    [ANIM_PUT_AWAY_ROD_EAST] = sAnim_PutAwayRodEast,
    [ANIM_HOOKED_POKEMON_SOUTH] = sAnim_HookedPokemonSouth,
    [ANIM_HOOKED_POKEMON_NORTH] = sAnim_HookedPokemonNorth,
    [ANIM_HOOKED_POKEMON_WEST] = sAnim_HookedPokemonWest,
    [ANIM_HOOKED_POKEMON_EAST] = sAnim_HookedPokemonEast,
};

static const union AffineAnimCmd *const sAffineAnimTable_KyogreGroudon[] = {
    sAffineAnim_KyogreGroudon_GoSouthStart, // Used by Kyogre/Groudon when awakened
    sAffineAnim_KyogreGroudon_GoSouth,      // Used by Kyogre/Groudon when awakened
    sAffineAnim_KyogreGroudon_AttackWest,   // Used by Kyogre during Sootopolis fight
    sAffineAnim_KyogreGroudon_AttackEast,   // Unused
    sAffineAnim_KyogreGroudon_DipWest,      // Unused
    sAffineAnim_KyogreGroudon_DipEast,      // Unused
};

// For animations with alternating steps
static const struct StepAnimTable sStepAnimTables[] = {
    {
        .anims = sAnimTable_QuintyPlump,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Standard,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Following,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_BrendanMayNormal,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_AcroBike,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Surfing,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Nurse,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Fishing,
        .animPos = {1, 3, 0, 2},
    },
    {},
};

static const union AnimCmd *const sAnimTable_RedGreenFieldMove[] = {
    sAnim_FieldMove,
};

static const union AnimCmd *const sAnimTable_RedGreenVSSeeker[] = {
    sAnim_VSSeeker,
};

static const union AnimCmd *const sAnimTable_RedGreenVSSeekerBike[] = {
    sAnim_VSSeekerBike,
};

// >>> PorySuite-Z generic loop tables >>>

// Project-wide preset loops generated by PorySuite-Z.  Any sprite
// whose first N frames make a complete idle cycle can assign its
// .anims to one of these — no per-sprite table generation needed.
// Every direction slot points at the same loop, the sprite never
// hFlips, and NO frame index is skipped (these target sprites with
// no VS-seeker emote pose).  Drive the sprite with
// MOVEMENT_TYPE_FRAME_CYCLE on a non-inanimate object event.

static const union AnimCmd sAnim_Loop2Sequential[] = {
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop2Sequential[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop2Sequential,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop2Sequential,
    [ANIM_STD_FACE_WEST] = sAnim_Loop2Sequential,
    [ANIM_STD_FACE_EAST] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_NORTH] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_WEST] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_EAST] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop2Sequential,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop2Sequential,
    [ANIM_RAISE_HAND] = sAnim_Loop2Sequential,
};

static const union AnimCmd sAnim_Loop3Sequential[] = {
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop3Sequential[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop3Sequential,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop3Sequential,
    [ANIM_STD_FACE_WEST] = sAnim_Loop3Sequential,
    [ANIM_STD_FACE_EAST] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_NORTH] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_WEST] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_EAST] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop3Sequential,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop3Sequential,
    [ANIM_RAISE_HAND] = sAnim_Loop3Sequential,
};

static const union AnimCmd sAnim_Loop4Sequential[] = {
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_FRAME(3, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop4Sequential[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop4Sequential,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop4Sequential,
    [ANIM_STD_FACE_WEST] = sAnim_Loop4Sequential,
    [ANIM_STD_FACE_EAST] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_NORTH] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_WEST] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_EAST] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop4Sequential,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop4Sequential,
    [ANIM_RAISE_HAND] = sAnim_Loop4Sequential,
};

static const union AnimCmd sAnim_Loop5Sequential[] = {
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_FRAME(3, 16),
    ANIMCMD_FRAME(4, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop5Sequential[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop5Sequential,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop5Sequential,
    [ANIM_STD_FACE_WEST] = sAnim_Loop5Sequential,
    [ANIM_STD_FACE_EAST] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_NORTH] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_WEST] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_EAST] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop5Sequential,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop5Sequential,
    [ANIM_RAISE_HAND] = sAnim_Loop5Sequential,
};

static const union AnimCmd sAnim_Loop6Sequential[] = {
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_FRAME(3, 16),
    ANIMCMD_FRAME(4, 16),
    ANIMCMD_FRAME(5, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop6Sequential[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop6Sequential,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop6Sequential,
    [ANIM_STD_FACE_WEST] = sAnim_Loop6Sequential,
    [ANIM_STD_FACE_EAST] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_NORTH] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_WEST] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_EAST] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop6Sequential,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop6Sequential,
    [ANIM_RAISE_HAND] = sAnim_Loop6Sequential,
};

static const union AnimCmd sAnim_Loop7Sequential[] = {
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_FRAME(3, 16),
    ANIMCMD_FRAME(4, 16),
    ANIMCMD_FRAME(5, 16),
    ANIMCMD_FRAME(6, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop7Sequential[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop7Sequential,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop7Sequential,
    [ANIM_STD_FACE_WEST] = sAnim_Loop7Sequential,
    [ANIM_STD_FACE_EAST] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_NORTH] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_WEST] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_EAST] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop7Sequential,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop7Sequential,
    [ANIM_RAISE_HAND] = sAnim_Loop7Sequential,
};

static const union AnimCmd sAnim_Loop8Sequential[] = {
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_FRAME(3, 16),
    ANIMCMD_FRAME(4, 16),
    ANIMCMD_FRAME(5, 16),
    ANIMCMD_FRAME(6, 16),
    ANIMCMD_FRAME(7, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop8Sequential[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop8Sequential,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop8Sequential,
    [ANIM_STD_FACE_WEST] = sAnim_Loop8Sequential,
    [ANIM_STD_FACE_EAST] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_NORTH] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_WEST] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_EAST] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop8Sequential,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop8Sequential,
    [ANIM_RAISE_HAND] = sAnim_Loop8Sequential,
};

static const union AnimCmd sAnim_Loop2Random[] = {
    ANIMCMD_FRAME(0, 60),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 35),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 46),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 34),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 60),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(0, 46),
    ANIMCMD_FRAME(1, 53),
    ANIMCMD_FRAME(0, 34),
    ANIMCMD_FRAME(1, 41),
    ANIMCMD_FRAME(0, 47),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 46),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 49),
    ANIMCMD_FRAME(1, 34),
    ANIMCMD_FRAME(0, 37),
    ANIMCMD_FRAME(1, 55),
    ANIMCMD_FRAME(0, 45),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 34),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 42),
    ANIMCMD_FRAME(1, 41),
    ANIMCMD_FRAME(0, 43),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 48),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 51),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 46),
    ANIMCMD_FRAME(1, 47),
    ANIMCMD_FRAME(0, 49),
    ANIMCMD_FRAME(1, 56),
    ANIMCMD_FRAME(0, 57),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 53),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 58),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_FRAME(1, 26),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 37),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 52),
    ANIMCMD_FRAME(0, 56),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 45),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop2Random[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop2Random,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop2Random,
    [ANIM_STD_FACE_WEST] = sAnim_Loop2Random,
    [ANIM_STD_FACE_EAST] = sAnim_Loop2Random,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop2Random,
    [ANIM_STD_GO_NORTH] = sAnim_Loop2Random,
    [ANIM_STD_GO_WEST] = sAnim_Loop2Random,
    [ANIM_STD_GO_EAST] = sAnim_Loop2Random,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop2Random,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop2Random,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop2Random,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop2Random,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop2Random,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop2Random,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop2Random,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop2Random,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop2Random,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop2Random,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop2Random,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop2Random,
    [ANIM_RAISE_HAND] = sAnim_Loop2Random,
};

static const union AnimCmd sAnim_Loop3Random[] = {
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 56),
    ANIMCMD_FRAME(0, 46),
    ANIMCMD_FRAME(2, 54),
    ANIMCMD_FRAME(0, 41),
    ANIMCMD_FRAME(2, 22),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(2, 59),
    ANIMCMD_FRAME(0, 29),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(2, 60),
    ANIMCMD_FRAME(0, 42),
    ANIMCMD_FRAME(2, 33),
    ANIMCMD_FRAME(0, 36),
    ANIMCMD_FRAME(1, 51),
    ANIMCMD_FRAME(2, 23),
    ANIMCMD_FRAME(0, 53),
    ANIMCMD_FRAME(1, 42),
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(2, 56),
    ANIMCMD_FRAME(1, 42),
    ANIMCMD_FRAME(2, 51),
    ANIMCMD_FRAME(1, 57),
    ANIMCMD_FRAME(0, 56),
    ANIMCMD_FRAME(2, 23),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_FRAME(2, 40),
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_FRAME(1, 37),
    ANIMCMD_FRAME(2, 39),
    ANIMCMD_FRAME(0, 48),
    ANIMCMD_FRAME(2, 32),
    ANIMCMD_FRAME(1, 55),
    ANIMCMD_FRAME(0, 29),
    ANIMCMD_FRAME(1, 37),
    ANIMCMD_FRAME(2, 32),
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_FRAME(2, 42),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(2, 30),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(2, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 60),
    ANIMCMD_FRAME(2, 53),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 54),
    ANIMCMD_FRAME(1, 37),
    ANIMCMD_FRAME(2, 47),
    ANIMCMD_FRAME(0, 44),
    ANIMCMD_FRAME(2, 60),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 60),
    ANIMCMD_FRAME(1, 43),
    ANIMCMD_FRAME(2, 50),
    ANIMCMD_FRAME(1, 52),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(2, 23),
    ANIMCMD_FRAME(0, 57),
    ANIMCMD_FRAME(2, 45),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop3Random[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop3Random,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop3Random,
    [ANIM_STD_FACE_WEST] = sAnim_Loop3Random,
    [ANIM_STD_FACE_EAST] = sAnim_Loop3Random,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop3Random,
    [ANIM_STD_GO_NORTH] = sAnim_Loop3Random,
    [ANIM_STD_GO_WEST] = sAnim_Loop3Random,
    [ANIM_STD_GO_EAST] = sAnim_Loop3Random,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop3Random,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop3Random,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop3Random,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop3Random,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop3Random,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop3Random,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop3Random,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop3Random,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop3Random,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop3Random,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop3Random,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop3Random,
    [ANIM_RAISE_HAND] = sAnim_Loop3Random,
};

static const union AnimCmd sAnim_Loop4Random[] = {
    ANIMCMD_FRAME(2, 26),
    ANIMCMD_FRAME(0, 43),
    ANIMCMD_FRAME(3, 20),
    ANIMCMD_FRAME(1, 34),
    ANIMCMD_FRAME(3, 33),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 56),
    ANIMCMD_FRAME(2, 26),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(2, 22),
    ANIMCMD_FRAME(3, 31),
    ANIMCMD_FRAME(0, 48),
    ANIMCMD_FRAME(3, 58),
    ANIMCMD_FRAME(0, 56),
    ANIMCMD_FRAME(3, 30),
    ANIMCMD_FRAME(1, 51),
    ANIMCMD_FRAME(0, 43),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 56),
    ANIMCMD_FRAME(2, 31),
    ANIMCMD_FRAME(3, 21),
    ANIMCMD_FRAME(2, 46),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 36),
    ANIMCMD_FRAME(2, 36),
    ANIMCMD_FRAME(0, 51),
    ANIMCMD_FRAME(3, 39),
    ANIMCMD_FRAME(1, 37),
    ANIMCMD_FRAME(3, 37),
    ANIMCMD_FRAME(2, 56),
    ANIMCMD_FRAME(3, 29),
    ANIMCMD_FRAME(0, 55),
    ANIMCMD_FRAME(3, 37),
    ANIMCMD_FRAME(1, 39),
    ANIMCMD_FRAME(3, 37),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 58),
    ANIMCMD_FRAME(3, 31),
    ANIMCMD_FRAME(1, 31),
    ANIMCMD_FRAME(2, 24),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(3, 57),
    ANIMCMD_FRAME(2, 22),
    ANIMCMD_FRAME(1, 34),
    ANIMCMD_FRAME(3, 28),
    ANIMCMD_FRAME(1, 37),
    ANIMCMD_FRAME(3, 50),
    ANIMCMD_FRAME(2, 23),
    ANIMCMD_FRAME(3, 54),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(3, 38),
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_FRAME(3, 58),
    ANIMCMD_FRAME(2, 46),
    ANIMCMD_FRAME(0, 58),
    ANIMCMD_FRAME(2, 22),
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_FRAME(2, 27),
    ANIMCMD_FRAME(0, 46),
    ANIMCMD_FRAME(2, 49),
    ANIMCMD_FRAME(0, 35),
    ANIMCMD_FRAME(3, 45),
    ANIMCMD_FRAME(2, 34),
    ANIMCMD_FRAME(3, 44),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop4Random[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop4Random,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop4Random,
    [ANIM_STD_FACE_WEST] = sAnim_Loop4Random,
    [ANIM_STD_FACE_EAST] = sAnim_Loop4Random,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop4Random,
    [ANIM_STD_GO_NORTH] = sAnim_Loop4Random,
    [ANIM_STD_GO_WEST] = sAnim_Loop4Random,
    [ANIM_STD_GO_EAST] = sAnim_Loop4Random,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop4Random,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop4Random,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop4Random,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop4Random,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop4Random,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop4Random,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop4Random,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop4Random,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop4Random,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop4Random,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop4Random,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop4Random,
    [ANIM_RAISE_HAND] = sAnim_Loop4Random,
};

static const union AnimCmd sAnim_Loop5Random[] = {
    ANIMCMD_FRAME(0, 42),
    ANIMCMD_FRAME(1, 42),
    ANIMCMD_FRAME(3, 22),
    ANIMCMD_FRAME(2, 21),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 57),
    ANIMCMD_FRAME(0, 23),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 48),
    ANIMCMD_FRAME(3, 50),
    ANIMCMD_FRAME(1, 37),
    ANIMCMD_FRAME(2, 26),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(2, 58),
    ANIMCMD_FRAME(4, 48),
    ANIMCMD_FRAME(3, 56),
    ANIMCMD_FRAME(4, 23),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(2, 22),
    ANIMCMD_FRAME(4, 43),
    ANIMCMD_FRAME(1, 41),
    ANIMCMD_FRAME(0, 56),
    ANIMCMD_FRAME(2, 47),
    ANIMCMD_FRAME(0, 55),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(2, 34),
    ANIMCMD_FRAME(3, 21),
    ANIMCMD_FRAME(1, 42),
    ANIMCMD_FRAME(0, 36),
    ANIMCMD_FRAME(3, 29),
    ANIMCMD_FRAME(0, 35),
    ANIMCMD_FRAME(1, 41),
    ANIMCMD_FRAME(2, 51),
    ANIMCMD_FRAME(3, 43),
    ANIMCMD_FRAME(4, 51),
    ANIMCMD_FRAME(2, 51),
    ANIMCMD_FRAME(0, 23),
    ANIMCMD_FRAME(3, 43),
    ANIMCMD_FRAME(0, 37),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(4, 49),
    ANIMCMD_FRAME(1, 56),
    ANIMCMD_FRAME(2, 60),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(4, 31),
    ANIMCMD_FRAME(0, 34),
    ANIMCMD_FRAME(4, 37),
    ANIMCMD_FRAME(2, 28),
    ANIMCMD_FRAME(3, 30),
    ANIMCMD_FRAME(4, 20),
    ANIMCMD_FRAME(2, 52),
    ANIMCMD_FRAME(4, 41),
    ANIMCMD_FRAME(3, 53),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(4, 38),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 43),
    ANIMCMD_FRAME(3, 54),
    ANIMCMD_FRAME(4, 56),
    ANIMCMD_FRAME(1, 55),
    ANIMCMD_FRAME(3, 56),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop5Random[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop5Random,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop5Random,
    [ANIM_STD_FACE_WEST] = sAnim_Loop5Random,
    [ANIM_STD_FACE_EAST] = sAnim_Loop5Random,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop5Random,
    [ANIM_STD_GO_NORTH] = sAnim_Loop5Random,
    [ANIM_STD_GO_WEST] = sAnim_Loop5Random,
    [ANIM_STD_GO_EAST] = sAnim_Loop5Random,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop5Random,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop5Random,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop5Random,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop5Random,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop5Random,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop5Random,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop5Random,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop5Random,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop5Random,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop5Random,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop5Random,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop5Random,
    [ANIM_RAISE_HAND] = sAnim_Loop5Random,
};

static const union AnimCmd sAnim_Loop6Random[] = {
    ANIMCMD_FRAME(4, 54),
    ANIMCMD_FRAME(5, 55),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(5, 37),
    ANIMCMD_FRAME(1, 38),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(2, 25),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(2, 39),
    ANIMCMD_FRAME(4, 22),
    ANIMCMD_FRAME(3, 22),
    ANIMCMD_FRAME(4, 52),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(2, 45),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(3, 21),
    ANIMCMD_FRAME(0, 48),
    ANIMCMD_FRAME(3, 31),
    ANIMCMD_FRAME(0, 60),
    ANIMCMD_FRAME(5, 29),
    ANIMCMD_FRAME(2, 35),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(3, 22),
    ANIMCMD_FRAME(2, 50),
    ANIMCMD_FRAME(4, 50),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(3, 24),
    ANIMCMD_FRAME(5, 55),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(3, 31),
    ANIMCMD_FRAME(2, 60),
    ANIMCMD_FRAME(3, 46),
    ANIMCMD_FRAME(2, 59),
    ANIMCMD_FRAME(3, 35),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(4, 49),
    ANIMCMD_FRAME(5, 24),
    ANIMCMD_FRAME(4, 59),
    ANIMCMD_FRAME(5, 53),
    ANIMCMD_FRAME(3, 44),
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_FRAME(1, 38),
    ANIMCMD_FRAME(2, 39),
    ANIMCMD_FRAME(3, 43),
    ANIMCMD_FRAME(1, 34),
    ANIMCMD_FRAME(4, 47),
    ANIMCMD_FRAME(3, 56),
    ANIMCMD_FRAME(5, 25),
    ANIMCMD_FRAME(2, 42),
    ANIMCMD_FRAME(3, 45),
    ANIMCMD_FRAME(4, 30),
    ANIMCMD_FRAME(0, 39),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(3, 37),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(2, 55),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(2, 48),
    ANIMCMD_FRAME(0, 52),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(3, 20),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop6Random[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop6Random,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop6Random,
    [ANIM_STD_FACE_WEST] = sAnim_Loop6Random,
    [ANIM_STD_FACE_EAST] = sAnim_Loop6Random,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop6Random,
    [ANIM_STD_GO_NORTH] = sAnim_Loop6Random,
    [ANIM_STD_GO_WEST] = sAnim_Loop6Random,
    [ANIM_STD_GO_EAST] = sAnim_Loop6Random,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop6Random,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop6Random,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop6Random,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop6Random,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop6Random,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop6Random,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop6Random,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop6Random,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop6Random,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop6Random,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop6Random,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop6Random,
    [ANIM_RAISE_HAND] = sAnim_Loop6Random,
};

static const union AnimCmd sAnim_Loop7Random[] = {
    ANIMCMD_FRAME(6, 56),
    ANIMCMD_FRAME(1, 38),
    ANIMCMD_FRAME(5, 52),
    ANIMCMD_FRAME(3, 33),
    ANIMCMD_FRAME(5, 34),
    ANIMCMD_FRAME(6, 49),
    ANIMCMD_FRAME(0, 60),
    ANIMCMD_FRAME(5, 53),
    ANIMCMD_FRAME(2, 55),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(3, 51),
    ANIMCMD_FRAME(6, 55),
    ANIMCMD_FRAME(2, 27),
    ANIMCMD_FRAME(5, 39),
    ANIMCMD_FRAME(4, 57),
    ANIMCMD_FRAME(2, 22),
    ANIMCMD_FRAME(4, 56),
    ANIMCMD_FRAME(0, 47),
    ANIMCMD_FRAME(2, 49),
    ANIMCMD_FRAME(5, 53),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(5, 37),
    ANIMCMD_FRAME(4, 42),
    ANIMCMD_FRAME(6, 49),
    ANIMCMD_FRAME(2, 22),
    ANIMCMD_FRAME(3, 20),
    ANIMCMD_FRAME(4, 22),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(4, 20),
    ANIMCMD_FRAME(3, 60),
    ANIMCMD_FRAME(4, 36),
    ANIMCMD_FRAME(2, 28),
    ANIMCMD_FRAME(6, 43),
    ANIMCMD_FRAME(4, 20),
    ANIMCMD_FRAME(5, 24),
    ANIMCMD_FRAME(0, 41),
    ANIMCMD_FRAME(4, 44),
    ANIMCMD_FRAME(0, 52),
    ANIMCMD_FRAME(6, 31),
    ANIMCMD_FRAME(0, 36),
    ANIMCMD_FRAME(4, 45),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 45),
    ANIMCMD_FRAME(3, 34),
    ANIMCMD_FRAME(2, 26),
    ANIMCMD_FRAME(4, 50),
    ANIMCMD_FRAME(2, 50),
    ANIMCMD_FRAME(5, 37),
    ANIMCMD_FRAME(0, 39),
    ANIMCMD_FRAME(2, 43),
    ANIMCMD_FRAME(0, 53),
    ANIMCMD_FRAME(2, 29),
    ANIMCMD_FRAME(6, 41),
    ANIMCMD_FRAME(2, 51),
    ANIMCMD_FRAME(4, 24),
    ANIMCMD_FRAME(2, 38),
    ANIMCMD_FRAME(5, 57),
    ANIMCMD_FRAME(2, 57),
    ANIMCMD_FRAME(3, 36),
    ANIMCMD_FRAME(0, 43),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(3, 33),
    ANIMCMD_FRAME(2, 40),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop7Random[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop7Random,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop7Random,
    [ANIM_STD_FACE_WEST] = sAnim_Loop7Random,
    [ANIM_STD_FACE_EAST] = sAnim_Loop7Random,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop7Random,
    [ANIM_STD_GO_NORTH] = sAnim_Loop7Random,
    [ANIM_STD_GO_WEST] = sAnim_Loop7Random,
    [ANIM_STD_GO_EAST] = sAnim_Loop7Random,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop7Random,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop7Random,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop7Random,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop7Random,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop7Random,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop7Random,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop7Random,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop7Random,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop7Random,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop7Random,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop7Random,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop7Random,
    [ANIM_RAISE_HAND] = sAnim_Loop7Random,
};

static const union AnimCmd sAnim_Loop8Random[] = {
    ANIMCMD_FRAME(7, 32),
    ANIMCMD_FRAME(4, 30),
    ANIMCMD_FRAME(7, 22),
    ANIMCMD_FRAME(2, 30),
    ANIMCMD_FRAME(3, 45),
    ANIMCMD_FRAME(1, 59),
    ANIMCMD_FRAME(3, 56),
    ANIMCMD_FRAME(6, 36),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(6, 47),
    ANIMCMD_FRAME(1, 31),
    ANIMCMD_FRAME(4, 27),
    ANIMCMD_FRAME(5, 59),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 59),
    ANIMCMD_FRAME(5, 55),
    ANIMCMD_FRAME(1, 39),
    ANIMCMD_FRAME(7, 30),
    ANIMCMD_FRAME(2, 60),
    ANIMCMD_FRAME(6, 44),
    ANIMCMD_FRAME(5, 29),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 49),
    ANIMCMD_FRAME(3, 29),
    ANIMCMD_FRAME(7, 46),
    ANIMCMD_FRAME(5, 58),
    ANIMCMD_FRAME(1, 34),
    ANIMCMD_FRAME(0, 59),
    ANIMCMD_FRAME(4, 43),
    ANIMCMD_FRAME(1, 53),
    ANIMCMD_FRAME(6, 23),
    ANIMCMD_FRAME(5, 43),
    ANIMCMD_FRAME(6, 30),
    ANIMCMD_FRAME(3, 34),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(4, 22),
    ANIMCMD_FRAME(7, 26),
    ANIMCMD_FRAME(5, 29),
    ANIMCMD_FRAME(6, 57),
    ANIMCMD_FRAME(7, 28),
    ANIMCMD_FRAME(4, 47),
    ANIMCMD_FRAME(3, 30),
    ANIMCMD_FRAME(6, 48),
    ANIMCMD_FRAME(5, 24),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(3, 58),
    ANIMCMD_FRAME(0, 55),
    ANIMCMD_FRAME(5, 55),
    ANIMCMD_FRAME(3, 47),
    ANIMCMD_FRAME(5, 29),
    ANIMCMD_FRAME(6, 22),
    ANIMCMD_FRAME(0, 54),
    ANIMCMD_FRAME(2, 46),
    ANIMCMD_FRAME(7, 46),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 34),
    ANIMCMD_FRAME(7, 51),
    ANIMCMD_FRAME(4, 45),
    ANIMCMD_FRAME(6, 33),
    ANIMCMD_FRAME(4, 58),
    ANIMCMD_FRAME(3, 20),
    ANIMCMD_FRAME(2, 58),
    ANIMCMD_FRAME(3, 42),
    ANIMCMD_FRAME(6, 51),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_Loop8Random[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_Loop8Random,
    [ANIM_STD_FACE_NORTH] = sAnim_Loop8Random,
    [ANIM_STD_FACE_WEST] = sAnim_Loop8Random,
    [ANIM_STD_FACE_EAST] = sAnim_Loop8Random,
    [ANIM_STD_GO_SOUTH] = sAnim_Loop8Random,
    [ANIM_STD_GO_NORTH] = sAnim_Loop8Random,
    [ANIM_STD_GO_WEST] = sAnim_Loop8Random,
    [ANIM_STD_GO_EAST] = sAnim_Loop8Random,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_Loop8Random,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_Loop8Random,
    [ANIM_STD_GO_FAST_WEST] = sAnim_Loop8Random,
    [ANIM_STD_GO_FAST_EAST] = sAnim_Loop8Random,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_Loop8Random,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_Loop8Random,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_Loop8Random,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_Loop8Random,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_Loop8Random,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_Loop8Random,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_Loop8Random,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_Loop8Random,
    [ANIM_RAISE_HAND] = sAnim_Loop8Random,
};

// <<< PorySuite-Z generic loop tables <<<

// >>> PorySuite-Z no-mirror directional tables >>>

// Facing NPCs that NEVER hFlip — each direction draws its own frame,
// so a hand-drawn left that differs from the right shows correctly.
// Walk slots reuse the matching face frame (a watchful/stationary NPC
// never plays them). Assign a sprite's .anims to one of these and give
// it a facing movement type (e.g. MOVEMENT_TYPE_WATCHFUL).

static const union AnimCmd sAnim_NoFlipFace4_S[] = {
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd sAnim_NoFlipFace4_N[] = {
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd sAnim_NoFlipFace4_W[] = {
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd sAnim_NoFlipFace4_E[] = {
    ANIMCMD_FRAME(3, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_NoFlipFace4[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_NoFlipFace4_S,
    [ANIM_STD_FACE_NORTH] = sAnim_NoFlipFace4_N,
    [ANIM_STD_FACE_WEST] = sAnim_NoFlipFace4_W,
    [ANIM_STD_FACE_EAST] = sAnim_NoFlipFace4_E,
    [ANIM_STD_GO_SOUTH] = sAnim_NoFlipFace4_S,
    [ANIM_STD_GO_NORTH] = sAnim_NoFlipFace4_N,
    [ANIM_STD_GO_WEST] = sAnim_NoFlipFace4_W,
    [ANIM_STD_GO_EAST] = sAnim_NoFlipFace4_E,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_NoFlipFace4_S,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_NoFlipFace4_N,
    [ANIM_STD_GO_FAST_WEST] = sAnim_NoFlipFace4_W,
    [ANIM_STD_GO_FAST_EAST] = sAnim_NoFlipFace4_E,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_NoFlipFace4_S,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_NoFlipFace4_N,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_NoFlipFace4_W,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_NoFlipFace4_E,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_NoFlipFace4_S,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_NoFlipFace4_N,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_NoFlipFace4_W,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_NoFlipFace4_E,
    [ANIM_RAISE_HAND] = sAnim_NoFlipFace4_S,
};

static const union AnimCmd sAnim_NoFlipFace3RightSharesUp_S[] = {
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd sAnim_NoFlipFace3RightSharesUp_N[] = {
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd sAnim_NoFlipFace3RightSharesUp_W[] = {
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd sAnim_NoFlipFace3RightSharesUp_E[] = {
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnimTable_NoFlipFace3RightSharesUp[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_NoFlipFace3RightSharesUp_S,
    [ANIM_STD_FACE_NORTH] = sAnim_NoFlipFace3RightSharesUp_N,
    [ANIM_STD_FACE_WEST] = sAnim_NoFlipFace3RightSharesUp_W,
    [ANIM_STD_FACE_EAST] = sAnim_NoFlipFace3RightSharesUp_E,
    [ANIM_STD_GO_SOUTH] = sAnim_NoFlipFace3RightSharesUp_S,
    [ANIM_STD_GO_NORTH] = sAnim_NoFlipFace3RightSharesUp_N,
    [ANIM_STD_GO_WEST] = sAnim_NoFlipFace3RightSharesUp_W,
    [ANIM_STD_GO_EAST] = sAnim_NoFlipFace3RightSharesUp_E,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_NoFlipFace3RightSharesUp_S,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_NoFlipFace3RightSharesUp_N,
    [ANIM_STD_GO_FAST_WEST] = sAnim_NoFlipFace3RightSharesUp_W,
    [ANIM_STD_GO_FAST_EAST] = sAnim_NoFlipFace3RightSharesUp_E,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_NoFlipFace3RightSharesUp_S,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_NoFlipFace3RightSharesUp_N,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_NoFlipFace3RightSharesUp_W,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_NoFlipFace3RightSharesUp_E,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_NoFlipFace3RightSharesUp_S,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_NoFlipFace3RightSharesUp_N,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_NoFlipFace3RightSharesUp_W,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_NoFlipFace3RightSharesUp_E,
    [ANIM_RAISE_HAND] = sAnim_NoFlipFace3RightSharesUp_S,
};

// <<< PorySuite-Z no-mirror directional tables <<<
