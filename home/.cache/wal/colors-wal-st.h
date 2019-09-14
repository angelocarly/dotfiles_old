const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#050E1B", /* black   */
  [1] = "#1A6768", /* red     */
  [2] = "#4E5646", /* green   */
  [3] = "#1D9374", /* yellow  */
  [4] = "#B19565", /* blue    */
  [5] = "#056C8A", /* magenta */
  [6] = "#557487", /* cyan    */
  [7] = "#7ec5c2", /* white   */

  /* 8 bright colors */
  [8]  = "#588987",  /* black   */
  [9]  = "#1A6768",  /* red     */
  [10] = "#4E5646", /* green   */
  [11] = "#1D9374", /* yellow  */
  [12] = "#B19565", /* blue    */
  [13] = "#056C8A", /* magenta */
  [14] = "#557487", /* cyan    */
  [15] = "#7ec5c2", /* white   */

  /* special colors */
  [256] = "#050E1B", /* background */
  [257] = "#7ec5c2", /* foreground */
  [258] = "#7ec5c2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
