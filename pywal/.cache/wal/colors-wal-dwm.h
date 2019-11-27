static const char norm_fg[] = "#bc9d66";
static const char norm_bg[] = "#0f0e0d";
static const char norm_border[] = "#383332";

static const char sel_fg[] = "#bc9d66";
static const char sel_bg[] = "#57553c";
static const char sel_border[] = "#bc9d66";

static const char urg_fg[] = "#bc9d66";
static const char urg_bg[] = "#845336";
static const char urg_border[] = "#845336";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
