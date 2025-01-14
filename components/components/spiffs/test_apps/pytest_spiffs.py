# SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
# SPDX-License-Identifier: CC0-1.0

import pytest
from pytest_embedded import Dut


@pytest.mark.esp32
@pytest.mark.esp32c3
@pytest.mark.generic
@pytest.mark.parametrize('config', [
    'default',
    'release',
], indirect=True)
def test_spiffs_generic(dut: Dut) -> None:
    dut.expect_exact('Press ENTER to see the list of tests')
    dut.write('')
    dut.expect_exact('Enter test for running.')
    dut.write('*')
    dut.expect_unity_test_output(timeout=120)


@pytest.mark.esp32s3
@pytest.mark.quad_psram
@pytest.mark.parametrize('config', [
    'psram',
], indirect=True)
def test_spiffs_psram(dut: Dut) -> None:
    dut.expect_exact('Press ENTER to see the list of tests')
    dut.write('')
    dut.expect_exact('Enter test for running.')
    dut.write('*')
    dut.expect_unity_test_output(timeout=120)
