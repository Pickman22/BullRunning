
/**
  ******************************************************************************
  * @file    mc_parameters.c
  * @author  Motor Control SDK Team, ST Microelectronics
  * @brief   This file provides definitions of HW parameters specific to the 
  *          configuration of the subsystem.
  *
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "parameters_conversion.h"

#include "r3_1_f30x_pwm_curr_fdbk.h"
 
 
 
 
 

  #define MAX_TWAIT 0                 /* Dummy value for single drive */
  #define FREQ_RATIO 1                /* Dummy value for single drive */
  #define FREQ_RELATION HIGHEST_FREQ  /* Dummy value for single drive */

/**
  * @brief  Current sensor parameters Motor 1 - three shunt 1 ADC (STM32F302x8)
  */
const R3_1_F30XParams_t R3_1_F30XParamsM1 =
{
/* Current reading A/D Conversions initialization -----------------------------*/
  .ADCx = ADC1,     
  .bIaChannel = MC_ADC_CHANNEL_1,                 
  .bIbChannel = MC_ADC_CHANNEL_7,                 
  .bIcChannel = MC_ADC_CHANNEL_6,                 
                                        
/* PWM generation parameters --------------------------------------------------*/
  .bRepetitionCounter = REP_COUNTER,                       
  .hTafter            = TW_AFTER,                          
  .hTbefore           = TW_BEFORE_R3_1,                    
  .TIMx               = PWM_TIM1,               
                                     
/* PWM Driving signals initialization ----------------------------------------*/
  .LowSideOutputs = (LowSideOutputsFunction_t)LOW_SIDE_SIGNALS_ENABLING, 
  .pwm_en_u_port = M1_PWM_EN_U_GPIO_Port,                                 
  .pwm_en_u_pin  = M1_PWM_EN_U_Pin,                    
  .pwm_en_v_port = M1_PWM_EN_V_GPIO_Port,                   
  .pwm_en_v_pin  = M1_PWM_EN_V_Pin,                    
  .pwm_en_w_port = M1_PWM_EN_W_GPIO_Port,                   
  .pwm_en_w_pin  = M1_PWM_EN_W_Pin,   

/* Emergency input (BKIN2) signal initialization -----------------------------*/
  .bBKIN2Mode = EXT_MODE,                        
                                     
/* Internal COMP settings ----------------------------------------------------*/
  .wCompOCPASelection     = MC_NULL,
  .bCompOCPAInvInput_MODE = MC_NULL,                          
  .wCompOCPBSelection     = MC_NULL,      
  .bCompOCPBInvInput_MODE = MC_NULL,              
  .wCompOCPCSelection     = MC_NULL,        
  .bCompOCPCInvInput_MODE = MC_NULL,                                         

  .wCompOVPSelection      = MC_NULL,       
  .bCompOVPInvInput_MODE  = MC_NULL,
                                      
/* DAC settings --------------------------------------------------------------*/
  .hDAC_OCP_Threshold = 23830,                            
  .hDAC_OVP_Threshold =  23830,                            
                                     
/* Regular conversion --------------------------------------------------------*/
  .regconvADCx =  ADC1                         
                                     
};
   

/******************* (C) COPYRIGHT 2018 STMicroelectronics *****END OF FILE****/
