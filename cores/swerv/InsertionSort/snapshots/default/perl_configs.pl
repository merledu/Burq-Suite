#  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
#  This is an automatically generated file by mano on Thu 16 Jun 2022 03:06:31 PM PKT
# 
#  cmd:    swerv -target=default -set build_axi4 
# 
# To use this in a perf script, use 'require $RV_ROOT/configs/config.pl'
# Reference the hash via $config{name}..


%config = (
            'icache' => {
                          'icache_data_width' => 64,
                          'icache_data_depth' => '512',
                          'icache_banks_way' => 2,
                          'icache_num_bypass_width' => 2,
                          'icache_tag_num_bypass_width' => 2,
                          'icache_size' => 16,
                          'icache_num_lines' => 256,
                          'icache_tag_lo' => 13,
                          'icache_bank_hi' => 3,
                          'icache_num_bypass' => '2',
                          'icache_num_lines_bank' => '64',
                          'icache_tag_depth' => 128,
                          'icache_waypack' => '1',
                          'icache_tag_cell' => 'ram_128x25',
                          'icache_tag_index_lo' => '6',
                          'icache_bank_lo' => 3,
                          'icache_bank_width' => 8,
                          'icache_enable' => 1,
                          'icache_tag_bypass_enable' => '1',
                          'icache_beat_addr_hi' => 5,
                          'icache_bank_bits' => 1,
                          'icache_data_cell' => 'ram_512x71',
                          'icache_2banks' => '1',
                          'icache_ln_sz' => 64,
                          'icache_bypass_enable' => '1',
                          'icache_num_ways' => 2,
                          'icache_num_beats' => 8,
                          'icache_index_hi' => 12,
                          'icache_tag_num_bypass' => '2',
                          'icache_scnd_last' => 6,
                          'icache_data_index_lo' => 4,
                          'icache_fdata_width' => 71,
                          'icache_beat_bits' => 3,
                          'icache_ecc' => '1',
                          'icache_num_lines_way' => '128',
                          'icache_status_bits' => 1
                        },
            'nmi_vec' => '0x11110000',
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
            'btb' => {
                       'btb_index2_hi' => 17,
                       'btb_index1_lo' => '2',
                       'btb_array_depth' => 256,
                       'btb_size' => 512,
                       'btb_addr_lo' => '2',
                       'btb_fold2_index_hash' => 0,
                       'btb_index3_hi' => 25,
                       'btb_btag_size' => 5,
                       'btb_enable' => '1',
                       'btb_index3_lo' => 18,
                       'btb_addr_hi' => 9,
                       'btb_toffset_size' => '12',
                       'btb_index1_hi' => 9,
                       'btb_btag_fold' => 0,
                       'btb_index2_lo' => 10
                     },
            'protection' => {
                              'data_access_enable5' => '0x0',
                              'inst_access_enable5' => '0x0',
                              'inst_access_addr7' => '0x00000000',
                              'data_access_addr7' => '0x00000000',
                              'data_access_addr5' => '0x00000000',
                              'inst_access_addr5' => '0x00000000',
                              'data_access_enable6' => '0x0',
                              'inst_access_enable6' => '0x0',
                              'inst_access_mask0' => '0xffffffff',
                              'data_access_mask0' => '0xffffffff',
                              'inst_access_enable4' => '0x0',
                              'data_access_enable4' => '0x0',
                              'data_access_enable1' => '0x0',
                              'data_access_mask5' => '0xffffffff',
                              'inst_access_mask5' => '0xffffffff',
                              'inst_access_enable1' => '0x0',
                              'inst_access_mask7' => '0xffffffff',
                              'data_access_mask7' => '0xffffffff',
                              'inst_access_addr0' => '0x00000000',
                              'data_access_addr0' => '0x00000000',
                              'inst_access_addr1' => '0x00000000',
                              'data_access_addr1' => '0x00000000',
                              'data_access_addr6' => '0x00000000',
                              'inst_access_addr6' => '0x00000000',
                              'data_access_mask2' => '0xffffffff',
                              'inst_access_mask2' => '0xffffffff',
                              'inst_access_addr3' => '0x00000000',
                              'data_access_addr3' => '0x00000000',
                              'inst_access_addr4' => '0x00000000',
                              'data_access_addr4' => '0x00000000',
                              'data_access_enable0' => '0x0',
                              'inst_access_enable0' => '0x0',
                              'data_access_mask6' => '0xffffffff',
                              'inst_access_mask6' => '0xffffffff',
                              'inst_access_mask1' => '0xffffffff',
                              'data_access_mask1' => '0xffffffff',
                              'data_access_enable2' => '0x0',
                              'inst_access_enable7' => '0x0',
                              'inst_access_enable2' => '0x0',
                              'data_access_enable7' => '0x0',
                              'inst_access_mask3' => '0xffffffff',
                              'data_access_mask3' => '0xffffffff',
                              'data_access_addr2' => '0x00000000',
                              'inst_access_addr2' => '0x00000000',
                              'inst_access_enable3' => '0x0',
                              'data_access_enable3' => '0x0',
                              'inst_access_mask4' => '0xffffffff',
                              'data_access_mask4' => '0xffffffff'
                            },
            'csr' => {
                       'pmpaddr13' => {
                                        'exists' => 'false'
                                      },
                       'cycle' => {
                                    'exists' => 'false'
                                  },
                       'pmpaddr15' => {
                                        'exists' => 'false'
                                      },
                       'meicurpl' => {
                                       'number' => '0xbcc',
                                       'reset' => '0x0',
                                       'exists' => 'true',
                                       'comment' => 'External interrupt current priority level.',
                                       'mask' => '0xf'
                                     },
                       'mcgc' => {
                                   'mask' => '0x000003ff',
                                   'exists' => 'true',
                                   'poke_mask' => '0x000003ff',
                                   'number' => '0x7f8',
                                   'reset' => '0x200'
                                 },
                       'dcsr' => {
                                   'exists' => 'true',
                                   'debug' => 'true',
                                   'poke_mask' => '0x00008dcc',
                                   'mask' => '0x00008c04',
                                   'reset' => '0x40000003'
                                 },
                       'marchid' => {
                                      'reset' => '0x00000010',
                                      'exists' => 'true',
                                      'mask' => '0x0'
                                    },
                       'dicad0' => {
                                     'mask' => '0xffffffff',
                                     'comment' => 'Cache diagnostics.',
                                     'debug' => 'true',
                                     'exists' => 'true',
                                     'number' => '0x7c9',
                                     'reset' => '0x0'
                                   },
                       'dicawics' => {
                                       'comment' => 'Cache diagnostics.',
                                       'mask' => '0x0130fffc',
                                       'exists' => 'true',
                                       'debug' => 'true',
                                       'reset' => '0x0',
                                       'number' => '0x7c8'
                                     },
                       'pmpaddr0' => {
                                       'exists' => 'false'
                                     },
                       'dicad1' => {
                                     'exists' => 'true',
                                     'debug' => 'true',
                                     'number' => '0x7ca',
                                     'reset' => '0x0',
                                     'comment' => 'Cache diagnostics.',
                                     'mask' => '0x3'
                                   },
                       'pmpaddr4' => {
                                       'exists' => 'false'
                                     },
                       'pmpcfg2' => {
                                      'exists' => 'false'
                                    },
                       'mcounteren' => {
                                         'exists' => 'false'
                                       },
                       'meicidpl' => {
                                       'mask' => '0xf',
                                       'exists' => 'true',
                                       'comment' => 'External interrupt claim id priority level.',
                                       'number' => '0xbcb',
                                       'reset' => '0x0'
                                     },
                       'time' => {
                                   'exists' => 'false'
                                 },
                       'mie' => {
                                  'reset' => '0x0',
                                  'mask' => '0x70000888',
                                  'exists' => 'true'
                                },
                       'pmpaddr9' => {
                                       'exists' => 'false'
                                     },
                       'mimpid' => {
                                     'reset' => '0x4',
                                     'exists' => 'true',
                                     'mask' => '0x0'
                                   },
                       'mhpmevent5' => {
                                         'reset' => '0x0',
                                         'exists' => 'true',
                                         'mask' => '0xffffffff'
                                       },
                       'dicago' => {
                                     'exists' => 'true',
                                     'debug' => 'true',
                                     'number' => '0x7cb',
                                     'reset' => '0x0',
                                     'mask' => '0x0',
                                     'comment' => 'Cache diagnostics.'
                                   },
                       'pmpaddr10' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr3' => {
                                       'exists' => 'false'
                                     },
                       'mstatus' => {
                                      'mask' => '0x88',
                                      'exists' => 'true',
                                      'reset' => '0x1800'
                                    },
                       'pmpaddr11' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr1' => {
                                       'exists' => 'false'
                                     },
                       'mfdhs' => {
                                    'exists' => 'true',
                                    'comment' => 'Force Debug Halt Status',
                                    'mask' => '0x00000003',
                                    'number' => '0x7cf',
                                    'reset' => '0x0'
                                  },
                       'mhpmcounter6h' => {
                                            'mask' => '0xffffffff',
                                            'exists' => 'true',
                                            'reset' => '0x0'
                                          },
                       'mitcnt0' => {
                                      'exists' => 'true',
                                      'mask' => '0xffffffff',
                                      'reset' => '0x0',
                                      'number' => '0x7d2'
                                    },
                       'pmpaddr8' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr7' => {
                                       'exists' => 'false'
                                     },
                       'mpmc' => {
                                   'number' => '0x7c6',
                                   'reset' => '0x2',
                                   'mask' => '0x2',
                                   'exists' => 'true'
                                 },
                       'pmpcfg3' => {
                                      'exists' => 'false'
                                    },
                       'pmpaddr12' => {
                                        'exists' => 'false'
                                      },
                       'mhpmcounter5' => {
                                           'reset' => '0x0',
                                           'exists' => 'true',
                                           'mask' => '0xffffffff'
                                         },
                       'mcountinhibit' => {
                                            'reset' => '0x0',
                                            'commnet' => 'Performance counter inhibit. One bit per counter.',
                                            'exists' => 'true',
                                            'poke_mask' => '0x7d',
                                            'mask' => '0x7d'
                                          },
                       'mhpmcounter3h' => {
                                            'mask' => '0xffffffff',
                                            'exists' => 'true',
                                            'reset' => '0x0'
                                          },
                       'mip' => {
                                  'reset' => '0x0',
                                  'mask' => '0x0',
                                  'exists' => 'true',
                                  'poke_mask' => '0x70000888'
                                },
                       'instret' => {
                                      'exists' => 'false'
                                    },
                       'mscause' => {
                                      'mask' => '0x0000000f',
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'number' => '0x7ff'
                                    },
                       'mhpmcounter4' => {
                                           'exists' => 'true',
                                           'mask' => '0xffffffff',
                                           'reset' => '0x0'
                                         },
                       'mitcnt1' => {
                                      'mask' => '0xffffffff',
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'number' => '0x7d5'
                                    },
                       'miccmect' => {
                                       'reset' => '0x0',
                                       'number' => '0x7f1',
                                       'mask' => '0xffffffff',
                                       'exists' => 'true'
                                     },
                       'pmpaddr5' => {
                                       'exists' => 'false'
                                     },
                       'mitctl0' => {
                                      'exists' => 'true',
                                      'mask' => '0x00000007',
                                      'number' => '0x7d4',
                                      'reset' => '0x1'
                                    },
                       'dmst' => {
                                   'reset' => '0x0',
                                   'number' => '0x7c4',
                                   'exists' => 'true',
                                   'debug' => 'true',
                                   'comment' => 'Memory synch trigger: Flush caches in debug mode.',
                                   'mask' => '0x0'
                                 },
                       'mdccmect' => {
                                       'mask' => '0xffffffff',
                                       'exists' => 'true',
                                       'number' => '0x7f2',
                                       'reset' => '0x0'
                                     },
                       'mitbnd0' => {
                                      'exists' => 'true',
                                      'mask' => '0xffffffff',
                                      'number' => '0x7d3',
                                      'reset' => '0xffffffff'
                                    },
                       'mhpmevent6' => {
                                         'reset' => '0x0',
                                         'mask' => '0xffffffff',
                                         'exists' => 'true'
                                       },
                       'misa' => {
                                   'mask' => '0x0',
                                   'exists' => 'true',
                                   'reset' => '0x40001104'
                                 },
                       'pmpcfg0' => {
                                      'exists' => 'false'
                                    },
                       'mhpmcounter4h' => {
                                            'mask' => '0xffffffff',
                                            'exists' => 'true',
                                            'reset' => '0x0'
                                          },
                       'mhpmevent4' => {
                                         'reset' => '0x0',
                                         'exists' => 'true',
                                         'mask' => '0xffffffff'
                                       },
                       'mhartid' => {
                                      'reset' => '0x0',
                                      'mask' => '0x0',
                                      'exists' => 'true',
                                      'poke_mask' => '0xfffffff0'
                                    },
                       'pmpaddr14' => {
                                        'exists' => 'false'
                                      },
                       'pmpcfg1' => {
                                      'exists' => 'false'
                                    },
                       'mhpmcounter6' => {
                                           'exists' => 'true',
                                           'mask' => '0xffffffff',
                                           'reset' => '0x0'
                                         },
                       'micect' => {
                                     'exists' => 'true',
                                     'mask' => '0xffffffff',
                                     'reset' => '0x0',
                                     'number' => '0x7f0'
                                   },
                       'pmpaddr2' => {
                                       'exists' => 'false'
                                     },
                       'mfdht' => {
                                    'number' => '0x7ce',
                                    'shared' => 'true',
                                    'reset' => '0x0',
                                    'exists' => 'true',
                                    'comment' => 'Force Debug Halt Threshold',
                                    'mask' => '0x0000003f'
                                  },
                       'meipt' => {
                                    'mask' => '0xf',
                                    'exists' => 'true',
                                    'comment' => 'External interrupt priority threshold.',
                                    'number' => '0xbc9',
                                    'reset' => '0x0'
                                  },
                       'tselect' => {
                                      'reset' => '0x0',
                                      'exists' => 'true',
                                      'mask' => '0x3'
                                    },
                       'mvendorid' => {
                                        'reset' => '0x45',
                                        'exists' => 'true',
                                        'mask' => '0x0'
                                      },
                       'mrac' => {
                                   'mask' => '0xffffffff',
                                   'comment' => 'Memory region io and cache control.',
                                   'exists' => 'true',
                                   'reset' => '0x0',
                                   'shared' => 'true',
                                   'number' => '0x7c0'
                                 },
                       'mhpmcounter3' => {
                                           'reset' => '0x0',
                                           'exists' => 'true',
                                           'mask' => '0xffffffff'
                                         },
                       'pmpaddr6' => {
                                       'exists' => 'false'
                                     },
                       'mfdc' => {
                                   'exists' => 'true',
                                   'mask' => '0x00071fff',
                                   'number' => '0x7f9',
                                   'reset' => '0x00070040'
                                 },
                       'mhpmcounter5h' => {
                                            'exists' => 'true',
                                            'mask' => '0xffffffff',
                                            'reset' => '0x0'
                                          },
                       'mcpc' => {
                                   'reset' => '0x0',
                                   'number' => '0x7c2',
                                   'mask' => '0x0',
                                   'comment' => 'Core pause',
                                   'exists' => 'true'
                                 },
                       'mitbnd1' => {
                                      'mask' => '0xffffffff',
                                      'exists' => 'true',
                                      'reset' => '0xffffffff',
                                      'number' => '0x7d6'
                                    },
                       'mitctl1' => {
                                      'reset' => '0x1',
                                      'number' => '0x7d7',
                                      'exists' => 'true',
                                      'mask' => '0x0000000f'
                                    },
                       'mhpmevent3' => {
                                         'reset' => '0x0',
                                         'mask' => '0xffffffff',
                                         'exists' => 'true'
                                       }
                     },
            'target' => 'default',
            'bus' => {
                       'dma_bus_id' => '1',
                       'sb_bus_tag' => '1',
                       'lsu_bus_id' => '1',
                       'sb_bus_prty' => '2',
                       'ifu_bus_prty' => '2',
                       'ifu_bus_tag' => '3',
                       'ifu_bus_id' => '1',
                       'bus_prty_default' => '3',
                       'lsu_bus_tag' => 3,
                       'lsu_bus_prty' => '2',
                       'dma_bus_prty' => '2',
                       'sb_bus_id' => '1',
                       'dma_bus_tag' => '1'
                     },
            'triggers' => [
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
                              'poke_mask' => [
                                               '0x081810c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'mask' => [
                                          '0x081810c7',
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
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'mask' => [
                                          '0x081818c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'poke_mask' => [
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
                              'poke_mask' => [
                                               '0x081810c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'mask' => [
                                          '0x081810c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ]
                            }
                          ],
            'xlen' => 32,
            'physical' => '1',
            'core' => {
                        'bitmanip_zba' => 1,
                        'lsu_stbuf_depth' => '4',
                        'bitmanip_zbr' => 0,
                        'div_new' => 1,
                        'iccm_only' => 'derived',
                        'lsu_num_nbload_width' => '2',
                        'dma_buf_depth' => '5',
                        'lsu_num_nbload' => '4',
                        'bitmanip_zbe' => 0,
                        'bitmanip_zbp' => 0,
                        'bitmanip_zbc' => 1,
                        'timer_legal_en' => '1',
                        'div_bit' => '4',
                        'no_iccm_no_icache' => 'derived',
                        'icache_only' => 'derived',
                        'lsu2dma' => 0,
                        'bitmanip_zbf' => 0,
                        'bitmanip_zbs' => 1,
                        'fast_interrupt_redirect' => '1',
                        'bitmanip_zbb' => 1,
                        'fpga_optimize' => 1,
                        'iccm_icache' => 1
                      },
            'testbench' => {
                             'clock_period' => '100',
                             'TOP' => 'tb_top',
                             'sterr_rollback' => '0',
                             'ext_addrwidth' => '32',
                             'RV_TOP' => '`TOP.rvtop',
                             'ext_datawidth' => '64',
                             'build_axi_native' => 1,
                             'lderr_rollback' => '1',
                             'build_axi4' => 1,
                             'CPU_TOP' => '`RV_TOP.swerv',
                             'assert_on' => '',
                             'SDVT_AHB' => '0'
                           },
            'iccm' => {
                        'iccm_enable' => 1,
                        'iccm_bank_bits' => 2,
                        'iccm_size_64' => '',
                        'iccm_bank_index_lo' => 4,
                        'iccm_sadr' => '0xee000000',
                        'iccm_eadr' => '0xee00ffff',
                        'iccm_bank_hi' => 3,
                        'iccm_size' => 64,
                        'iccm_reserved' => '0x1000',
                        'iccm_rows' => '4096',
                        'iccm_num_banks_4' => '',
                        'iccm_offset' => '0xe000000',
                        'iccm_bits' => 16,
                        'iccm_region' => '0xe',
                        'iccm_num_banks' => '4',
                        'iccm_index_bits' => 12,
                        'iccm_data_cell' => 'ram_4096x39'
                      },
            'memmap' => {
                          'unused_region4' => '0x40000000',
                          'unused_region8' => '0x00000000',
                          'unused_region6' => '0x20000000',
                          'unused_region0' => '0x90000000',
                          'unused_region3' => '0x50000000',
                          'unused_region1' => '0x70000000',
                          'external_data_1' => '0xb0000000',
                          'consoleio' => '0xd0580000',
                          'unused_region2' => '0x60000000',
                          'debug_sb_mem' => '0xa0580000',
                          'unused_region7' => '0x10000000',
                          'serialio' => '0xd0580000',
                          'unused_region5' => '0x30000000',
                          'external_data' => '0xc0580000'
                        },
            'even_odd_trigger_chains' => 'true',
            'reset_vec' => '0x80000000',
            'num_mmode_perf_regs' => '4',
            'regwidth' => '32',
            'tec_rv_icg' => 'clockhdr',
            'harts' => 1,
            'dccm' => {
                        'dccm_byte_width' => '4',
                        'dccm_enable' => '1',
                        'dccm_bank_bits' => 2,
                        'dccm_size_64' => '',
                        'dccm_data_width' => 32,
                        'lsu_sb_bits' => 16,
                        'dccm_ecc_width' => 7,
                        'dccm_sadr' => '0xf0040000',
                        'dccm_eadr' => '0xf004ffff',
                        'dccm_width_bits' => 2,
                        'dccm_reserved' => '0x1400',
                        'dccm_size' => 64,
                        'dccm_fdata_width' => 39,
                        'dccm_num_banks_4' => '',
                        'dccm_offset' => '0x40000',
                        'dccm_rows' => '4096',
                        'dccm_bits' => 16,
                        'dccm_num_banks' => '4',
                        'dccm_region' => '0xf',
                        'dccm_index_bits' => 12,
                        'dccm_data_cell' => 'ram_4096x39'
                      },
            'bht' => {
                       'bht_hash_string' => '{hashin[8+1:2]^ghr[8-1:0]}// cf2',
                       'bht_addr_hi' => 9,
                       'bht_ghr_size' => 8,
                       'bht_size' => 512,
                       'bht_array_depth' => 256,
                       'bht_addr_lo' => '2',
                       'bht_ghr_hash_1' => '',
                       'bht_ghr_range' => '7:0'
                     },
            'pic' => {
                       'pic_meipl_count' => 31,
                       'pic_meigwclr_count' => 31,
                       'pic_meigwctrl_mask' => '0x3',
                       'pic_total_int' => 31,
                       'pic_meie_count' => 31,
                       'pic_meip_mask' => '0x0',
                       'pic_meigwctrl_count' => 31,
                       'pic_mpiccfg_mask' => '0x1',
                       'pic_meigwclr_mask' => '0x0',
                       'pic_meip_offset' => '0x1000',
                       'pic_meipl_mask' => '0xf',
                       'pic_mpiccfg_offset' => '0x3000',
                       'pic_total_int_plus1' => 32,
                       'pic_meigwclr_offset' => '0x5000',
                       'pic_meipl_offset' => '0x0000',
                       'pic_mpiccfg_count' => 1,
                       'pic_size' => 32,
                       'pic_meigwctrl_offset' => '0x4000',
                       'pic_region' => '0xf',
                       'pic_offset' => '0xc0000',
                       'pic_bits' => 15,
                       'pic_int_words' => 1,
                       'pic_base_addr' => '0xf00c0000',
                       'pic_meipt_count' => 31,
                       'pic_meie_mask' => '0x1',
                       'pic_meipt_offset' => '0x3004',
                       'pic_meip_count' => 1,
                       'pic_meipt_mask' => '0x0',
                       'pic_meie_offset' => '0x2000'
                     },
            'max_mmode_perf_event' => '516',
            'retstack' => {
                            'ret_stack_size' => '8'
                          },
            'numiregs' => '32',
            'config_key' => '32\'hdeadbeef'
          );
1;
