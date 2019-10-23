const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#151515", /* black   */
  [1] = "#bc5653", /* red     */
  [2] = "#909d63", /* green   */
  [3] = "#ebc17a", /* yellow  */
  [4] = "#6a8799", /* blue    */
  [5] = "#b06698", /* magenta */
  [6] = "#c9dfff", /* cyan    */
  [7] = "#d9d9d9", /* white   */

  /* 8 bright colors */
  [8]  = "#636363",  /* black   */
  [9]  = "#bc5653",  /* red     */
  [10] = "#a0ac77", /* green   */
  [11] = "#ebc17a", /* yellow  */
  [12] = "#7eaac7", /* blue    */
  [13] = "#b06698", /* magenta */
  [14] = "#acbbd0", /* cyan    */
  [15] = "#f7f7f7", /* white   */

  /* special colors */
  [256] = "#353a44", /* background */
  [257] = "#d9d9d9", /* foreground */
  [258] = "#d9d9d9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
