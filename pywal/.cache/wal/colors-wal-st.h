const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#4A3637", /* black   */
  [1] = "#D17B49", /* red     */
  [2] = "#7B8748", /* green   */
  [3] = "#AF865A", /* yellow  */
  [4] = "#535C5C", /* blue    */
  [5] = "#775759", /* magenta */
  [6] = "#6D715E", /* cyan    */
  [7] = "#C0B18B", /* white   */

  /* 8 bright colors */
  [8]  = "#785f60",  /* black   */
  [9]  = "#D17B49",  /* red     */
  [10] = "#7B8748", /* green   */
  [11] = "#AF865A", /* yellow  */
  [12] = "#535C5C", /* blue    */
  [13] = "#775759", /* magenta */
  [14] = "#6D715E", /* cyan    */
  [15] = "#C0B18B", /* white   */

  /* special colors */
  [256] = "#1F1F1F", /* background */
  [257] = "#C0B18B", /* foreground */
  [258] = "#D17B49",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
