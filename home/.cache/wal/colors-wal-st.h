const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1a1a1a", /* black   */
  [1] = "#ab6d4e", /* red     */
  [2] = "#88885d", /* green   */
  [3] = "#c8a168", /* yellow  */
  [4] = "#45626e", /* blue    */
  [5] = "#7c5545", /* magenta */
  [6] = "#456e66", /* cyan    */
  [7] = "#c3b495", /* white   */

  /* 8 bright colors */
  [8]  = "#c3b495",  /* black   */
  [9]  = "#ab6d4e",  /* red     */
  [10] = "#88885d", /* green   */
  [11] = "#c8a168", /* yellow  */
  [12] = "#45626e", /* blue    */
  [13] = "#7c5545", /* magenta */
  [14] = "#456e66", /* cyan    */
  [15] = "#c3b495", /* white   */

  /* special colors */
  [256] = "#1a1a1a", /* background */
  [257] = "#c8a168", /* foreground */
  [258] = "#312e30",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
