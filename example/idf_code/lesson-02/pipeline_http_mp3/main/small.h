
#include <driver/gpio.h>







// 定义要操作的 GPIO 引脚
#define GPIO_OUTPUT_IO_1    14
#define GPIO_OUTPUT_IO_2    21
#define GPIO_OUTPUT_PIN_SEL  ((1ULL<<GPIO_OUTPUT_IO_1) | (1ULL<<GPIO_OUTPUT_IO_2))



// 拉低 GPIO 14 和 GPIO 21 引脚的函数
void pull_gpios_low() {
    gpio_config_t io_conf;
    // 禁用中断
    io_conf.intr_type = GPIO_INTR_DISABLE;
    // 设置为输出模式
    io_conf.mode = GPIO_MODE_OUTPUT;
    // 选择要配置的 GPIO 引脚
    io_conf.pin_bit_mask = GPIO_OUTPUT_PIN_SEL;
    // 禁用下拉模式
    io_conf.pull_down_en = 0;
    // 禁用上拉模式
    io_conf.pull_up_en = 0;
    // 调用 gpio_config 函数进行 GPIO 配置
    gpio_config(&io_conf);

    // 将 GPIO 14 和 GPIO 21 引脚拉低
    gpio_set_level(GPIO_OUTPUT_IO_1, 0);
    gpio_set_level(GPIO_OUTPUT_IO_2, 0);

}