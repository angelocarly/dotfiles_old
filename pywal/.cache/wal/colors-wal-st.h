const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#101010", /* black   */
  [1] = "#e84f4f", /* red     */
  [2] = "#b8d68c", /* green   */
  [3] = "#e1aa5d", /* yellow  */
  [4] = "#7dc1cf", /* blue    */
  [5] = "#9b64fb", /* magenta */
  [6] = "#6d878d", /* cyan    */
  [7] = "#dddddd", /* white   */

  /* 8 bright colors */
  [8]  = "#404040",  /* black   */
  [9]  = "#e84f4f",  /* red     */
  [10] = "#b8d68c", /* green   */
  [11] = "#e1aa5d", /* yellow  */
  [12] = "#7dc1cf", /* blue    */
  [13] = "#9b64fb", /* magenta */
  [14] = "#6d878d", /* cyan    */
  [15] = "#dddddd", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#ffffff", /* foreground */
  [258] = "#d23d3d",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
