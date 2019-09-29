const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#5f8787", /* red     */
  [2] = "#dd9999", /* green   */
  [3] = "#a06666", /* yellow  */
  [4] = "#888888", /* blue    */
  [5] = "#999999", /* magenta */
  [6] = "#aaaaaa", /* cyan    */
  [7] = "#c1c1c1", /* white   */

  /* 8 bright colors */
  [8]  = "#333333",  /* black   */
  [9]  = "#5f8787",  /* red     */
  [10] = "#dd9999", /* green   */
  [11] = "#a06666", /* yellow  */
  [12] = "#888888", /* blue    */
  [13] = "#999999", /* magenta */
  [14] = "#aaaaaa", /* cyan    */
  [15] = "#c1c1c1", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#c1c1c1", /* foreground */
  [258] = "#c1c1c1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
