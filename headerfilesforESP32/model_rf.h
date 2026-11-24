#include <string.h>
void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void score(double * input, double * output) {
    double var0[4];
    double var1[4];
    double var2[4];
    double var3[4];
    double var4[4];
    double var5[4];
    double var6[4];
    double var7[4];
    double var8[4];
    double var9[4];
    double var10[4];
    if (input[0] <= 30.0) {
        memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    } else {
        if (input[1] <= 60.18000030517578) {
            if (input[2] <= 0.5) {
                if (input[1] <= 57.52499961853027) {
                    if (input[0] <= 31.369999885559082) {
                        memcpy(var10, (double[]){0.9786096256684492, 0.0213903743315508, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var10, (double[]){0.06521739130434782, 0.9347826086956522, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 31.0649995803833) {
                        memcpy(var10, (double[]){0.39473684210526316, 0.6052631578947368, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var10, (double[]){0.041666666666666664, 0.9583333333333334, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            }
        } else {
            if (input[0] <= 32.125) {
                memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        }
    }
    double var11[4];
    if (input[2] <= 0.5) {
        if (input[0] <= 32.14999961853027) {
            if (input[0] <= 29.99000072479248) {
                memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[1] <= 57.65500068664551) {
                    if (input[0] <= 31.449999809265137) {
                        memcpy(var11, (double[]){0.9212962962962963, 0.0787037037037037, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 30.994999885559082) {
                        memcpy(var11, (double[]){0.17647058823529413, 0.8235294117647058, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var11, (double[]){0.016666666666666666, 0.9833333333333333, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    } else {
        if (input[0] <= 30.110000610351562) {
            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        } else {
            if (input[1] <= 71.18500137329102) {
                memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        }
    }
    add_vectors(var10, var11, 4, var9);
    double var12[4];
    if (input[1] <= 60.064998626708984) {
        if (input[1] <= 57.625) {
            if (input[1] <= 56.78499984741211) {
                if (input[0] <= 31.190000534057617) {
                    if (input[2] <= 0.5) {
                        memcpy(var12, (double[]){0.8571428571428571, 0.14285714285714285, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                if (input[2] <= 0.5) {
                    if (input[1] <= 57.52499961853027) {
                        memcpy(var12, (double[]){0.7875647668393783, 0.13471502590673576, 0.0, 0.07772020725388601}, 4 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.43478260869565216, 0.2608695652173913, 0.0, 0.30434782608695654}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 30.389999389648438) {
                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 58.385000228881836) {
                if (input[2] <= 0.5) {
                    if (input[0] <= 29.880000114440918) {
                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.25, 0.75, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 57.97500038146973) {
                        memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.0, 0.5833333333333334, 0.0, 0.4166666666666667}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 29.989999771118164) {
                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[1] <= 69.47500228881836) {
            if (input[1] <= 66.50500106811523) {
                if (input[2] <= 0.5) {
                    if (input[0] <= 31.324999809265137) {
                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[1] <= 68.76499938964844) {
                    if (input[0] <= 31.74000072479248) {
                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        } else {
            memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var9, var12, 4, var8);
    double var13[4];
    if (input[2] <= 0.5) {
        if (input[1] <= 60.89000129699707) {
            if (input[0] <= 29.984999656677246) {
                memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[0] <= 31.414999961853027) {
                    if (input[1] <= 57.82500076293945) {
                        memcpy(var13, (double[]){0.9251101321585903, 0.07488986784140969, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.017857142857142856, 0.9821428571428571, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 31.445000648498535) {
                        memcpy(var13, (double[]){0.3, 0.7, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 69.29500198364258) {
                if (input[0] <= 31.260001182556152) {
                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        }
    } else {
        if (input[1] <= 60.579999923706055) {
            if (input[0] <= 30.110000610351562) {
                memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            }
        } else {
            if (input[1] <= 75.625) {
                memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        }
    }
    add_vectors(var8, var13, 4, var7);
    double var14[4];
    if (input[2] <= 0.5) {
        if (input[1] <= 60.19999885559082) {
            if (input[0] <= 30.0) {
                memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[0] <= 31.36500072479248) {
                    if (input[0] <= 31.144999504089355) {
                        memcpy(var14, (double[]){0.7584541062801933, 0.24154589371980675, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.49056603773584906, 0.5094339622641509, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 31.414999961853027) {
                        memcpy(var14, (double[]){0.16666666666666666, 0.8333333333333334, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 69.47500228881836) {
                if (input[1] <= 67.68999862670898) {
                    if (input[0] <= 31.180001258850098) {
                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 68.39999771118164) {
                        memcpy(var14, (double[]){0.0, 0.0, 0.06666666666666667, 0.9333333333333333}, 4 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.0, 0.0, 0.3333333333333333, 0.6666666666666666}, 4 * sizeof(double));
                    }
                }
            } else {
                memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        }
    } else {
        if (input[0] <= 30.079999923706055) {
            memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        } else {
            if (input[0] <= 32.125) {
                memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        }
    }
    add_vectors(var7, var14, 4, var6);
    double var15[4];
    if (input[1] <= 59.96999931335449) {
        if (input[1] <= 57.58500099182129) {
            if (input[1] <= 57.52499961853027) {
                if (input[1] <= 56.65999984741211) {
                    if (input[1] <= 56.52499961853027) {
                        memcpy(var15, (double[]){0.5555555555555556, 0.4444444444444444, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.125, 0.875, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 0.5) {
                        memcpy(var15, (double[]){0.7887323943661971, 0.15023474178403756, 0.0, 0.06103286384976526}, 4 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.0, 0.1, 0.0, 0.9}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 57.56500053405762) {
                    if (input[0] <= 29.980000495910645) {
                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.3333333333333333, 0.6666666666666666, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 0.5) {
                        memcpy(var15, (double[]){0.8, 0.0, 0.0, 0.2}, 4 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 57.65500068664551) {
                if (input[0] <= 29.835000038146973) {
                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[0] <= 30.984999656677246) {
                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.2, 0.8, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 29.975000381469727) {
                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[0] <= 31.0649995803833) {
                        memcpy(var15, (double[]){0.075, 0.925, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.0078125, 0.9921875, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[1] <= 69.59500122070312) {
            if (input[2] <= 0.5) {
                if (input[0] <= 30.994999885559082) {
                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                if (input[1] <= 60.88999938964844) {
                    memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        } else {
            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var6, var15, 4, var5);
    double var16[4];
    if (input[1] <= 60.170000076293945) {
        if (input[2] <= 0.5) {
            if (input[1] <= 57.6200008392334) {
                if (input[0] <= 31.350000381469727) {
                    if (input[1] <= 57.375) {
                        memcpy(var16, (double[]){0.930635838150289, 0.017341040462427744, 0.0, 0.05202312138728324}, 4 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.6046511627906976, 0.06976744186046512, 0.0, 0.32558139534883723}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 56.81500053405762) {
                        memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.17391304347826086, 0.8260869565217391, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 29.980000495910645) {
                    memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[0] <= 31.0649995803833) {
                        memcpy(var16, (double[]){0.2857142857142857, 0.7142857142857143, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.09090909090909091, 0.9090909090909091, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 30.079999923706055) {
                memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            }
        }
    } else {
        if (input[0] <= 31.77500057220459) {
            if (input[1] <= 60.40999984741211) {
                if (input[0] <= 29.825000762939453) {
                    memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        } else {
            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var5, var16, 4, var4);
    double var17[4];
    if (input[0] <= 29.99000072479248) {
        memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    } else {
        if (input[1] <= 60.18000030517578) {
            if (input[2] <= 0.5) {
                if (input[1] <= 57.65500068664551) {
                    if (input[0] <= 31.36500072479248) {
                        memcpy(var17, (double[]){0.9487179487179487, 0.05128205128205128, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){0.020833333333333332, 0.9791666666666666, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 31.054999351501465) {
                        memcpy(var17, (double[]){0.17857142857142858, 0.8214285714285714, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){0.04477611940298507, 0.9552238805970149, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            }
        } else {
            if (input[1] <= 60.72999954223633) {
                if (input[0] <= 34.045000076293945) {
                    memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        }
    }
    add_vectors(var4, var17, 4, var3);
    double var18[4];
    if (input[2] <= 0.5) {
        if (input[1] <= 60.23499870300293) {
            if (input[0] <= 29.825000762939453) {
                memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[0] <= 31.36500072479248) {
                    if (input[1] <= 57.78999900817871) {
                        memcpy(var18, (double[]){0.9553571428571429, 0.044642857142857144, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.07317073170731707, 0.926829268292683, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 57.18499946594238) {
                        memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.06896551724137931, 0.9310344827586207, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 69.47000122070312) {
                if (input[0] <= 30.994999885559082) {
                    memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        }
    } else {
        if (input[1] <= 60.69000053405762) {
            if (input[0] <= 29.924999237060547) {
                memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            }
        } else {
            if (input[0] <= 30.369999885559082) {
                memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        }
    }
    add_vectors(var3, var18, 4, var2);
    double var19[4];
    if (input[0] <= 32.170000076293945) {
        if (input[1] <= 57.82500076293945) {
            if (input[0] <= 31.36500072479248) {
                if (input[0] <= 29.839999198913574) {
                    memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[2] <= 0.5) {
                        memcpy(var19, (double[]){0.9023255813953488, 0.09767441860465116, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 31.445000648498535) {
                    if (input[0] <= 31.4350004196167) {
                        memcpy(var19, (double[]){0.2, 0.8, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= 29.99000072479248) {
                memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[0] <= 31.324999809265137) {
                    if (input[2] <= 0.5) {
                        memcpy(var19, (double[]){0.04081632653061224, 0.9591836734693877, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
    }
    add_vectors(var2, var19, 4, var1);
    mul_vector_number(var1, 0.1, 4, var0);
    memcpy(output, var0, 4 * sizeof(double));
}
