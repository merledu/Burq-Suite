from globals import windows, configs


def open_dut_menu():
    windows['main'].load_url('frontend/web/index.html')
    configs.clear()
    return