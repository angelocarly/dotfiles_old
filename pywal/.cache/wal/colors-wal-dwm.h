static const char norm_fg[] = "#DBDAC1";
static const char norm_bg[] = "#252525";
static const char norm_border[] = "#454545";

static const char sel_fg[] = "#DBDAC1";
static const char sel_bg[] = "#A5AF86";
static const char sel_border[] = "#DBDAC1";

static const char urg_fg[] = "#DBDAC1";
static const char urg_bg[] = "#CD546C";
static const char urg_border[] = "#CD546C";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
