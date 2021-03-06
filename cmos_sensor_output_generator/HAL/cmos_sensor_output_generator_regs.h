#ifndef __CMOS_SENSOR_OUTPUT_GENERATOR_REGS_H__
#define __CMOS_SENSOR_OUTPUT_GENERATOR_REGS_H__

#if defined(__KERNEL__) || defined(MODULE)
#include <linux/types.h>
#else
#include <stdint.h>
#endif

#include "cmos_sensor_output_generator_io.h"

#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_WIDTH_OFST                 (0 * 4) /* RW */
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_HEIGHT_OFST                (1 * 4) /* RW */
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_FRAME_BLANK_OFST           (2 * 4) /* RW */
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_LINE_BLANK_OFST            (3 * 4) /* RW */
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_LINE_LINE_BLANK_OFST             (4 * 4) /* RW */
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_LINE_FRAME_BLANK_OFST            (5 * 4) /* RW */
#define CMOS_SENSOR_OUTPUT_GENERATOR_COMMAND_OFST                            (6 * 4) /* WO */
#define CMOS_SENSOR_OUTPUT_GENERATOR_STATUS_OFST                             (7 * 4) /* RO */

#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_WIDTH_ADDR(base)           ((void *) ((uint8_t *) (base) + CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_WIDTH_OFST))
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_HEIGHT_ADDR(base)          ((void *) ((uint8_t *) (base) + CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_HEIGHT_OFST))
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_FRAME_BLANK_ADDR(base)     ((void *) ((uint8_t *) (base) + CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_FRAME_BLANK_OFST))
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_LINE_BLANK_ADDR(base)      ((void *) ((uint8_t *) (base) + CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_LINE_BLANK_OFST))
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_LINE_LINE_BLANK_ADDR(base)       ((void *) ((uint8_t *) (base) + CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_LINE_LINE_BLANK_OFST))
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_LINE_FRAME_BLANK_ADDR(base)      ((void *) ((uint8_t *) (base) + CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_LINE_FRAME_BLANK_OFST))
#define CMOS_SENSOR_OUTPUT_GENERATOR_COMMAND_ADDR(base)                      ((void *) ((uint8_t *) (base) + CMOS_SENSOR_OUTPUT_GENERATOR_COMMAND_OFST))
#define CMOS_SENSOR_OUTPUT_GENERATOR_STATUS_ADDR(base)                       ((void *) ((uint8_t *) (base) + CMOS_SENSOR_OUTPUT_GENERATOR_STATUS_OFST))

#define CMOS_SENSOR_OUTPUT_GENERATOR_COMMAND_STOP                            (0)
#define CMOS_SENSOR_OUTPUT_GENERATOR_COMMAND_START                           (1)

#define CMOS_SENSOR_OUTPUT_GENERATOR_STATUS_IDLE                             (1)
#define CMOS_SENSOR_OUTPUT_GENERATOR_STATUS_BUSY                             (0)

#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_WIDTH_MIN                  (1)
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_HEIGHT_MIN                 (1)
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_FRAME_BLANK_MIN            (1)
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_LINE_BLANK_MIN             (0)
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_LINE_LINE_BLANK_MIN              (1)
#define CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_LINE_FRAME_BLANK_MIN             (0)

#define CMOS_SENSOR_OUTPUT_GENERATOR_WR_CONFIG_FRAME_WIDTH(base, data)       cmos_sensor_output_generator_write_word(CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_WIDTH_ADDR((base)), (data))
#define CMOS_SENSOR_OUTPUT_GENERATOR_WR_CONFIG_FRAME_HEIGHT(base, data)      cmos_sensor_output_generator_write_word(CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_HEIGHT_ADDR((base)), (data))
#define CMOS_SENSOR_OUTPUT_GENERATOR_WR_CONFIG_FRAME_FRAME_BLANK(base, data) cmos_sensor_output_generator_write_word(CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_FRAME_BLANK_ADDR((base)), (data))
#define CMOS_SENSOR_OUTPUT_GENERATOR_WR_CONFIG_FRAME_LINE_BLANK(base, data)  cmos_sensor_output_generator_write_word(CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_LINE_BLANK_ADDR((base)), (data))
#define CMOS_SENSOR_OUTPUT_GENERATOR_WR_CONFIG_LINE_LINE_BLANK(base, data)   cmos_sensor_output_generator_write_word(CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_LINE_LINE_BLANK_ADDR((base)), (data))
#define CMOS_SENSOR_OUTPUT_GENERATOR_WR_CONFIG_LINE_FRAME_BLANK(base, data)  cmos_sensor_output_generator_write_word(CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_LINE_FRAME_BLANK_ADDR((base)), (data))
#define CMOS_SENSOR_OUTPUT_GENERATOR_WR_COMMAND(base, data)                  cmos_sensor_output_generator_write_word(CMOS_SENSOR_OUTPUT_GENERATOR_COMMAND_ADDR((base)), (data))
#define CMOS_SENSOR_OUTPUT_GENERATOR_RD_CONFIG_FRAME_WIDTH(base)             cmos_sensor_output_generator_read_word(CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_WIDTH_ADDR((base)))
#define CMOS_SENSOR_OUTPUT_GENERATOR_RD_CONFIG_FRAME_HEIGHT(base)            cmos_sensor_output_generator_read_word(CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_HEIGHT_ADDR((base)))
#define CMOS_SENSOR_OUTPUT_GENERATOR_RD_CONFIG_FRAME_FRAME_BLANK(base)       cmos_sensor_output_generator_read_word(CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_FRAME_BLANK_ADDR((base)))
#define CMOS_SENSOR_OUTPUT_GENERATOR_RD_CONFIG_FRAME_LINE_BLANK(base)        cmos_sensor_output_generator_read_word(CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_FRAME_LINE_BLANK_ADDR((base)))
#define CMOS_SENSOR_OUTPUT_GENERATOR_RD_CONFIG_LINE_LINE_BLANK(base)         cmos_sensor_output_generator_read_word(CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_LINE_LINE_BLANK_ADDR((base)))
#define CMOS_SENSOR_OUTPUT_GENERATOR_RD_CONFIG_LINE_FRAME_BLANK(base)        cmos_sensor_output_generator_read_word(CMOS_SENSOR_OUTPUT_GENERATOR_CONFIG_LINE_FRAME_BLANK_ADDR((base)))
#define CMOS_SENSOR_OUTPUT_GENERATOR_RD_STATUS(base)                         cmos_sensor_output_generator_read_word(CMOS_SENSOR_OUTPUT_GENERATOR_STATUS_ADDR((base)))

#endif /* __CMOS_SENSOR_OUTPUT_GENERATOR_REGS_H__ */
