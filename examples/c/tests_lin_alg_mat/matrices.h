double A[5][20] = {
  {-0.000000, 0.000000, 0.000000, -0.000000, -0.000000, -0.000000, -0.055098, 0.000000, -0.180628, 0.000000, -0.000000, 0.000000, 0.000000, -0.400582, 0.000000, 0.000000, -0.000000, -0.000000, -0.000000, -0.000000, },
  {0.256914, -0.000000, -0.000000, 0.000000, -0.000000, 0.000000, 0.423394, -0.000000, -0.000000, 0.000000, -0.375685, -0.000000, -0.000000, -0.000000, -0.000000, 0.000000, -0.755722, 1.173586, 0.000000, -1.792510, },
  {0.000000, -0.000000, 0.000000, 0.002036, 0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.147604, -0.000000, -0.000000, -0.000000, -0.000000, -0.000000, -0.000000, -0.000000, 1.029468, -0.000000, -0.000000, },
  {-0.000000, 0.000000, -0.308418, -0.478139, -0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.000000, -0.000000, -0.000000, -0.614377, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.000000, -0.000000, },
  {0.000000, -0.998710, 0.000000, -0.000000, -0.000000, -0.000000, -0.000000, 0.215000, 0.000000, 0.000000, -0.000000, 0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.000000, 0.000000, -0.995870, -2.111017, },
};

double AT[20][5] = {
  {-0.000000, 0.256914, 0.000000, -0.000000, 0.000000, },
  {0.000000, -0.000000, -0.000000, 0.000000, -0.998710, },
  {0.000000, -0.000000, 0.000000, -0.308418, 0.000000, },
  {-0.000000, 0.000000, 0.002036, -0.478139, -0.000000, },
  {-0.000000, -0.000000, 0.000000, -0.000000, -0.000000, },
  {-0.000000, 0.000000, 0.000000, 0.000000, -0.000000, },
  {-0.055098, 0.423394, -0.000000, -0.000000, -0.000000, },
  {0.000000, -0.000000, -0.000000, -0.000000, 0.215000, },
  {-0.180628, -0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.147604, 0.000000, 0.000000, },
  {-0.000000, -0.375685, -0.000000, -0.000000, -0.000000, },
  {0.000000, -0.000000, -0.000000, -0.000000, 0.000000, },
  {0.000000, -0.000000, -0.000000, -0.614377, 0.000000, },
  {-0.400582, -0.000000, -0.000000, 0.000000, -0.000000, },
  {0.000000, -0.000000, -0.000000, 0.000000, -0.000000, },
  {0.000000, 0.000000, -0.000000, 0.000000, 0.000000, },
  {-0.000000, -0.755722, -0.000000, 0.000000, 0.000000, },
  {-0.000000, 1.173586, 1.029468, 0.000000, 0.000000, },
  {-0.000000, 0.000000, -0.000000, -0.000000, -0.995870, },
  {-0.000000, -1.792510, -0.000000, -0.000000, -2.111017, },
};

double B[5][20] = {
  {-0.000000, 0.000000, -0.000000, -0.694970, -0.208454, -0.000000, 0.118887, 0.000000, -0.000000, 0.000000, -0.000000, 0.000000, 0.000000, -0.485892, 0.000000, 1.603194, -0.000000, -0.000000, -0.000000, -0.000000, },
  {-0.000000, 0.000000, 0.000000, -0.000000, -0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.000000, -0.000000, -0.000000, 0.000000, 0.000000, 0.000000, -0.000000, },
  {0.000000, -0.000000, -0.000000, -0.000000, -0.000000, -0.652422, -0.000000, 0.000000, 0.000000, -0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.000000, 1.344933, 0.000000, -0.000000, 0.000000, 0.000000, },
  {0.000000, -0.000000, 0.000000, -0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.000000, -1.065764, 0.000000, 0.000000, 0.000000, 0.000000, -0.000000, 0.000000, 0.000000, -0.000000, 0.000000, -0.000000, },
  {-0.000000, -0.000000, -0.000000, 0.835963, 0.000000, -0.000000, 0.000000, 0.000000, 0.000000, -0.134955, -0.000000, -0.000000, 0.000000, -0.000000, -0.292907, -0.000000, 0.000000, -1.795942, 0.000000, -0.000000, },
};

double P[20][20] = {
  {2.074796, 0.000000, -2.109743, 0.000000, 0.000000, 0.000000, 0.000000, 1.592942, 0.057362, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.213737, 0.000000, 0.000000, -0.244704, 0.315915, 0.000000, },
  {0.000000, 0.134133, 0.000000, 0.000000, 0.000000, 0.000000, -0.179489, 0.019265, 0.000000, 0.055069, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.365710, -0.266704, 0.000000, 0.000000, 0.000000, },
  {-2.109743, 0.000000, 4.745963, -0.146460, 0.000000, 0.425205, 0.021200, -2.493343, 0.000000, 0.000000, 0.000000, -0.164445, -0.106228, 0.104160, 0.318309, 0.000000, 0.000000, 0.364427, 0.000000, -1.341498, },
  {0.000000, 0.000000, -0.146460, 0.675921, 0.000000, 0.708555, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1.634828, 0.033000, 0.173570, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.416743, },
  {0.000000, 0.000000, 0.000000, 0.000000, 2.106617, -0.550423, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.404763, 0.000000, 0.000000, 0.000000, 1.367873, 0.000000, },
  {0.000000, 0.000000, 0.425205, 0.708555, -0.550423, 1.640412, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -2.252097, 0.000000, 0.275085, -0.306979, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, -0.179489, 0.021200, 0.000000, 0.000000, 0.000000, 2.910516, 0.415943, 1.302965, -0.289579, 0.000000, 0.721155, 0.000000, 0.000000, -1.857819, -1.923070, 0.989651, 0.000000, 0.000000, 0.749444, },
  {1.592942, 0.019265, -2.493343, 0.000000, 0.000000, 0.000000, 0.415943, 4.435231, 0.692099, 0.031081, -0.283750, 0.000000, 0.000000, 0.123082, -1.227159, 0.206410, -0.177739, -0.318802, 0.000000, 0.000000, },
  {0.057362, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.302965, 0.692099, 2.413202, 0.007045, 0.000000, 1.583514, 0.000000, -0.004862, -2.510483, -0.612304, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.055069, 0.000000, 0.000000, 0.000000, 0.000000, -0.289579, 0.031081, 0.007045, 0.337324, 0.000000, 0.000000, 0.000000, -0.102460, 0.000000, 0.590020, -0.430287, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.283750, 0.000000, 0.000000, 0.447451, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, -0.164445, -1.634828, 0.000000, -2.252097, 0.721155, 0.000000, 1.583514, 0.000000, 0.000000, 11.166202, -0.054766, -0.551682, -1.695318, -1.057953, -1.310522, 0.000000, 0.000000, 1.687676, },
  {0.000000, 0.000000, -0.106228, 0.033000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.054766, 2.985062, 1.741881, 0.000000, 0.000000, -1.947917, 0.000000, 0.000000, 0.106738, },
  {0.000000, 0.000000, 0.104160, 0.173570, 0.000000, 0.275085, 0.000000, 0.123082, -0.004862, -0.102460, 0.000000, -0.551682, 1.741881, 3.456084, 0.268055, 0.000000, -1.624986, -0.714520, 0.000000, 0.000000, },
  {-0.213737, 0.000000, 0.318309, 0.000000, 0.404763, -0.306979, -1.857819, -1.227159, -2.510483, 0.000000, 0.000000, -1.695318, 0.000000, 0.268055, 4.084140, 0.655536, 0.000000, 0.036920, 0.000000, 0.000000, },
  {0.000000, 0.365710, 0.000000, 0.000000, 0.000000, 0.000000, -1.923070, 0.206410, -0.612304, 0.590020, 0.000000, -1.057953, 0.000000, 0.000000, 0.655536, 4.427357, -2.857504, 0.000000, 0.000000, 0.000000, },
  {0.000000, -0.266704, 0.000000, 0.000000, 0.000000, 0.000000, 0.989651, -0.177739, 0.000000, -0.430287, 0.000000, -1.310522, -1.947917, -1.624986, 0.000000, -2.857504, 4.351591, 0.157959, 0.000000, -1.361929, },
  {-0.244704, 0.000000, 0.364427, 0.000000, 0.000000, 0.000000, 0.000000, -0.318802, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.714520, 0.036920, 0.000000, 0.157959, 0.395638, 0.000000, 0.000000, },
  {0.315915, 0.000000, 0.000000, 0.000000, 1.367873, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.766260, 0.000000, },
  {0.000000, 0.000000, -1.341498, 0.416743, 0.000000, 0.000000, 0.749444, 0.000000, 0.000000, 0.000000, 0.000000, 1.687676, 0.106738, 0.000000, 0.000000, 0.000000, -1.361929, 0.000000, 0.000000, 3.920555, },
};

double x[20] = {-0.890337, 0.877465, -0.523046, 0.784681, 0.342207, 0.585308, -0.253843, -0.278143, -0.814190, -0.539411, 1.676442, 1.633872, -0.148072, -1.068380, -1.318878, -1.148573, -0.671691, -0.759928, -0.291091, 0.067418, };

double y[5] = {-0.400320, 0.283924, -0.351350, -1.031890, -0.569443, };

double Ax[5] = {0.589025, -1.471106, -0.860343, -0.122897, -0.788564, };

double ATy[20] = {0.072944, 0.568708, 0.318253, 0.492671, 0.000000, 0.000000, 0.142269, -0.122430, 0.072309, -0.051861, -0.106666, 0.000000, 0.633969, 0.160361, 0.000000, 0.000000, -0.214567, -0.028495, 0.567091, 0.693167, };

double AE[5][20] = {
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.013986, 0.000000, 0.147065, 0.000000, 0.000000, 0.000000, 0.000000, 0.427973, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {-0.228740, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.107476, 0.000000, 0.000000, 0.000000, -0.629815, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.507612, -0.891840, 0.000000, -0.120847, },
  {0.000000, 0.000000, 0.000000, 0.001597, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.079619, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.782321, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.161317, -0.375186, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.090972, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, -0.876332, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.059801, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.289889, -0.142320, },
};

double FA[5][20] = {
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.022057, 0.000000, 0.072309, 0.000000, 0.000000, 0.000000, 0.000000, 0.160361, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.072944, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.120212, 0.000000, 0.000000, 0.000000, -0.106666, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.214567, 0.333209, 0.000000, -0.508936, },
  {0.000000, 0.000000, 0.000000, -0.000715, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.051861, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.361704, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.318253, 0.493386, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.633969, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.568708, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.122430, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.567091, 1.202103, },
};

double AvcatB[10][20] = {
  {-0.000000, 0.000000, 0.000000, -0.000000, -0.000000, -0.000000, -0.055098, 0.000000, -0.180628, 0.000000, -0.000000, 0.000000, 0.000000, -0.400582, 0.000000, 0.000000, -0.000000, -0.000000, -0.000000, -0.000000, },
  {0.256914, -0.000000, -0.000000, 0.000000, -0.000000, 0.000000, 0.423394, -0.000000, -0.000000, 0.000000, -0.375685, -0.000000, -0.000000, -0.000000, -0.000000, 0.000000, -0.755722, 1.173586, 0.000000, -1.792510, },
  {0.000000, -0.000000, 0.000000, 0.002036, 0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.147604, -0.000000, -0.000000, -0.000000, -0.000000, -0.000000, -0.000000, -0.000000, 1.029468, -0.000000, -0.000000, },
  {-0.000000, 0.000000, -0.308418, -0.478139, -0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.000000, -0.000000, -0.000000, -0.614377, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.000000, -0.000000, },
  {0.000000, -0.998710, 0.000000, -0.000000, -0.000000, -0.000000, -0.000000, 0.215000, 0.000000, 0.000000, -0.000000, 0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.000000, 0.000000, -0.995870, -2.111017, },
  {-0.000000, 0.000000, -0.000000, -0.694970, -0.208454, -0.000000, 0.118887, 0.000000, -0.000000, 0.000000, -0.000000, 0.000000, 0.000000, -0.485892, 0.000000, 1.603194, -0.000000, -0.000000, -0.000000, -0.000000, },
  {-0.000000, 0.000000, 0.000000, -0.000000, -0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.000000, -0.000000, -0.000000, 0.000000, 0.000000, 0.000000, -0.000000, },
  {0.000000, -0.000000, -0.000000, -0.000000, -0.000000, -0.652422, -0.000000, 0.000000, 0.000000, -0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.000000, 1.344933, 0.000000, -0.000000, 0.000000, 0.000000, },
  {0.000000, -0.000000, 0.000000, -0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.000000, -1.065764, 0.000000, 0.000000, 0.000000, 0.000000, -0.000000, 0.000000, 0.000000, -0.000000, 0.000000, -0.000000, },
  {-0.000000, -0.000000, -0.000000, 0.835963, 0.000000, -0.000000, 0.000000, 0.000000, 0.000000, -0.134955, -0.000000, -0.000000, 0.000000, -0.000000, -0.292907, -0.000000, 0.000000, -1.795942, 0.000000, -0.000000, },
};

double AhcatB[5][40] = {
  {-0.000000, 0.000000, 0.000000, -0.000000, -0.000000, -0.000000, -0.055098, 0.000000, -0.180628, 0.000000, -0.000000, 0.000000, 0.000000, -0.400582, 0.000000, 0.000000, -0.000000, -0.000000, -0.000000, -0.000000, -0.000000, 0.000000, -0.000000, -0.694970, -0.208454, -0.000000, 0.118887, 0.000000, -0.000000, 0.000000, -0.000000, 0.000000, 0.000000, -0.485892, 0.000000, 1.603194, -0.000000, -0.000000, -0.000000, -0.000000, },
  {0.256914, -0.000000, -0.000000, 0.000000, -0.000000, 0.000000, 0.423394, -0.000000, -0.000000, 0.000000, -0.375685, -0.000000, -0.000000, -0.000000, -0.000000, 0.000000, -0.755722, 1.173586, 0.000000, -1.792510, -0.000000, 0.000000, 0.000000, -0.000000, -0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.000000, -0.000000, -0.000000, 0.000000, 0.000000, 0.000000, -0.000000, },
  {0.000000, -0.000000, 0.000000, 0.002036, 0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.147604, -0.000000, -0.000000, -0.000000, -0.000000, -0.000000, -0.000000, -0.000000, 1.029468, -0.000000, -0.000000, 0.000000, -0.000000, -0.000000, -0.000000, -0.000000, -0.652422, -0.000000, 0.000000, 0.000000, -0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.000000, 1.344933, 0.000000, -0.000000, 0.000000, 0.000000, },
  {-0.000000, 0.000000, -0.308418, -0.478139, -0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.000000, -0.000000, -0.000000, -0.614377, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.000000, -0.000000, 0.000000, -0.000000, 0.000000, -0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.000000, -1.065764, 0.000000, 0.000000, 0.000000, 0.000000, -0.000000, 0.000000, 0.000000, -0.000000, 0.000000, -0.000000, },
  {0.000000, -0.998710, 0.000000, -0.000000, -0.000000, -0.000000, -0.000000, 0.215000, 0.000000, 0.000000, -0.000000, 0.000000, 0.000000, -0.000000, -0.000000, 0.000000, 0.000000, 0.000000, -0.995870, -2.111017, -0.000000, -0.000000, -0.000000, 0.835963, 0.000000, -0.000000, 0.000000, 0.000000, 0.000000, -0.134955, -0.000000, -0.000000, 0.000000, -0.000000, -0.292907, -0.000000, 0.000000, -1.795942, 0.000000, -0.000000, },
};

double Prho[20][20] = {
  {7.074796, 0.000000, -2.109743, 0.000000, 0.000000, 0.000000, 0.000000, 1.592942, 0.057362, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.213737, 0.000000, 0.000000, -0.244704, 0.315915, 0.000000, },
  {0.000000, 5.134133, 0.000000, 0.000000, 0.000000, 0.000000, -0.179489, 0.019265, 0.000000, 0.055069, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.365710, -0.266704, 0.000000, 0.000000, 0.000000, },
  {-2.109743, 0.000000, 9.745963, -0.146460, 0.000000, 0.425205, 0.021200, -2.493343, 0.000000, 0.000000, 0.000000, -0.164445, -0.106228, 0.104160, 0.318309, 0.000000, 0.000000, 0.364427, 0.000000, -1.341498, },
  {0.000000, 0.000000, -0.146460, 5.675921, 0.000000, 0.708555, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1.634828, 0.033000, 0.173570, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.416743, },
  {0.000000, 0.000000, 0.000000, 0.000000, 7.106617, -0.550423, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.404763, 0.000000, 0.000000, 0.000000, 1.367873, 0.000000, },
  {0.000000, 0.000000, 0.425205, 0.708555, -0.550423, 6.640412, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -2.252097, 0.000000, 0.275085, -0.306979, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, -0.179489, 0.021200, 0.000000, 0.000000, 0.000000, 7.910516, 0.415943, 1.302965, -0.289579, 0.000000, 0.721155, 0.000000, 0.000000, -1.857819, -1.923070, 0.989651, 0.000000, 0.000000, 0.749444, },
  {1.592942, 0.019265, -2.493343, 0.000000, 0.000000, 0.000000, 0.415943, 9.435231, 0.692099, 0.031081, -0.283750, 0.000000, 0.000000, 0.123082, -1.227159, 0.206410, -0.177739, -0.318802, 0.000000, 0.000000, },
  {0.057362, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.302965, 0.692099, 7.413202, 0.007045, 0.000000, 1.583514, 0.000000, -0.004862, -2.510483, -0.612304, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.055069, 0.000000, 0.000000, 0.000000, 0.000000, -0.289579, 0.031081, 0.007045, 5.337324, 0.000000, 0.000000, 0.000000, -0.102460, 0.000000, 0.590020, -0.430287, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.283750, 0.000000, 0.000000, 5.447451, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, -0.164445, -1.634828, 0.000000, -2.252097, 0.721155, 0.000000, 1.583514, 0.000000, 0.000000, 16.166202, -0.054766, -0.551682, -1.695318, -1.057953, -1.310522, 0.000000, 0.000000, 1.687676, },
  {0.000000, 0.000000, -0.106228, 0.033000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.054766, 7.985062, 1.741881, 0.000000, 0.000000, -1.947917, 0.000000, 0.000000, 0.106738, },
  {0.000000, 0.000000, 0.104160, 0.173570, 0.000000, 0.275085, 0.000000, 0.123082, -0.004862, -0.102460, 0.000000, -0.551682, 1.741881, 8.456084, 0.268055, 0.000000, -1.624986, -0.714520, 0.000000, 0.000000, },
  {-0.213737, 0.000000, 0.318309, 0.000000, 0.404763, -0.306979, -1.857819, -1.227159, -2.510483, 0.000000, 0.000000, -1.695318, 0.000000, 0.268055, 9.084140, 0.655536, 0.000000, 0.036920, 0.000000, 0.000000, },
  {0.000000, 0.365710, 0.000000, 0.000000, 0.000000, 0.000000, -1.923070, 0.206410, -0.612304, 0.590020, 0.000000, -1.057953, 0.000000, 0.000000, 0.655536, 9.427357, -2.857504, 0.000000, 0.000000, 0.000000, },
  {0.000000, -0.266704, 0.000000, 0.000000, 0.000000, 0.000000, 0.989651, -0.177739, 0.000000, -0.430287, 0.000000, -1.310522, -1.947917, -1.624986, 0.000000, -2.857504, 9.351591, 0.157959, 0.000000, -1.361929, },
  {-0.244704, 0.000000, 0.364427, 0.000000, 0.000000, 0.000000, 0.000000, -0.318802, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.714520, 0.036920, 0.000000, 0.157959, 5.395638, 0.000000, 0.000000, },
  {0.315915, 0.000000, 0.000000, 0.000000, 1.367873, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 6.766260, 0.000000, },
  {0.000000, 0.000000, -1.341498, 0.416743, 0.000000, 0.000000, 0.749444, 0.000000, 0.000000, 0.000000, 0.000000, 1.687676, 0.106738, 0.000000, 0.000000, 0.000000, -1.361929, 0.000000, 0.000000, 8.920555, },
};

double Pinvx[20] = {-2.634080, 9.020380, -1.085739, 5.220525, -0.332876, -0.649677, 0.951052, 0.239329, -2.146940, -3.523674, 3.898417, 0.348604, -0.853648, -3.815263, -0.211964, -3.323846, -4.661478, -7.366484, 0.564123, -2.837172, };

double PrhoI[20][20] = {
  {7.074796, 0.000000, -2.109743, 0.000000, 0.000000, 0.000000, 0.000000, 1.592942, 0.057362, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.213737, 0.000000, 0.000000, -0.244704, 0.315915, 0.000000, },
  {0.000000, 5.134133, 0.000000, 0.000000, 0.000000, 0.000000, -0.179489, 0.019265, 0.000000, 0.055069, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.365710, -0.266704, 0.000000, 0.000000, 0.000000, },
  {-2.109743, 0.000000, 9.745963, -0.146460, 0.000000, 0.425205, 0.021200, -2.493343, 0.000000, 0.000000, 0.000000, -0.164445, -0.106228, 0.104160, 0.318309, 0.000000, 0.000000, 0.364427, 0.000000, -1.341498, },
  {0.000000, 0.000000, -0.146460, 5.675921, 0.000000, 0.708555, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1.634828, 0.033000, 0.173570, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.416743, },
  {0.000000, 0.000000, 0.000000, 0.000000, 7.106617, -0.550423, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.404763, 0.000000, 0.000000, 0.000000, 1.367873, 0.000000, },
  {0.000000, 0.000000, 0.425205, 0.708555, -0.550423, 6.640412, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -2.252097, 0.000000, 0.275085, -0.306979, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, -0.179489, 0.021200, 0.000000, 0.000000, 0.000000, 7.910516, 0.415943, 1.302965, -0.289579, 0.000000, 0.721155, 0.000000, 0.000000, -1.857819, -1.923070, 0.989651, 0.000000, 0.000000, 0.749444, },
  {1.592942, 0.019265, -2.493343, 0.000000, 0.000000, 0.000000, 0.415943, 9.435231, 0.692099, 0.031081, -0.283750, 0.000000, 0.000000, 0.123082, -1.227159, 0.206410, -0.177739, -0.318802, 0.000000, 0.000000, },
  {0.057362, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.302965, 0.692099, 7.413202, 0.007045, 0.000000, 1.583514, 0.000000, -0.004862, -2.510483, -0.612304, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.055069, 0.000000, 0.000000, 0.000000, 0.000000, -0.289579, 0.031081, 0.007045, 5.337324, 0.000000, 0.000000, 0.000000, -0.102460, 0.000000, 0.590020, -0.430287, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.283750, 0.000000, 0.000000, 5.447451, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, -0.164445, -1.634828, 0.000000, -2.252097, 0.721155, 0.000000, 1.583514, 0.000000, 0.000000, 16.166202, -0.054766, -0.551682, -1.695318, -1.057953, -1.310522, 0.000000, 0.000000, 1.687676, },
  {0.000000, 0.000000, -0.106228, 0.033000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.054766, 7.985062, 1.741881, 0.000000, 0.000000, -1.947917, 0.000000, 0.000000, 0.106738, },
  {0.000000, 0.000000, 0.104160, 0.173570, 0.000000, 0.275085, 0.000000, 0.123082, -0.004862, -0.102460, 0.000000, -0.551682, 1.741881, 8.456084, 0.268055, 0.000000, -1.624986, -0.714520, 0.000000, 0.000000, },
  {-0.213737, 0.000000, 0.318309, 0.000000, 0.404763, -0.306979, -1.857819, -1.227159, -2.510483, 0.000000, 0.000000, -1.695318, 0.000000, 0.268055, 9.084140, 0.655536, 0.000000, 0.036920, 0.000000, 0.000000, },
  {0.000000, 0.365710, 0.000000, 0.000000, 0.000000, 0.000000, -1.923070, 0.206410, -0.612304, 0.590020, 0.000000, -1.057953, 0.000000, 0.000000, 0.655536, 9.427357, -2.857504, 0.000000, 0.000000, 0.000000, },
  {0.000000, -0.266704, 0.000000, 0.000000, 0.000000, 0.000000, 0.989651, -0.177739, 0.000000, -0.430287, 0.000000, -1.310522, -1.947917, -1.624986, 0.000000, -2.857504, 9.351591, 0.157959, 0.000000, -1.361929, },
  {-0.244704, 0.000000, 0.364427, 0.000000, 0.000000, 0.000000, 0.000000, -0.318802, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -0.714520, 0.036920, 0.000000, 0.157959, 5.395638, 0.000000, 0.000000, },
  {0.315915, 0.000000, 0.000000, 0.000000, 1.367873, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 6.766260, 0.000000, },
  {0.000000, 0.000000, -1.341498, 0.416743, 0.000000, 0.000000, 0.749444, 0.000000, 0.000000, 0.000000, 0.000000, 1.687676, 0.106738, 0.000000, 0.000000, 0.000000, -1.361929, 0.000000, 0.000000, 8.920555, },
};

double rhoI[20][20] = {
  {5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, 0.000000, },
  {0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 5.000000, },
};

int m = 5;
int n = 20;
double rho = 5.000000;
