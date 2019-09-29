static const char norm_fg[] = "#c1c1c1";
static const char norm_bg[] = "#000000";
static const char norm_border[] = "#333333";

static const char sel_fg[] = "#c1c1c1";
static const char sel_bg[] = "#dd9999";
static const char sel_border[] = "#c1c1c1";

static const char urg_fg[] = "#c1c1c1";
static const char urg_bg[] = "#5f8787";
static const char urg_border[] = "#5f8787";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
