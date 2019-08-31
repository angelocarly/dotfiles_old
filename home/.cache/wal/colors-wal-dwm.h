static const char norm_fg[] = "#eae2dc";
static const char norm_bg[] = "#1a1a1a";
static const char norm_border[] = "#4a4a4a";

static const char sel_fg[] = "#eae2dc";
static const char sel_bg[] = "#8d7138";
static const char sel_border[] = "#eae2dc";

static const char urg_fg[] = "#eae2dc";
static const char urg_bg[] = "#6b4747";
static const char urg_border[] = "#6b4747";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
