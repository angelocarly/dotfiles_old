static const char norm_fg[] = "#ebdbb2";
static const char norm_bg[] = "#262626";
static const char norm_border[] = "#8a8a8a";

static const char sel_fg[] = "#ebdbb2";
static const char sel_bg[] = "#afaf00";
static const char sel_border[] = "#ebdbb2";

static const char urg_fg[] = "#ebdbb2";
static const char urg_bg[] = "#d75f5f";
static const char urg_border[] = "#d75f5f";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
