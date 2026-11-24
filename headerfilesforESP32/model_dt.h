#ifndef MODEL_DT_H
#define MODEL_DT_H

void score_dt(float *input, float *output) {

    if (input[0] <= 29.99f) {
        output[0] = 0.0f;
        output[1] = 0.0f;
        output[2] = 0.0f;
        output[3] = 1.0f;
    } 
    else {
        if (input[0] <= 32.125f) {

            if (input[1] <= 57.655f) {

                if (input[0] <= 31.35f) {

                    if (input[2] <= 0.5f) {
                        output[0] = 0.9436f;
                        output[1] = 0.0564f;
                        output[2] = 0.0f;
                        output[3] = 0.0f;
                    } else {
                        output[0] = 0.0f;
                        output[1] = 1.0f;
                        output[2] = 0.0f;
                        output[3] = 0.0f;
                    }

                } else {

                    if (input[0] <= 31.445f) {
                        output[0] = 0.3f;
                        output[1] = 0.7f;
                        output[2] = 0.0f;
                        output[3] = 0.0f;
                    } else {
                        output[0] = 0.0f;
                        output[1] = 1.0f;
                        output[2] = 0.0f;
                        output[3] = 0.0f;
                    }
                }

            } else {

                if (input[1] <= 57.895f) {

                    if (input[0] <= 31.065f) {
                        output[0] = 0.6364f;
                        output[1] = 0.3636f;
                        output[2] = 0.0f;
                        output[3] = 0.0f;
                    } else {
                        output[0] = 0.0769f;
                        output[1] = 0.9231f;
                        output[2] = 0.0f;
                        output[3] = 0.0f;
                    }

                } else {

                    if (input[1] <= 58.065f) {
                        output[0] = 0.08f;
                        output[1] = 0.92f;
                        output[2] = 0.0f;
                        output[3] = 0.0f;
                    } else {
                        output[0] = 0.0f;
                        output[1] = 1.0f;
                        output[2] = 0.0f;
                        output[3] = 0.0f;
                    }
                }
            }

        } else {
            output[0] = 0.0f;
            output[1] = 0.0f;
            output[2] = 1.0f;
            output[3] = 0.0f;
        }
    }
}

#endif