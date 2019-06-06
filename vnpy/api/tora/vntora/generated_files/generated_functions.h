#pragma once


#include <pybind11/pybind11.h>
#include <autocxxpy/autocxxpy.hpp>

#include "TORATstpMdApi.h"
#include "TORATstpTraderApi.h"
#include "TORATstpUserApiDataType.h"
#include "TORATstpUserApiStruct.h"
#include "custom/custom_wrappers.hpp"


void generate_vntora(pybind11::module & parent);
void generate_class_CTORATstpFensUserInfoField(pybind11::object & parent);
void generate_class_CTORATstpEffectPriceMarketDataField(pybind11::object & parent);
void generate_class_CTORATstpEffectVolumeMarketDataField(pybind11::object & parent);
void generate_class_CTORATstpFundsFlowMarketDataField(pybind11::object & parent);
void generate_class_CTORATstpReqUserLoginField(pybind11::object & parent);
void generate_class_CTORATstpRspUserLoginField(pybind11::object & parent);
void generate_class_CTORATstpRspInfoField(pybind11::object & parent);
void generate_class_CTORATstpUserLogoutField(pybind11::object & parent);
void generate_class_CTORATstpForceUserLogoutField(pybind11::object & parent);
void generate_class_CTORATstpUserPasswordUpdateField(pybind11::object & parent);
void generate_class_CTORATstpReqInputDeviceSerialField(pybind11::object & parent);
void generate_class_CTORATstpRspInputDeviceSerialField(pybind11::object & parent);
void generate_class_CTORATstpActivateUserField(pybind11::object & parent);
void generate_class_CTORATstpVerifyUserPasswordField(pybind11::object & parent);
void generate_class_CTORATstpInputOrderField(pybind11::object & parent);
void generate_class_CTORATstpOrderField(pybind11::object & parent);
void generate_class_CTORATstpUserRefField(pybind11::object & parent);
void generate_class_CTORATstpInputOrderActionField(pybind11::object & parent);
void generate_class_CTORATstpOrderActionField(pybind11::object & parent);
void generate_class_CTORATstpTradeField(pybind11::object & parent);
void generate_class_CTORATstpMarketStatusField(pybind11::object & parent);
void generate_class_CTORATstpInputCondOrderField(pybind11::object & parent);
void generate_class_CTORATstpConditionOrderField(pybind11::object & parent);
void generate_class_CTORATstpInputCondOrderActionField(pybind11::object & parent);
void generate_class_CTORATstpReqInquiryJZFundField(pybind11::object & parent);
void generate_class_CTORATstpRspInquiryJZFundField(pybind11::object & parent);
void generate_class_CTORATstpInputTransferFundField(pybind11::object & parent);
void generate_class_CTORATstpInputTransferPositionField(pybind11::object & parent);
void generate_class_CTORATstpTransferFundField(pybind11::object & parent);
void generate_class_CTORATstpTransferPositionField(pybind11::object & parent);
void generate_class_CTORATstpSpecificSecurityField(pybind11::object & parent);
void generate_class_CTORATstpInputTransferCollateralField(pybind11::object & parent);
void generate_class_CTORATstpReqInquiryBankAccountFundField(pybind11::object & parent);
void generate_class_CTORATstpRspInquiryBankAccountFundField(pybind11::object & parent);
void generate_class_CTORATstpLev2MarketDataField(pybind11::object & parent);
void generate_class_CTORATstpLev2IndexField(pybind11::object & parent);
void generate_class_CTORATstpLev2TransactionField(pybind11::object & parent);
void generate_class_CTORATstpLev2OrderDetailField(pybind11::object & parent);
void generate_class_CTORATstpUploadTradeDataField(pybind11::object & parent);
void generate_class_CTORATstpInputDesignationRegistrationField(pybind11::object & parent);
void generate_class_CTORATstpInputCustodyTransferField(pybind11::object & parent);
void generate_class_CTORATstpInquiryTradeConcentrationField(pybind11::object & parent);
void generate_class_CTORATstpInquiryFileOrderField(pybind11::object & parent);
void generate_class_CTORATstpFileOrderField(pybind11::object & parent);
void generate_class_CTORATstpQryRspInfoField(pybind11::object & parent);
void generate_class_CTORATstpReviewFileOrderField(pybind11::object & parent);
void generate_class_CTORATstpCommitInfoField(pybind11::object & parent);
void generate_class_CTORATstpReqInsTradingNoticeField(pybind11::object & parent);
void generate_class_CTORATstpTradingNoticeField(pybind11::object & parent);
void generate_class_CTORATstpLoadFileOrderField(pybind11::object & parent);
void generate_class_CTORATstpFileOrderInfoField(pybind11::object & parent);
void generate_class_CTORATstpReqInquiryMaxOrderVolumeField(pybind11::object & parent);
void generate_class_CTORATstpRspInquiryMaxOrderVolumeField(pybind11::object & parent);
void generate_class_CTORATstpPeripheryPositionTransferDetailField(pybind11::object & parent);
void generate_class_CTORATstpQryHistoryOrderField(pybind11::object & parent);
void generate_class_CTORATstpQryHistoryRspInfoField(pybind11::object & parent);
void generate_class_CTORATstpHistoryOrderField(pybind11::object & parent);
void generate_class_CTORATstpQryHistoryTradeField(pybind11::object & parent);
void generate_class_CTORATstpHistoryTradeField(pybind11::object & parent);
void generate_class_CTORATstpQryExchangeField(pybind11::object & parent);
void generate_class_CTORATstpExchangeField(pybind11::object & parent);
void generate_class_CTORATstpQryPBUField(pybind11::object & parent);
void generate_class_CTORATstpPBUField(pybind11::object & parent);
void generate_class_CTORATstpQryMarketDataField(pybind11::object & parent);
void generate_class_CTORATstpMarketDataField(pybind11::object & parent);
void generate_class_CTORATstpQrySecurityField(pybind11::object & parent);
void generate_class_CTORATstpSecurityField(pybind11::object & parent);
void generate_class_CTORATstpQryETFFileField(pybind11::object & parent);
void generate_class_CTORATstpETFFileField(pybind11::object & parent);
void generate_class_CTORATstpQryETFBasketField(pybind11::object & parent);
void generate_class_CTORATstpETFBasketField(pybind11::object & parent);
void generate_class_CTORATstpQryDepartmentInfoField(pybind11::object & parent);
void generate_class_CTORATstpDepartmentInfoField(pybind11::object & parent);
void generate_class_CTORATstpQryIPOInfoField(pybind11::object & parent);
void generate_class_CTORATstpIPOInfoField(pybind11::object & parent);
void generate_class_CTORATstpQryBrokerUserFunctionField(pybind11::object & parent);
void generate_class_CTORATstpBrokerUserFunctionField(pybind11::object & parent);
void generate_class_CTORATstpQryBUProxyField(pybind11::object & parent);
void generate_class_CTORATstpBUProxyField(pybind11::object & parent);
void generate_class_CTORATstpQryUserField(pybind11::object & parent);
void generate_class_CTORATstpUserField(pybind11::object & parent);
void generate_class_CTORATstpQryInvestorField(pybind11::object & parent);
void generate_class_CTORATstpInvestorField(pybind11::object & parent);
void generate_class_CTORATstpQryShareholderAccountField(pybind11::object & parent);
void generate_class_CTORATstpShareholderAccountField(pybind11::object & parent);
void generate_class_CTORATstpQryBusinessUnitField(pybind11::object & parent);
void generate_class_CTORATstpBusinessUnitField(pybind11::object & parent);
void generate_class_CTORATstpQryBusinessUnitAndTradingAcctField(pybind11::object & parent);
void generate_class_CTORATstpBusinessUnitAndTradingAcctField(pybind11::object & parent);
void generate_class_CTORATstpQryOrderField(pybind11::object & parent);
void generate_class_CTORATstpQryOrderActionField(pybind11::object & parent);
void generate_class_CTORATstpQryTradeField(pybind11::object & parent);
void generate_class_CTORATstpQryTradingAccountField(pybind11::object & parent);
void generate_class_CTORATstpTradingAccountField(pybind11::object & parent);
void generate_class_CTORATstpQryPositionField(pybind11::object & parent);
void generate_class_CTORATstpPositionField(pybind11::object & parent);
void generate_class_CTORATstpQryTradingFeeField(pybind11::object & parent);
void generate_class_CTORATstpTradingFeeField(pybind11::object & parent);
void generate_class_CTORATstpQryInvestorTradingFeeField(pybind11::object & parent);
void generate_class_CTORATstpInvestorTradingFeeField(pybind11::object & parent);
void generate_class_CTORATstpQryIPOQuotaField(pybind11::object & parent);
void generate_class_CTORATstpIPOQuotaField(pybind11::object & parent);
void generate_class_CTORATstpQryMarketField(pybind11::object & parent);
void generate_class_CTORATstpMarketField(pybind11::object & parent);
void generate_class_CTORATstpQryOrderFundDetailField(pybind11::object & parent);
void generate_class_CTORATstpOrderFundDetailField(pybind11::object & parent);
void generate_class_CTORATstpQryFundTransferDetailField(pybind11::object & parent);
void generate_class_CTORATstpFundTransferDetailField(pybind11::object & parent);
void generate_class_CTORATstpQryPositionTransferDetailField(pybind11::object & parent);
void generate_class_CTORATstpPositionTransferDetailField(pybind11::object & parent);
void generate_class_CTORATstpQryPledgePositionField(pybind11::object & parent);
void generate_class_CTORATstpPledgePositionField(pybind11::object & parent);
void generate_class_CTORATstpQryPledgeInfoField(pybind11::object & parent);
void generate_class_CTORATstpPledgeInfoField(pybind11::object & parent);
void generate_class_CTORATstpQryConversionBondInfoField(pybind11::object & parent);
void generate_class_CTORATstpConversionBondInfoField(pybind11::object & parent);
void generate_class_CTORATstpQryBondPutbackInfoField(pybind11::object & parent);
void generate_class_CTORATstpBondPutbackInfoField(pybind11::object & parent);
void generate_class_CTORATstpQryStandardBondPositionField(pybind11::object & parent);
void generate_class_CTORATstpStandardBondPositionField(pybind11::object & parent);
void generate_class_CTORATstpQryDesignationRegistrationField(pybind11::object & parent);
void generate_class_CTORATstpDesignationRegistrationField(pybind11::object & parent);
void generate_class_CTORATstpQryCustodyTransferField(pybind11::object & parent);
void generate_class_CTORATstpCustodyTransferField(pybind11::object & parent);
void generate_class_CTORATstpQrySpecialMarketDataField(pybind11::object & parent);
void generate_class_CTORATstpSpecialMarketDataField(pybind11::object & parent);
void generate_class_CTORATstpQryPrematurityRepoOrderField(pybind11::object & parent);
void generate_class_CTORATstpPrematurityRepoOrderField(pybind11::object & parent);
void generate_class_CTORATstpQryShareholderParamField(pybind11::object & parent);
void generate_class_CTORATstpShareholderParamField(pybind11::object & parent);
void generate_class_CTORATstpQryPeripheryPositionTransferDetailField(pybind11::object & parent);
void generate_class_CTORATstpQryInvestorCondOrderLimitParamField(pybind11::object & parent);
void generate_class_CTORATstpInvestorCondOrderLimitParamField(pybind11::object & parent);
void generate_class_CTORATstpQryCondOrderField(pybind11::object & parent);
void generate_class_CTORATstpCondOrderField(pybind11::object & parent);
void generate_class_CTORATstpQryCondOrderActionField(pybind11::object & parent);
void generate_class_CTORATstpCondOrderActionField(pybind11::object & parent);
void generate_class_CTORATstpQryBrokerUserRoleField(pybind11::object & parent);
void generate_class_CTORATstpBrokerUserRoleField(pybind11::object & parent);
void generate_class_CTORATstpQryBrokerUserRoleAssignmentField(pybind11::object & parent);
void generate_class_CTORATstpBrokerUserRoleAssignmentField(pybind11::object & parent);
void generate_class_CTORATstpQryTradingNoticeField(pybind11::object & parent);
void generate_class_CTORATstpQryIPONumberResultField(pybind11::object & parent);
void generate_class_CTORATstpIPONumberResultField(pybind11::object & parent);
void generate_class_CTORATstpQryIPOMatchNumberResultField(pybind11::object & parent);
void generate_class_CTORATstpIPOMatchNumberResultField(pybind11::object & parent);
void generate_class_CTORATstpMdSpi(pybind11::object & parent);
void generate_class_CTORATstpMdApi(pybind11::object & parent);
void generate_class_CTORATstpTraderSpi(pybind11::object & parent);
void generate_class_CTORATstpTraderApi(pybind11::object & parent);
void generate_enum_TORA_TE_RESUME_TYPE(pybind11::object & parent);
void generate_caster_(pybind11::object & parent);

