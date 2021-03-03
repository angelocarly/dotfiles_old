static const char norm_fg[] = "#e2e2e5";
static const char norm_bg[] = "#000000";
static const char norm_border[] = "#5f5f5f";

static const char sel_fg[] = "#e2e2e5";
static const char sel_bg[] = "#b1d631";
static const char sel_border[] = "#e2e2e5";

static const char urg_fg[] = "#e2e2e5";
static const char urg_bg[] = "#c03000";
static const char urg_border[] = "#c03000";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
