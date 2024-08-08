/* Generated by Edge Impulse
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _EI_CLASSIFIER_MODEL_METADATA_H_
#define _EI_CLASSIFIER_MODEL_METADATA_H_

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#define EI_CLASSIFIER_NONE                       255
#define EI_CLASSIFIER_UTENSOR                    1
#define EI_CLASSIFIER_TFLITE                     2
#define EI_CLASSIFIER_CUBEAI                     3
#define EI_CLASSIFIER_TFLITE_FULL                4
#define EI_CLASSIFIER_TENSAIFLOW                 5
#define EI_CLASSIFIER_TENSORRT                   6
#define EI_CLASSIFIER_DRPAI                      7
#define EI_CLASSIFIER_TFLITE_TIDL                8
#define EI_CLASSIFIER_AKIDA                      9
#define EI_CLASSIFIER_SYNTIANT                   10
#define EI_CLASSIFIER_ONNX_TIDL                  11
#define EI_CLASSIFIER_MEMRYX                     12

#define EI_CLASSIFIER_SENSOR_UNKNOWN             -1
#define EI_CLASSIFIER_SENSOR_MICROPHONE          1
#define EI_CLASSIFIER_SENSOR_ACCELEROMETER       2
#define EI_CLASSIFIER_SENSOR_CAMERA              3
#define EI_CLASSIFIER_SENSOR_9DOF                4
#define EI_CLASSIFIER_SENSOR_ENVIRONMENTAL       5
#define EI_CLASSIFIER_SENSOR_FUSION              6

#define EI_ANOMALY_TYPE_UNKNOWN                   0
#define EI_ANOMALY_TYPE_KMEANS                    1
#define EI_ANOMALY_TYPE_GMM                       2
#define EI_ANOMALY_TYPE_VISUAL_GMM                3

// These must match the enum values in TensorFlow Lite's "TfLiteType"
#define EI_CLASSIFIER_DATATYPE_FLOAT32           1
#define EI_CLASSIFIER_DATATYPE_UINT8             3
#define EI_CLASSIFIER_DATATYPE_INT8              9

#define EI_CLASSIFIER_PROJECT_ID                 382736
#define EI_CLASSIFIER_PROJECT_OWNER              "CallumOPrey"
#define EI_CLASSIFIER_PROJECT_NAME               "VoiceControlLight"
#define EI_CLASSIFIER_PROJECT_DEPLOY_VERSION     3
#define EI_CLASSIFIER_NN_INPUT_FRAME_SIZE        1131
#define EI_CLASSIFIER_RAW_SAMPLE_COUNT           28000
#define EI_CLASSIFIER_RAW_SAMPLES_PER_FRAME      1
#define EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE       (EI_CLASSIFIER_RAW_SAMPLE_COUNT * EI_CLASSIFIER_RAW_SAMPLES_PER_FRAME)
#define EI_CLASSIFIER_INPUT_WIDTH                0
#define EI_CLASSIFIER_INPUT_HEIGHT               0
#define EI_CLASSIFIER_INPUT_FRAMES               0
#define EI_CLASSIFIER_NN_OUTPUT_COUNT            10
#define EI_CLASSIFIER_INTERVAL_MS                0.0625
#define EI_CLASSIFIER_LABEL_COUNT                10
#define EI_CLASSIFIER_HAS_ANOMALY                EI_ANOMALY_TYPE_UNKNOWN
#define EI_CLASSIFIER_HAS_VISUAL_ANOMALY         0
#define EI_CLASSIFIER_SINGLE_FEATURE_INPUT       1
#define EI_CLASSIFIER_FREQUENCY                  16000
#define EI_CLASSIFIER_HAS_MODEL_VARIABLES        1
#define EI_CLASSIFIER_THRESHOLD                  0.6

#define EI_CLASSIFIER_OBJECT_DETECTION             0
#define EI_CLASSIFIER_TFLITE_OUTPUT_DATA_TENSOR    0
#define EI_CLASSIFIER_OBJECT_DETECTION_LAST_LAYER  EI_CLASSIFIER_LAST_LAYER_UNKNOWN

#define EI_CLASSIFIER_TFLITE_INPUT_DATATYPE         EI_CLASSIFIER_DATATYPE_INT8
#define EI_CLASSIFIER_TFLITE_OUTPUT_DATATYPE        EI_CLASSIFIER_DATATYPE_INT8


#define EI_CLASSIFIER_INFERENCING_ENGINE            EI_CLASSIFIER_TFLITE

#define EI_CLASSIFIER_QUANTIZATION_ENABLED          1

#define EI_CLASSIFIER_COMPILED                      0
#define EI_CLASSIFIER_HAS_TFLITE_OPS_RESOLVER       1

#define EI_CLASSIFIER_LOAD_IMAGE_SCALING         0


#define EI_CLASSIFIER_HAS_FFT_INFO               1
#define EI_CLASSIFIER_LOAD_FFT_32                1
#define EI_CLASSIFIER_LOAD_FFT_64                0
#define EI_CLASSIFIER_LOAD_FFT_128               0
#define EI_CLASSIFIER_LOAD_FFT_256               1
#define EI_CLASSIFIER_LOAD_FFT_512               0
#define EI_CLASSIFIER_LOAD_FFT_1024              0
#define EI_CLASSIFIER_LOAD_FFT_2048              0
#define EI_CLASSIFIER_LOAD_FFT_4096              0

#define EI_DSP_PARAMS_GENERATED 1


#define EI_CLASSIFIER_SENSOR                     EI_CLASSIFIER_SENSOR_MICROPHONE
#define EI_CLASSIFIER_FUSION_AXES_STRING         "audio"
#define EI_CLASSIFIER_CALIBRATION_ENABLED        0

#ifndef EI_CLASSIFIER_SLICES_PER_MODEL_WINDOW
#define EI_CLASSIFIER_SLICES_PER_MODEL_WINDOW    4
#endif // EI_CLASSIFIER_SLICES_PER_MODEL_WINDOW
#define EI_CLASSIFIER_SLICE_SIZE                 (EI_CLASSIFIER_RAW_SAMPLE_COUNT / EI_CLASSIFIER_SLICES_PER_MODEL_WINDOW)

#define EI_STUDIO_VERSION_MAJOR             1
#define EI_STUDIO_VERSION_MINOR             49
#define EI_STUDIO_VERSION_PATCH             15

#if ((EI_CLASSIFIER_INFERENCING_ENGINE == EI_CLASSIFIER_TFLITE) ||      (EI_CLASSIFIER_INFERENCING_ENGINE == EI_CLASSIFIER_DRPAI)) &&      EI_CLASSIFIER_USE_FULL_TFLITE == 1

#if EI_CLASSIFIER_INFERENCING_ENGINE == EI_CLASSIFIER_TFLITE
#undef EI_CLASSIFIER_INFERENCING_ENGINE
#define EI_CLASSIFIER_INFERENCING_ENGINE          EI_CLASSIFIER_TFLITE_FULL
#endif

#undef EI_CLASSIFIER_HAS_TFLITE_OPS_RESOLVER
#define EI_CLASSIFIER_HAS_TFLITE_OPS_RESOLVER     0

#if EI_CLASSIFIER_COMPILED == 1
#error "Cannot use full TensorFlow Lite with EON"
#endif
#endif // ((EI_CLASSIFIER_INFERENCING_ENGINE == EI_CLASSIFIER_TFLITE) || (EI_CLASSIFIER_INFERENCING_ENGINE == EI_CLASSIFIER_DRPAI)) && EI_CLASSIFIER_USE_FULL_TFLITE == 1

typedef struct {
    const char *name;
    int axis;
} ei_dsp_named_axis_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    float scale_axes;
    bool average;
    bool minimum;
    bool maximum;
    bool rms;
    bool stdev;
    bool skewness;
    bool kurtosis;
    int moving_avg_num_windows;
} ei_dsp_config_flatten_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    ei_dsp_named_axis_t * named_axes;
    size_t named_axes_size;
    const char * channels;
} ei_dsp_config_image_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    ei_dsp_named_axis_t * named_axes;
    size_t named_axes_size;
    int num_cepstral;
    float frame_length;
    float frame_stride;
    int num_filters;
    int fft_length;
    int win_size;
    int low_frequency;
    int high_frequency;
    float pre_cof;
    int pre_shift;
} ei_dsp_config_mfcc_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    ei_dsp_named_axis_t * named_axes;
    size_t named_axes_size;
    float frame_length;
    float frame_stride;
    int num_filters;
    int fft_length;
    int low_frequency;
    int high_frequency;
    int win_size;
    int noise_floor_db;
} ei_dsp_config_mfe_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    float scale_axes;
} ei_dsp_config_raw_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    float scale_axes;
    int input_decimation_ratio;
    const char * filter_type;
    float filter_cutoff;
    int filter_order;
    const char * analysis_type;
    int fft_length;
    int spectral_peaks_count;
    float spectral_peaks_threshold;
    const char * spectral_power_edges;
    bool do_log;
    bool do_fft_overlap;
    int wavelet_level;
    const char * wavelet;
    bool extra_low_freq;
} ei_dsp_config_spectral_analysis_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    ei_dsp_named_axis_t * named_axes;
    size_t named_axes_size;
    float frame_length;
    float frame_stride;
    int fft_length;
    int noise_floor_db;
    bool show_axes;
} ei_dsp_config_spectrogram_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    ei_dsp_named_axis_t * named_axes;
    size_t named_axes_size;
    float frame_length;
    float frame_stride;
    int num_filters;
    int fft_length;
    int low_frequency;
    int high_frequency;
    float pre_cof;
    const char * extractor;
} ei_dsp_config_audio_syntiant_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    bool scaling;
    bool scaling_raw;
    bool padding;
} ei_dsp_config_imu_syntiant_t;

#endif // _EI_CLASSIFIER_MODEL_METADATA_H_
