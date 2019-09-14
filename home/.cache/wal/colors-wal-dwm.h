static const char norm_fg[] = "#7ec5c2";
static const char norm_bg[] = "#050E1B";
static const char norm_border[] = "#588987";

static const char sel_fg[] = "#7ec5c2";
static const char sel_bg[] = "#4E5646";
static const char sel_border[] = "#7ec5c2";

static const char urg_fg[] = "#7ec5c2";
static const char urg_bg[] = "#1A6768";
static const char urg_border[] = "#1A6768";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
