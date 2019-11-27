const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f0e0d", /* black   */
  [1] = "#845336", /* red     */
  [2] = "#57553c", /* green   */
  [3] = "#a17e3e", /* yellow  */
  [4] = "#43454f", /* blue    */
  [5] = "#604848", /* magenta */
  [6] = "#5c6652", /* cyan    */
  [7] = "#a18b62", /* white   */

  /* 8 bright colors */
  [8]  = "#383332",  /* black   */
  [9]  = "#8c4f4a",  /* red     */
  [10] = "#898471", /* green   */
  [11] = "#c8b491", /* yellow  */
  [12] = "#65788f", /* blue    */
  [13] = "#755e4a", /* magenta */
  [14] = "#718062", /* cyan    */
  [15] = "#bc9d66", /* white   */

  /* special colors */
  [256] = "#191716", /* background */
  [257] = "#daba8b", /* foreground */
  [258] = "#8c4f4a",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
