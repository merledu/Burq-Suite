#  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
#  This is an automatically generated file by mahnoor on و 01:04:11 PKT ت 21 نومبر 2022
# 
#  cmd:    swerv -target=default -set build_axi4 
# 
# To use this in a perf script, use 'require $RV_ROOT/configs/config.pl'
# Reference the hash via $config{name}..


%config = (
            'pic' => {
                       'pic_meigwctrl_mask' => '0x3',
                       'pic_total_int_plus1' => 32,
                       'pic_mpiccfg_offset' => '0x3000',
                       'pic_meigwclr_mask' => '0x0',
                       'pic_meigwclr_count' => 31,
                       'pic_offset' => '0xc0000',
                       'pic_meipl_mask' => '0xf',
                       'pic_meie_mask' => '0x1',
                       'pic_base_addr' => '0xf00c0000',
                       'pic_meigwctrl_offset' => '0x4000',
                       'pic_meip_mask' => '0x0',
                       'pic_meipl_offset' => '0x0000',
                       'pic_region' => '0xf',
                       'pic_meipt_count' => 31,
                       'pic_bits' => 15,
                       'pic_meie_offset' => '0x2000',
                       'pic_meie_count' => 31,
                       'pic_meipt_offset' => '0x3004',
                       'pic_meigwctrl_count' => 31,
                       'pic_int_words' => 1,
                       'pic_meipl_count' => 31,
                       'pic_meip_offset' => '0x1000',
                       'pic_meip_count' => 1,
                       'pic_size' => 32,
                       'pic_meipt_mask' => '0x0',
                       'pic_mpiccfg_count' => 1,
                       'pic_total_int' => 31,
                       'pic_meigwclr_offset' => '0x5000',
                       'pic_mpiccfg_mask' => '0x1'
                     },
            'bus' => {
                       'ifu_bus_prty' => '2',
                       'lsu_bus_id' => '1',
                       'dma_bus_id' => '1',
                       'sb_bus_tag' => '1',
                       'bus_prty_default' => '3',
                       'sb_bus_id' => '1',
                       'sb_bus_prty' => '2',
                       'dma_bus_tag' => '1',
                       'lsu_bus_tag' => 3,
                       'lsu_bus_prty' => '2',
                       'ifu_bus_id' => '1',
                       'dma_bus_prty' => '2',
                       'ifu_bus_tag' => '3'
                     },
            'core' => {
                        'lsu_num_nbload' => '4',
                        'iccm_icache' => 1,
                        'iccm_only' => 'derived',
                        'bitmanip_zbf' => 0,
                        'div_new' => 1,
                        'bitmanip_zbr' => 0,
                        'fast_interrupt_redirect' => '1',
                        'lsu_num_nbload_width' => '2',
                        'bitmanip_zbp' => 0,
                        'fpga_optimize' => 1,
                        'lsu2dma' => 0,
                        'dma_buf_depth' => '5',
                        'bitmanip_zbs' => 1,
                        'bitmanip_zbb' => 1,
                        'bitmanip_zbe' => 0,
                        'lsu_stbuf_depth' => '4',
                        'timer_legal_en' => '1',
                        'div_bit' => '4',
                        'bitmanip_zbc' => 1,
                        'bitmanip_zba' => 1,
                        'icache_only' => 'derived',
                        'no_iccm_no_icache' => 'derived'
                      },
            'even_odd_trigger_chains' => 'true',
            'bht' => {
                       'bht_ghr_hash_1' => '',
                       'bht_addr_lo' => '2',
                       'bht_array_depth' => 256,
                       'bht_addr_hi' => 9,
                       'bht_ghr_range' => '7:0',
                       'bht_hash_string' => '{hashin[8+1:2]^ghr[8-1:0]}// cf2',
                       'bht_ghr_size' => 8,
                       'bht_size' => 512
                     },
            'regwidth' => '32',
            'triggers' => [
                            {
                              'poke_mask' => [
                                               '0x081818c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'mask' => [
                                          '0x081818c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ]
                            },
                            {
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'mask' => [
                                          '0x081810c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'poke_mask' => [
                                               '0x081810c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ]
                            },
                            {
                              'poke_mask' => [
                                               '0x081818c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'mask' => [
                                          '0x081818c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ]
                            },
                            {
                              'mask' => [
                                          '0x081810c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'poke_mask' => [
                                               '0x081810c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ]
                            }
                          ],
            'iccm' => {
                        'iccm_bits' => 16,
                        'iccm_offset' => '0xe000000',
                        'iccm_index_bits' => 12,
                        'iccm_sadr' => '0xee000000',
                        'iccm_num_banks_4' => '',
                        'iccm_size_64' => '',
                        'iccm_bank_index_lo' => 4,
                        'iccm_reserved' => '0x1000',
                        'iccm_rows' => '4096',
                        'iccm_bank_bits' => 2,
                        'iccm_data_cell' => 'ram_4096x39',
                        'iccm_size' => 64,
                        'iccm_eadr' => '0xee00ffff',
                        'iccm_num_banks' => '4',
                        'iccm_region' => '0xe',
                        'iccm_bank_hi' => 3,
                        'iccm_enable' => 1
                      },
            'protection' => {
                              'inst_access_addr5' => '0x00000000',
                              'data_access_mask6' => '0xffffffff',
                              'inst_access_enable5' => '0x0',
                              'inst_access_enable2' => '0x0',
                              'inst_access_enable6' => '0x0',
                              'data_access_enable3' => '0x0',
                              'inst_access_addr1' => '0x00000000',
                              'data_access_addr2' => '0x00000000',
                              'data_access_mask4' => '0xffffffff',
                              'inst_access_enable1' => '0x0',
                              'inst_access_mask1' => '0xffffffff',
                              'data_access_addr4' => '0x00000000',
                              'data_access_mask2' => '0xffffffff',
                              'data_access_addr6' => '0x00000000',
                              'inst_access_mask5' => '0xffffffff',
                              'data_access_enable6' => '0x0',
                              'data_access_enable2' => '0x0',
                              'data_access_enable5' => '0x0',
                              'data_access_addr5' => '0x00000000',
                              'inst_access_mask6' => '0xffffffff',
                              'inst_access_addr2' => '0x00000000',
                              'inst_access_mask4' => '0xffffffff',
                              'data_access_addr1' => '0x00000000',
                              'inst_access_enable3' => '0x0',
                              'inst_access_mask2' => '0xffffffff',
                              'inst_access_addr4' => '0x00000000',
                              'data_access_mask1' => '0xffffffff',
                              'data_access_enable1' => '0x0',
                              'data_access_mask5' => '0xffffffff',
                              'inst_access_addr6' => '0x00000000',
                              'inst_access_mask3' => '0xffffffff',
                              'inst_access_addr0' => '0x00000000',
                              'data_access_enable7' => '0x0',
                              'inst_access_addr7' => '0x00000000',
                              'data_access_enable4' => '0x0',
                              'inst_access_mask7' => '0xffffffff',
                              'inst_access_enable0' => '0x0',
                              'inst_access_mask0' => '0xffffffff',
                              'inst_access_addr3' => '0x00000000',
                              'data_access_addr0' => '0x00000000',
                              'inst_access_enable7' => '0x0',
                              'data_access_mask3' => '0xffffffff',
                              'inst_access_enable4' => '0x0',
                              'data_access_addr7' => '0x00000000',
                              'data_access_mask7' => '0xffffffff',
                              'data_access_addr3' => '0x00000000',
                              'data_access_mask0' => '0xffffffff',
                              'data_access_enable0' => '0x0'
                            },
            'csr' => {
                       'pmpaddr4' => {
                                       'exists' => 'false'
                                     },
                       'mhpmcounter3h' => {
                                            'exists' => 'true',
                                            'reset' => '0x0',
                                            'mask' => '0xffffffff'
                                          },
                       'mitbnd1' => {
                                      'number' => '0x7d6',
                                      'mask' => '0xffffffff',
                                      'reset' => '0xffffffff',
                                      'exists' => 'true'
                                    },
                       'mhpmcounter5h' => {
                                            'reset' => '0x0',
                                            'exists' => 'true',
                                            'mask' => '0xffffffff'
                                          },
                       'dicad0' => {
                                     'comment' => 'Cache diagnostics.',
                                     'debug' => 'true',
                                     'number' => '0x7c9',
                                     'mask' => '0xffffffff',
                                     'exists' => 'true',
                                     'reset' => '0x0'
                                   },
                       'miccmect' => {
                                       'number' => '0x7f1',
                                       'mask' => '0xffffffff',
                                       'exists' => 'true',
                                       'reset' => '0x0'
                                     },
                       'dcsr' => {
                                   'debug' => 'true',
                                   'poke_mask' => '0x00008dcc',
                                   'exists' => 'true',
                                   'reset' => '0x40000003',
                                   'mask' => '0x00008c04'
                                 },
                       'mcpc' => {
                                   'mask' => '0x0',
                                   'exists' => 'true',
                                   'reset' => '0x0',
                                   'number' => '0x7c2',
                                   'comment' => 'Core pause'
                                 },
                       'instret' => {
                                      'exists' => 'false'
                                    },
                       'meipt' => {
                                    'mask' => '0xf',
                                    'reset' => '0x0',
                                    'exists' => 'true',
                                    'number' => '0xbc9',
                                    'comment' => 'External interrupt priority threshold.'
                                  },
                       'dicad1' => {
                                     'number' => '0x7ca',
                                     'mask' => '0x3',
                                     'reset' => '0x0',
                                     'exists' => 'true',
                                     'comment' => 'Cache diagnostics.',
                                     'debug' => 'true'
                                   },
                       'time' => {
                                   'exists' => 'false'
                                 },
                       'mitcnt1' => {
                                      'mask' => '0xffffffff',
                                      'reset' => '0x0',
                                      'exists' => 'true',
                                      'number' => '0x7d5'
                                    },
                       'mscause' => {
                                      'number' => '0x7ff',
                                      'reset' => '0x0',
                                      'exists' => 'true',
                                      'mask' => '0x0000000f'
                                    },
                       'mitctl1' => {
                                      'number' => '0x7d7',
                                      'reset' => '0x1',
                                      'exists' => 'true',
                                      'mask' => '0x0000000f'
                                    },
                       'micect' => {
                                     'mask' => '0xffffffff',
                                     'reset' => '0x0',
                                     'exists' => 'true',
                                     'number' => '0x7f0'
                                   },
                       'pmpaddr0' => {
                                       'exists' => 'false'
                                     },
                       'mhpmevent5' => {
                                         'reset' => '0x0',
                                         'exists' => 'true',
                                         'mask' => '0xffffffff'
                                       },
                       'pmpcfg1' => {
                                      'exists' => 'false'
                                    },
                       'mip' => {
                                  'poke_mask' => '0x70000888',
                                  'mask' => '0x0',
                                  'reset' => '0x0',
                                  'exists' => 'true'
                                },
                       'mhpmevent4' => {
                                         'exists' => 'true',
                                         'reset' => '0x0',
                                         'mask' => '0xffffffff'
                                       },
                       'pmpaddr14' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr15' => {
                                        'exists' => 'false'
                                      },
                       'mcountinhibit' => {
                                            'poke_mask' => '0x7d',
                                            'commnet' => 'Performance counter inhibit. One bit per counter.',
                                            'mask' => '0x7d',
                                            'reset' => '0x0',
                                            'exists' => 'true'
                                          },
                       'pmpaddr1' => {
                                       'exists' => 'false'
                                     },
                       'mhpmcounter6' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'mhpmcounter4h' => {
                                            'mask' => '0xffffffff',
                                            'reset' => '0x0',
                                            'exists' => 'true'
                                          },
                       'pmpaddr9' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr3' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr7' => {
                                       'exists' => 'false'
                                     },
                       'mcgc' => {
                                   'mask' => '0x000003ff',
                                   'exists' => 'true',
                                   'reset' => '0x200',
                                   'number' => '0x7f8',
                                   'poke_mask' => '0x000003ff'
                                 },
                       'pmpcfg0' => {
                                      'exists' => 'false'
                                    },
                       'pmpaddr12' => {
                                        'exists' => 'false'
                                      },
                       'meicidpl' => {
                                       'comment' => 'External interrupt claim id priority level.',
                                       'number' => '0xbcb',
                                       'mask' => '0xf',
                                       'exists' => 'true',
                                       'reset' => '0x0'
                                     },
                       'cycle' => {
                                    'exists' => 'false'
                                  },
                       'mstatus' => {
                                      'exists' => 'true',
                                      'reset' => '0x1800',
                                      'mask' => '0x88'
                                    },
                       'mpmc' => {
                                   'mask' => '0x2',
                                   'reset' => '0x2',
                                   'exists' => 'true',
                                   'number' => '0x7c6'
                                 },
                       'mdccmect' => {
                                       'number' => '0x7f2',
                                       'mask' => '0xffffffff',
                                       'exists' => 'true',
                                       'reset' => '0x0'
                                     },
                       'misa' => {
                                   'reset' => '0x40001104',
                                   'exists' => 'true',
                                   'mask' => '0x0'
                                 },
                       'mhpmcounter5' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'mhpmcounter3' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'mfdc' => {
                                   'reset' => '0x00070040',
                                   'exists' => 'true',
                                   'mask' => '0x00071fff',
                                   'number' => '0x7f9'
                                 },
                       'meicurpl' => {
                                       'mask' => '0xf',
                                       'exists' => 'true',
                                       'reset' => '0x0',
                                       'number' => '0xbcc',
                                       'comment' => 'External interrupt current priority level.'
                                     },
                       'mvendorid' => {
                                        'mask' => '0x0',
                                        'reset' => '0x45',
                                        'exists' => 'true'
                                      },
                       'pmpaddr5' => {
                                       'exists' => 'false'
                                     },
                       'marchid' => {
                                      'exists' => 'true',
                                      'reset' => '0x00000010',
                                      'mask' => '0x0'
                                    },
                       'pmpaddr10' => {
                                        'exists' => 'false'
                                      },
                       'dicago' => {
                                     'number' => '0x7cb',
                                     'mask' => '0x0',
                                     'reset' => '0x0',
                                     'exists' => 'true',
                                     'comment' => 'Cache diagnostics.',
                                     'debug' => 'true'
                                   },
                       'mhpmcounter6h' => {
                                            'mask' => '0xffffffff',
                                            'reset' => '0x0',
                                            'exists' => 'true'
                                          },
                       'mhpmcounter4' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'mfdhs' => {
                                    'comment' => 'Force Debug Halt Status',
                                    'exists' => 'true',
                                    'reset' => '0x0',
                                    'mask' => '0x00000003',
                                    'number' => '0x7cf'
                                  },
                       'mitbnd0' => {
                                      'number' => '0x7d3',
                                      'reset' => '0xffffffff',
                                      'exists' => 'true',
                                      'mask' => '0xffffffff'
                                    },
                       'mhpmevent3' => {
                                         'mask' => '0xffffffff',
                                         'reset' => '0x0',
                                         'exists' => 'true'
                                       },
                       'dicawics' => {
                                       'comment' => 'Cache diagnostics.',
                                       'debug' => 'true',
                                       'number' => '0x7c8',
                                       'mask' => '0x0130fffc',
                                       'reset' => '0x0',
                                       'exists' => 'true'
                                     },
                       'mfdht' => {
                                    'number' => '0x7ce',
                                    'mask' => '0x0000003f',
                                    'shared' => 'true',
                                    'reset' => '0x0',
                                    'exists' => 'true',
                                    'comment' => 'Force Debug Halt Threshold'
                                  },
                       'mimpid' => {
                                     'mask' => '0x0',
                                     'reset' => '0x4',
                                     'exists' => 'true'
                                   },
                       'pmpaddr8' => {
                                       'exists' => 'false'
                                     },
                       'mcounteren' => {
                                         'exists' => 'false'
                                       },
                       'mrac' => {
                                   'number' => '0x7c0',
                                   'shared' => 'true',
                                   'reset' => '0x0',
                                   'mask' => '0xffffffff',
                                   'comment' => 'Memory region io and cache control.',
                                   'exists' => 'true'
                                 },
                       'pmpaddr11' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr6' => {
                                       'exists' => 'false'
                                     },
                       'pmpcfg2' => {
                                      'exists' => 'false'
                                    },
                       'mhpmevent6' => {
                                         'exists' => 'true',
                                         'reset' => '0x0',
                                         'mask' => '0xffffffff'
                                       },
                       'tselect' => {
                                      'mask' => '0x3',
                                      'reset' => '0x0',
                                      'exists' => 'true'
                                    },
                       'pmpcfg3' => {
                                      'exists' => 'false'
                                    },
                       'mie' => {
                                  'reset' => '0x0',
                                  'exists' => 'true',
                                  'mask' => '0x70000888'
                                },
                       'mitctl0' => {
                                      'number' => '0x7d4',
                                      'exists' => 'true',
                                      'reset' => '0x1',
                                      'mask' => '0x00000007'
                                    },
                       'pmpaddr2' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr13' => {
                                        'exists' => 'false'
                                      },
                       'mhartid' => {
                                      'poke_mask' => '0xfffffff0',
                                      'reset' => '0x0',
                                      'exists' => 'true',
                                      'mask' => '0x0'
                                    },
                       'dmst' => {
                                   'debug' => 'true',
                                   'comment' => 'Memory synch trigger: Flush caches in debug mode.',
                                   'number' => '0x7c4',
                                   'reset' => '0x0',
                                   'exists' => 'true',
                                   'mask' => '0x0'
                                 },
                       'mitcnt0' => {
                                      'mask' => '0xffffffff',
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'number' => '0x7d2'
                                    }
                     },
            'reset_vec' => '0x80000000',
            'target' => 'default',
            'dccm' => {
                        'dccm_rows' => '4096',
                        'dccm_reserved' => '0x1400',
                        'lsu_sb_bits' => 16,
                        'dccm_index_bits' => 12,
                        'dccm_sadr' => '0xf0040000',
                        'dccm_bits' => 16,
                        'dccm_offset' => '0x40000',
                        'dccm_num_banks_4' => '',
                        'dccm_width_bits' => 2,
                        'dccm_size_64' => '',
                        'dccm_region' => '0xf',
                        'dccm_byte_width' => '4',
                        'dccm_enable' => '1',
                        'dccm_ecc_width' => 7,
                        'dccm_eadr' => '0xf004ffff',
                        'dccm_bank_bits' => 2,
                        'dccm_data_cell' => 'ram_4096x39',
                        'dccm_size' => 64,
                        'dccm_data_width' => 32,
                        'dccm_fdata_width' => 39,
                        'dccm_num_banks' => '4'
                      },
            'config_key' => '32\'hdeadbeef',
            'physical' => '1',
            'max_mmode_perf_event' => '516',
            'harts' => 1,
            'icache' => {
                          'icache_banks_way' => 2,
                          'icache_tag_lo' => 13,
                          'icache_beat_addr_hi' => 5,
                          'icache_data_cell' => 'ram_512x71',
                          'icache_tag_bypass_enable' => '1',
                          'icache_enable' => 1,
                          'icache_tag_cell' => 'ram_128x25',
                          'icache_waypack' => '1',
                          'icache_tag_num_bypass' => '2',
                          'icache_ecc' => '1',
                          'icache_bank_lo' => 3,
                          'icache_num_lines_bank' => '64',
                          'icache_bypass_enable' => '1',
                          'icache_bank_width' => 8,
                          'icache_num_lines' => 256,
                          'icache_ln_sz' => 64,
                          'icache_tag_num_bypass_width' => 2,
                          'icache_tag_depth' => 128,
                          'icache_num_ways' => 2,
                          'icache_num_beats' => 8,
                          'icache_bank_bits' => 1,
                          'icache_size' => 16,
                          'icache_data_index_lo' => 4,
                          'icache_beat_bits' => 3,
                          'icache_fdata_width' => 71,
                          'icache_num_bypass_width' => 2,
                          'icache_num_lines_way' => '128',
                          'icache_num_bypass' => '2',
                          'icache_index_hi' => 12,
                          'icache_bank_hi' => 3,
                          'icache_scnd_last' => 6,
                          'icache_data_width' => 64,
                          'icache_2banks' => '1',
                          'icache_data_depth' => '512',
                          'icache_status_bits' => 1,
                          'icache_tag_index_lo' => '6'
                        },
            'retstack' => {
                            'ret_stack_size' => '8'
                          },
            'xlen' => 32,
            'perf_events' => [
                               1,
                               2,
                               3,
                               4,
                               5,
                               6,
                               7,
                               8,
                               9,
                               10,
                               11,
                               12,
                               13,
                               14,
                               15,
                               16,
                               17,
                               18,
                               19,
                               20,
                               21,
                               22,
                               23,
                               24,
                               25,
                               26,
                               27,
                               28,
                               30,
                               31,
                               32,
                               34,
                               35,
                               36,
                               37,
                               38,
                               39,
                               40,
                               41,
                               42,
                               43,
                               44,
                               45,
                               46,
                               47,
                               48,
                               49,
                               50,
                               54,
                               55,
                               56,
                               512,
                               513,
                               514,
                               515,
                               516
                             ],
            'nmi_vec' => '0x11110000',
            'memmap' => {
                          'unused_region0' => '0x90000000',
                          'unused_region1' => '0x70000000',
                          'unused_region7' => '0x10000000',
                          'debug_sb_mem' => '0xa0580000',
                          'external_data' => '0xc0580000',
                          'unused_region2' => '0x60000000',
                          'unused_region4' => '0x40000000',
                          'consoleio' => '0xd0580000',
                          'unused_region8' => '0x00000000',
                          'unused_region5' => '0x30000000',
                          'serialio' => '0xd0580000',
                          'unused_region6' => '0x20000000',
                          'unused_region3' => '0x50000000',
                          'external_data_1' => '0xb0000000'
                        },
            'num_mmode_perf_regs' => '4',
            'tec_rv_icg' => 'clockhdr',
            'testbench' => {
                             'RV_TOP' => '`TOP.rvtop',
                             'SDVT_AHB' => '0',
                             'sterr_rollback' => '0',
                             'assert_on' => '',
                             'build_axi_native' => 1,
                             'build_axi4' => 1,
                             'ext_datawidth' => '64',
                             'CPU_TOP' => '`RV_TOP.swerv',
                             'clock_period' => '100',
                             'TOP' => 'tb_top',
                             'lderr_rollback' => '1',
                             'ext_addrwidth' => '32'
                           },
            'numiregs' => '32',
            'btb' => {
                       'btb_addr_hi' => 9,
                       'btb_enable' => '1',
                       'btb_size' => 512,
                       'btb_btag_size' => 5,
                       'btb_index1_lo' => '2',
                       'btb_index3_lo' => 18,
                       'btb_index2_hi' => 17,
                       'btb_fold2_index_hash' => 0,
                       'btb_addr_lo' => '2',
                       'btb_index1_hi' => 9,
                       'btb_index3_hi' => 25,
                       'btb_index2_lo' => 10,
                       'btb_toffset_size' => '12',
                       'btb_btag_fold' => 0,
                       'btb_array_depth' => 256
                     }
          );
1;
