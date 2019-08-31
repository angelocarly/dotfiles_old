static const char norm_fg[] = "#c3b495";
static const char norm_bg[] = "#1a1a1a";
static const char norm_border[] = "#c3b495";

static const char sel_fg[] = "#c3b495";
static const char sel_bg[] = "#88885d";
static const char sel_border[] = "#c3b495";

static const char urg_fg[] = "#c3b495";
static const char urg_bg[] = "#ab6d4e";
static const char urg_border[] = "#ab6d4e";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
