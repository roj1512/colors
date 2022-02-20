#include <string>

struct Code
{
    std::string open;
    std::string close;
};

struct Rgb
{
    unsigned int r;
    unsigned int g;
    unsigned int b;
};

bool colors_enabled = true;

/**
 * Builds color code
 */
Code code(std::string open, std::string close)
{
    Code toReturn;

    toReturn.open = "\x1b[" + open + "m";
    toReturn.close = "\x1b[" + close + 'm';

    return toReturn;
}

/**
 * Applies color and background based on color code and its associated text
 * @param str text to apply color settings to
 * @param code color code to apply
 */
std::string run(std::string str, Code code)
{
    return colors_enabled ? code.open + str + code.close : str;
}

/**
 * Reset the text modified
 * @param str text to reset
 */
std::string reset(std::string str)
{
    return run(str, code("0", "0"));
}

/**
 * Make the text bold.
 * @param str text to make bold
 */
std::string bold(std::string str)
{
    return run(str, code("1", "22"));
}

/**
 * The text emits only a small amount of light.
 * @param str text to dim
 */
std::string dim(std::string str)
{
    return run(str, code("2", "22"));
}

/**
 * Make the text italic.
 * @param str text to make italic
 */
std::string italic(std::string str)
{
    return run(str, code("3", "23"));
}

/**
 * Make the text underline.
 * @param str text to underline
 */
std::string underline(std::string str)
{
    return run(str, code("4", "24"));
}

/**
 * Invert background color and text color.
 * @param str text to invert its color
 */
std::string inverse(std::string str)
{
    return run(str, code("7", "27"));
}

/**
 * Make the text hidden.
 * @param str text to hide
 */
std::string hidden(std::string str)
{
    return run(str, code("8", "28"));
}

/**
 * Put horizontal line through the center of the text.
 * @param str text to strike through
 */
std::string strikethrough(std::string str)
{
    return run(str, code("9", "29"));
}

/**
 * Set text color to black.
 * @param str text to make black
 */
std::string black(std::string str)
{
    return run(str, code("30", "39"));
}

/**
 * Set text color to red.
 * @param str text to make red
 */
std::string red(std::string str)
{
    return run(str, code("31", "39"));
}

/**
 * Set text color to green.
 * @param str text to make green
 */
std::string green(std::string str)
{
    return run(str, code("32", "39"));
}

/**
 * Set text color to yellow.
 * @param str text to make yellow
 */
std::string yellow(std::string str)
{
    return run(str, code("33", "39"));
}

/**
 * Set text color to blue.
 * @param str text to make blue
 */
std::string blue(std::string str)
{
    return run(str, code("34", "39"));
}

/**
 * Set text color to magenta.
 * @param str text to make magenta
 */
std::string magenta(std::string str)
{
    return run(str, code("35", "39"));
}

/**
 * Set text color to cyan.
 * @param str text to make cyan
 */
std::string cyan(std::string str)
{
    return run(str, code("36", "39"));
}

/**
 * Set text color to white.
 * @param str text to make white
 */
std::string white(std::string str)
{
    return run(str, code("37", "39"));
}

/**
 * Set text color to bright black.
 * @param str text to make bright-black
 */
std::string brightBlack(std::string str)
{
    return run(str, code("90", "39"));
}

/**
 * Set text color to gray.
 * @param str text to make gray
 */
std::string gray(std::string str)
{
    return brightBlack(str);
}

/**
 * Set text color to bright red.
 * @param str text to make bright-red
 */
std::string bright_red(std::string str)
{
    return run(str, code("91", "39"));
}

/**
 * Set text color to bright green.
 * @param str text to make bright-green
 */
std::string bright_green(std::string str)
{
    return run(str, code("92", "39"));
}

/**
 * Set text color to bright yellow.
 * @param str text to make bright-yellow
 */
std::string bright_yellow(std::string str)
{
    return run(str, code("93", "39"));
}

/**
 * Set text color to bright blue.
 * @param str text to make bright-blue
 */
std::string bright_blue(std::string str)
{
    return run(str, code("94", "39"));
}

/**
 * Set text color to bright magenta.
 * @param str text to make bright-magenta
 */
std::string bright_magenta(std::string str)
{
    return run(str, code("95", "39"));
}

/**
 * Set text color to bright cyan.
 * @param str text to make bright-cyan
 */
std::string bright_cyan(std::string str)
{
    return run(str, code("96", "39"));
}

/**
 * Set text color to bright white.
 * @param str text to make bright-white
 */
std::string bright_white(std::string str)
{
    return run(str, code("97", "39"));
}

/**
 * Set background color to black.
 * @param str text to make its background black
 */
std::string bg_black(std::string str)
{
    return run(str, code("40", "49"));
}

/**
 * Set background color to red.
 * @param str text to make its background red
 */
std::string bg_red(std::string str)
{
    return run(str, code("41", "49"));
}

/**
 * Set background color to green.
 * @param str text to make its background green
 */
std::string bg_green(std::string str)
{
    return run(str, code("42", "49"));
}

/**
 * Set background color to yellow.
 * @param str text to make its background yellow
 */
std::string bg_yellow(std::string str)
{
    return run(str, code("43", "49"));
}

/**
 * Set background color to blue.
 * @param str text to make its background blue
 */
std::string bg_blue(std::string str)
{
    return run(str, code("44", "49"));
}

/**
 * Set background color to magenta.
 * @param str text to make its background magenta
 */
std::string bg_magenta(std::string str)
{
    return run(str, code("45", "49"));
}

/**
 * Set background color to cyan.
 * @param str text to make its background cyan
 */
std::string bg_cyan(std::string str)
{
    return run(str, code("46", "49"));
}

/**
 * Set background color to white.
 * @param str text to make its background white
 */
std::string bg_white(std::string str)
{
    return run(str, code("47", "49"));
}

/**
 * Set background color to bright black.
 * @param str text to make its background bright-black
 */
std::string bg_bright_black(std::string str)
{
    return run(str, code("100", "49"));
}

/**
 * Set background color to bright red.
 * @param str text to make its background bright-red
 */
std::string bg_bright_red(std::string str)
{
    return run(str, code("101", "49"));
}

/**
 * Set background color to bright green.
 * @param str text to make its background bright-green
 */
std::string bg_bright_green(std::string str)
{
    return run(str, code("102", "49"));
}

/**
 * Set background color to bright yellow.
 * @param str text to make its background bright-yellow
 */
std::string bg_bright_yellow(std::string str)
{
    return run(str, code("103", "49"));
}

/**
 * Set background color to bright blue.
 * @param str text to make its background bright-blue
 */
std::string bg_bright_blue(std::string str)
{
    return run(str, code("104", "49"));
}

/**
 * Set background color to bright magenta.
 * @param str text to make its background bright-magenta
 */
std::string bg_bright_magenta(std::string str)
{
    return run(str, code("105", "49"));
}

/**
 * Set background color to bright cyan.
 * @param str text to make its background bright-cyan
 */
std::string bg_bright_cyan(std::string str)
{
    return run(str, code("106", "49"));
}

/**
 * Set background color to bright white.
 * @param str text to make its background bright-white
 */
std::string bg_bright_white(std::string str)
{
    return run(str, code("107", "49"));
}
