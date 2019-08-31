const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1a1a1a", /* black   */
  [1] = "#ab4642", /* red     */
  [2] = "#a1b56c", /* green   */
  [3] = "#f7ca88", /* yellow  */
  [4] = "#7cafc2", /* blue    */
  [5] = "#ba8baf", /* magenta */
  [6] = "#86c1b9", /* cyan    */
  [7] = "#d8d8d8", /* white   */

  /* 8 bright colors */
  [8]  = "#585858",  /* black   */
  [9]  = "#ab4642",  /* red     */
  [10] = "#a1b56c", /* green   */
  [11] = "#f7ca88", /* yellow  */
  [12] = "#7cafc2", /* blue    */
  [13] = "#ba8baf", /* magenta */
  [14] = "#86c1b9", /* cyan    */
  [15] = "#f8f8f8", /* white   */

  /* special colors */
  [256] = "#1a1a1a", /* background */
  [257] = "#d8d8d8", /* foreground */
  [258] = "#d8d8d8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
