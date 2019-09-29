static const char norm_fg[] = "#f9f7f3";
static const char norm_bg[] = "#2b2b2b";
static const char norm_border[] = "#5a647e";

static const char sel_fg[] = "#f9f7f3";
static const char sel_bg[] = "#a5c261";
static const char sel_border[] = "#f9f7f3";

static const char urg_fg[] = "#f9f7f3";
static const char urg_bg[] = "#da4939";
static const char urg_border[] = "#da4939";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
