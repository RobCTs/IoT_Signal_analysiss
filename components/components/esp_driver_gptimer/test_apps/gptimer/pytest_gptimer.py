# SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
# SPDX-License-Identifier: CC0-1.0

import pytest
from pytest_embedded import Dut


@pytest.mark.supported_targets
@pytest.mark.generic
@pytest.mark.parametrize(
    'config',
    [
        'iram_safe',
        'release',
    ],
    indirect=True,
)
def test_gptimer(dut: Dut) -> None:
    dut.run_all_single_board_cases()


@pytest.mark.esp32c2
@pytest.mark.generic
@pytest.mark.xtal_26mhz
@pytest.mark.parametrize(
    'config, baud',
    [
        ('esp32c2_xtal26m', '74880'),
    ],
    indirect=True,
)
def test_gptimer_esp32c2_xtal_26mhz(dut: Dut) -> None:
    dut.run_all_single_board_cases()
