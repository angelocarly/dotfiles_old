const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#5a7260", /* black   */
  [1] = "#8f423c", /* red     */
  [2] = "#bbbb88", /* green   */
  [3] = "#f9d25b", /* yellow  */
  [4] = "#e0ba69", /* blue    */
  [5] = "#709289", /* magenta */
  [6] = "#d13516", /* cyan    */
  [7] = "#efe2e0", /* white   */

  /* 8 bright colors */
  [8]  = "#8da691",  /* black   */
  [9]  = "#eeaa88",  /* red     */
  [10] = "#ccc68d", /* green   */
  [11] = "#eedd99", /* yellow  */
  [12] = "#c9b957", /* blue    */
  [13] = "#ffcbab", /* magenta */
  [14] = "#c25431", /* cyan    */
  [15] = "#f9f1ed", /* white   */

  /* special colors */
  [256] = "#1e1e1e", /* background */
  [257] = "#ffffff", /* foreground */
  [258] = "#eeaa88",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
