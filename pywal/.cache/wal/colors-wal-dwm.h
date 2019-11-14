static const char norm_fg[] = "#C0B18B";
static const char norm_bg[] = "#4A3637";
static const char norm_border[] = "#785f60";

static const char sel_fg[] = "#C0B18B";
static const char sel_bg[] = "#7B8748";
static const char sel_border[] = "#C0B18B";

static const char urg_fg[] = "#C0B18B";
static const char urg_bg[] = "#D17B49";
static const char urg_border[] = "#D17B49";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
