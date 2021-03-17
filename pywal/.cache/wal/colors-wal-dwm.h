static const char norm_fg[] = "#EEEEEC";
static const char norm_bg[] = "#151515";
static const char norm_border[] = "#3e3c3a";

static const char sel_fg[] = "#EEEEEC";
static const char sel_bg[] = "#7a961b";
static const char sel_border[] = "#EEEEEC";

static const char urg_fg[] = "#EEEEEC";
static const char urg_bg[] = "#a3291b";
static const char urg_border[] = "#a3291b";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
