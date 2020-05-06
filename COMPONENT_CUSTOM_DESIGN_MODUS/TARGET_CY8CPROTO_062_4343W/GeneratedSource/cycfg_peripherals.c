/*******************************************************************************
* File Name: cycfg_peripherals.c
*
* Description:
* Peripheral Hardware Block configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.1.0.1266
* psoc6pdl 1.5.1.2655
* personalities_2.0 2.0.0.0
* udd 1.2.0.136
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_peripherals.h"

const cy_stc_pdm_pcm_config_t CYBSP_PDM_PCM_config = 
{
	.clkDiv = CY_PDM_PCM_CLK_DIV_1_4,
	.mclkDiv = CY_PDM_PCM_CLK_DIV_BYPASS,
	.ckoDiv = 3U,
	.ckoDelay = 0U,
	.sincDecRate = 64U,
	.chanSelect = CY_PDM_PCM_OUT_CHAN_LEFT,
	.chanSwapEnable = false,
	.highPassFilterGain = 1U,
	.highPassDisable = false,
	.softMuteCycles = CY_PDM_PCM_SOFT_MUTE_CYCLES_96,
	.softMuteFineGain = 1UL,
	.softMuteEnable = false,
	.wordLen = CY_PDM_PCM_WLEN_16_BIT,
	.signExtension = true,
	.gainLeft = CY_PDM_PCM_BYPASS,
	.gainRight = CY_PDM_PCM_BYPASS,
	.rxFifoTriggerLevel = 128U,
	.dmaTriggerEnable = false,
	.interruptMask = CY_PDM_PCM_INTR_RX_TRIGGER,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_PDM_PCM_obj = 
	{
		.type = CYHAL_RSC_PDM,
		.block_num = 0U,
		.channel_num = 0U,
	};
#endif //defined (CY_USING_HAL)
cy_stc_csd_context_t cy_csd_0_context = 
{
	.lockKey = CY_CSD_NONE_KEY,
};


void init_cycfg_peripherals(void)
{
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_PDM_PCM_obj);
#endif //defined (CY_USING_HAL)

	Cy_SysClk_PeriphAssignDivider(PCLK_CSD_CLOCK, CY_SYSCLK_DIV_8_BIT, 0U);
}
