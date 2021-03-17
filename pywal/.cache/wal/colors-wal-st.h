const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#151515", /* black   */
  [1] = "#a3291b", /* red     */
  [2] = "#7a961b", /* green   */
  [3] = "#cc880e", /* yellow  */
  [4] = "#485664", /* blue    */
  [5] = "#5f7a5f", /* magenta */
  [6] = "#7a88a3", /* cyan    */
  [7] = "#e6e3c6", /* white   */

  /* 8 bright colors */
  [8]  = "#3e3c3a",  /* black   */
  [9]  = "#ce3b2b",  /* red     */
  [10] = "#7a961b", /* green   */
  [11] = "#ffad19", /* yellow  */
  [12] = "#5d6d7d", /* blue    */
  [13] = "#7c9d7c", /* magenta */
  [14] = "#9baccd", /* cyan    */
  [15] = "#EEEEEC", /* white   */

  /* special colors */
  [256] = "#222222", /* background */
  [257] = "#e6e3c6", /* foreground */
  [258] = "#ce3b2b",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
