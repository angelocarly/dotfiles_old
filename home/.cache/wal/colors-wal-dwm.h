static const char norm_fg[] = "#c7c7c5";
static const char norm_bg[] = "#211f19";
static const char norm_border[] = "#585752";

static const char sel_fg[] = "#c7c7c5";
static const char sel_bg[] = "#b4b27d";
static const char sel_border[] = "#c7c7c5";

static const char urg_fg[] = "#c7c7c5";
static const char urg_bg[] = "#b1a277";
static const char urg_border[] = "#b1a277";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
