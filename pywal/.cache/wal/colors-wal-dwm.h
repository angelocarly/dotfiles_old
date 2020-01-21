static const char norm_fg[] = "#f9f1ed";
static const char norm_bg[] = "#5a7260";
static const char norm_border[] = "#8da691";

static const char sel_fg[] = "#f9f1ed";
static const char sel_bg[] = "#bbbb88";
static const char sel_border[] = "#f9f1ed";

static const char urg_fg[] = "#f9f1ed";
static const char urg_bg[] = "#8f423c";
static const char urg_border[] = "#8f423c";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
