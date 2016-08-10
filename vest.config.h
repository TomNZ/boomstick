//////////////////////////
// LED HARDWARE SETTINGS

// LED strand data pin
#define LED_PIN     6

// Uncommend to enable second LED pin
//#define LED_PIN2    9

// Number of pixels in strand
#define N_PIXELS    23

// When enabled, uses N_PIXELS * 2 pixels on the data line, mirrored in the
// center
#define MIRROR_DUPE

// When enabled, reverses the ordering of the LED output
//#define FLIP

// "End" of the string - one past the end so the peak dot can move off scale
#define TOP         (N_PIXELS + 2)

// When defined, uses an analog signal to vary the overall brightness
//#define BRIGHTNESS_PIN A4

////////////////////////
// ANIMATION SETTINGS

// Which FFT index (0 - 7) to pull data from
#define FFT_SLOT    0

// Optional second slot to pull data from
#define FFT_SLOT2   1

// Amount of smoothing for historic volume value
#define HISTORIC_SMOOTH_FACTOR 500.0
#define HISTORIC_SCALE 1.5

// Amount of smoothing for current volume value
#define SMOOTH_FACTOR 2.0
#define BAR_SCALE   1.5
#define MIN_BAR_SIZE 80

// Color for the minimum intensity bar
#define MIN_COL     70
// Color for the maximum intensity bar
#define MAX_COL     160
// Derived color range between min/max
#define COL_RANGE   (MAX_COL - MIN_COL)
// Color difference between lower and upper parts of bar
#define COL_VAR     50

// Rate at which peak dot falls
#define PEAK_FALL_RATE 0.15

// Historic FFT frames to keep to determine high/low range
#define HISTORIC_FRAMES 40
#define NOISE_THRESHOLD 5
#define LEVEL_CUTOFF 30

#define BACKGROUND_CUTOFF (N_PIXELS / 3)
#define BACKGROUND_MAX 0.2
#define BACKGROUND_INCREASE 0.001
#define BACKGROUND_DECREASE 0.01

// Color wheel for background
#define BACKGROUND_COLOR 60