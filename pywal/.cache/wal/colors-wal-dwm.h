static const char norm_fg[] = "#dddddd";
static const char norm_bg[] = "#101010";
static const char norm_border[] = "#404040";

static const char sel_fg[] = "#dddddd";
static const char sel_bg[] = "#b8d68c";
static const char sel_border[] = "#dddddd";

static const char urg_fg[] = "#dddddd";
static const char urg_bg[] = "#e84f4f";
static const char urg_border[] = "#e84f4f";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
