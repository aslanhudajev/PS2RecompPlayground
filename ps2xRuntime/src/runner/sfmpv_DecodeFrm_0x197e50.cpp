#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_DecodeFrm
// Address: 0x197e50 - 0x198038
void sfmpv_DecodeFrm_0x197e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_DecodeFrm");


    ctx->pc = 0x197e50u;

    // 0x197e50: 0x27bdff20
    ctx->pc = 0x197e50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x197e54: 0xffb30070
    ctx->pc = 0x197e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x197e58: 0x27a70030
    ctx->pc = 0x197e58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
    // 0x197e5c: 0x80982d
    ctx->pc = 0x197e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e60: 0xffbe00c0
    ctx->pc = 0x197e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x197e64: 0x26623740
    ctx->pc = 0x197e64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 14144));
    // 0x197e68: 0xffb600a0
    ctx->pc = 0x197e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x197e6c: 0xffb50090
    ctx->pc = 0x197e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x197e70: 0x26763784
    ctx->pc = 0x197e70u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 19), 14212));
    // 0x197e74: 0xffb40080
    ctx->pc = 0x197e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x197e78: 0xc0a82d
    ctx->pc = 0x197e78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e7c: 0xffb00040
    ctx->pc = 0x197e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x197e80: 0x26740980
    ctx->pc = 0x197e80u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 19), 2432));
    // 0x197e84: 0xffbf00d0
    ctx->pc = 0x197e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x197e88: 0xa0802d
    ctx->pc = 0x197e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e8c: 0xffb20060
    ctx->pc = 0x197e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x197e90: 0x267e0940
    ctx->pc = 0x197e90u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 19), 2368));
    // 0x197e94: 0xffb10050
    ctx->pc = 0x197e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x197e98: 0xafa20034
    ctx->pc = 0x197e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x197e9c: 0x2c0282d
    ctx->pc = 0x197e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ea0: 0xffb700b0
    ctx->pc = 0x197ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x197ea4: 0x3a0302d
    ctx->pc = 0x197ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ea8: 0xc06600e
    ctx->pc = 0x197EA8u;
    SET_GPR_U32(ctx, 31, 0x197EB0u);
    ctx->pc = 0x197EACu;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 19), 14144)));
    ctx->pc = 0x198038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_SetFrmPara_0x198038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EB0u; }
        else if (ctx->pc != 0x197EB0u) { ctx->pc = 0x197EB0u; }
    }
    if (ctx->pc != 0x197EB0u) { return; }
    ctx->pc = 0x197EB0u;
    // 0x197eb0: 0x14400055
    ctx->pc = 0x197EB0u;
    {
        const bool branch_taken_0x197eb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x197EB4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197eb0) {
            ctx->pc = 0x198008u;
            goto label_198008;
        }
    }
    ctx->pc = 0x197EB8u;
    // 0x197eb8: 0xc0660a8
    ctx->pc = 0x197EB8u;
    SET_GPR_U32(ctx, 31, 0x197EC0u);
    ctx->pc = 0x197EBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1982A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_SetStartTtu_0x1982a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EC0u; }
        else if (ctx->pc != 0x197EC0u) { ctx->pc = 0x197EC0u; }
    }
    if (ctx->pc != 0x197EC0u) { return; }
    ctx->pc = 0x197EC0u;
    // 0x197ec0: 0xc0683dc
    ctx->pc = 0x197EC0u;
    SET_GPR_U32(ctx, 31, 0x197EC8u);
    ctx->pc = 0x1A0F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_GetTmr_0x1a0f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EC8u; }
        else if (ctx->pc != 0x197EC8u) { ctx->pc = 0x197EC8u; }
    }
    if (ctx->pc != 0x197EC8u) { return; }
    ctx->pc = 0x197EC8u;
    // 0x197ec8: 0x40902d
    ctx->pc = 0x197ec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ecc: 0x200282d
    ctx->pc = 0x197eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ed0: 0x260402d
    ctx->pc = 0x197ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ed4: 0x2e0202d
    ctx->pc = 0x197ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ed8: 0x2a0302d
    ctx->pc = 0x197ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197edc: 0xc06692c
    ctx->pc = 0x197EDCu;
    SET_GPR_U32(ctx, 31, 0x197EE4u);
    ctx->pc = 0x197EE0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_DecodeFrm_0x19a4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EE4u; }
        else if (ctx->pc != 0x197EE4u) { ctx->pc = 0x197EE4u; }
    }
    if (ctx->pc != 0x197EE4u) { return; }
    ctx->pc = 0x197EE4u;
    // 0x197ee4: 0x8ed00018
    ctx->pc = 0x197ee4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x197ee8: 0x40882d
    ctx->pc = 0x197ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197eec: 0x108140
    ctx->pc = 0x197eecu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 5));
    // 0x197ef0: 0x26106768
    ctx->pc = 0x197ef0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 26472));
    // 0x197ef4: 0xc0683dc
    ctx->pc = 0x197EF4u;
    SET_GPR_U32(ctx, 31, 0x197EFCu);
    ctx->pc = 0x197EF8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->pc = 0x1A0F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_GetTmr_0x1a0f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EFCu; }
        else if (ctx->pc != 0x197EFCu) { ctx->pc = 0x197EFCu; }
    }
    if (ctx->pc != 0x197EFCu) { return; }
    ctx->pc = 0x197EFCu;
    // 0x197efc: 0x200202d
    ctx->pc = 0x197efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f00: 0xc067b22
    ctx->pc = 0x197F00u;
    SET_GPR_U32(ctx, 31, 0x197F08u);
    ctx->pc = 0x197F04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    ctx->pc = 0x19EC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTMR_AddTsum_0x19ec88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F08u; }
        else if (ctx->pc != 0x197F08u) { ctx->pc = 0x197F08u; }
    }
    if (ctx->pc != 0x197F08u) { return; }
    ctx->pc = 0x197F08u;
    // 0x197f08: 0x8fa6002c
    ctx->pc = 0x197f08u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x197f0c: 0x3c07ff00
    ctx->pc = 0x197f0cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)65280 << 16));
    // 0x197f10: 0x8fa80028
    ctx->pc = 0x197f10u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x197f14: 0x220282d
    ctx->pc = 0x197f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f18: 0x8e83000c
    ctx->pc = 0x197f18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x197f1c: 0x260202d
    ctx->pc = 0x197f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f20: 0x8e820010
    ctx->pc = 0x197f20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x197f24: 0x34e70f06
    ctx->pc = 0x197f24u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 3846));
    // 0x197f28: 0x681821
    ctx->pc = 0x197f28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x197f2c: 0x461021
    ctx->pc = 0x197f2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x197f30: 0xae83000c
    ctx->pc = 0x197f30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x197f34: 0xae820010
    ctx->pc = 0x197f34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x197f38: 0xc065a64
    ctx->pc = 0x197F38u;
    SET_GPR_U32(ctx, 31, 0x197F40u);
    ctx->pc = 0x197F3Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->pc = 0x196990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ChkMpvErr_0x196990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F40u; }
        else if (ctx->pc != 0x197F40u) { ctx->pc = 0x197F40u; }
    }
    if (ctx->pc != 0x197F40u) { return; }
    ctx->pc = 0x197F40u;
    // 0x197f40: 0x40802d
    ctx->pc = 0x197f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f44: 0x52000005
    ctx->pc = 0x197F44u;
    {
        const bool branch_taken_0x197f44 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x197f44) {
            ctx->pc = 0x197F48u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->pc = 0x197F5Cu;
            goto label_197f5c;
        }
    }
    ctx->pc = 0x197F4Cu;
    // 0x197f4c: 0xc0663e6
    ctx->pc = 0x197F4Cu;
    SET_GPR_U32(ctx, 31, 0x197F54u);
    ctx->pc = 0x197F50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x198F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_FreeFrm_0x198f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F54u; }
        else if (ctx->pc != 0x197F54u) { ctx->pc = 0x197F54u; }
    }
    if (ctx->pc != 0x197F54u) { return; }
    ctx->pc = 0x197F54u;
    // 0x197f54: 0x1000002c
    ctx->pc = 0x197F54u;
    {
        const bool branch_taken_0x197f54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197F58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197f54) {
            ctx->pc = 0x198008u;
            goto label_198008;
        }
    }
    ctx->pc = 0x197F5Cu;
label_197f5c:
    // 0x197f5c: 0x18400027
    ctx->pc = 0x197F5Cu;
    {
        const bool branch_taken_0x197f5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x197F60u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197f5c) {
            ctx->pc = 0x197FFCu;
            goto label_197ffc;
        }
    }
    ctx->pc = 0x197F64u;
    // 0x197f64: 0xc066398
    ctx->pc = 0x197F64u;
    SET_GPR_U32(ctx, 31, 0x197F6Cu);
    ctx->pc = 0x197F68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_SetGopStat_0x198e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F6Cu; }
        else if (ctx->pc != 0x197F6Cu) { ctx->pc = 0x197F6Cu; }
    }
    if (ctx->pc != 0x197F6Cu) { return; }
    ctx->pc = 0x197F6Cu;
    // 0x197f6c: 0x8fa50030
    ctx->pc = 0x197f6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197f70: 0xc0660ea
    ctx->pc = 0x197F70u;
    SET_GPR_U32(ctx, 31, 0x197F78u);
    ctx->pc = 0x197F74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1983A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_SetFrmTime_0x1983a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F78u; }
        else if (ctx->pc != 0x197F78u) { ctx->pc = 0x197F78u; }
    }
    if (ctx->pc != 0x197F78u) { return; }
    ctx->pc = 0x197F78u;
    // 0x197f78: 0x8fa20034
    ctx->pc = 0x197f78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x197f7c: 0x24050003
    ctx->pc = 0x197f7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x197f80: 0x8fa60030
    ctx->pc = 0x197f80u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197f84: 0x8c430040
    ctx->pc = 0x197f84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x197f88: 0x8e640038
    ctx->pc = 0x197f88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x197f8c: 0xacc30018
    ctx->pc = 0x197f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x197f90: 0x8fa20028
    ctx->pc = 0x197f90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x197f94: 0xacc20010
    ctx->pc = 0x197f94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x197f98: 0x8fa3002c
    ctx->pc = 0x197f98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x197f9c: 0x1485000a
    ctx->pc = 0x197F9Cu;
    {
        const bool branch_taken_0x197f9c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 5));
        ctx->pc = 0x197FA0u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x197f9c) {
            ctx->pc = 0x197FC8u;
            goto label_197fc8;
        }
    }
    ctx->pc = 0x197FA4u;
    // 0x197fa4: 0x8ec20018
    ctx->pc = 0x197fa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x197fa8: 0x2442ffff
    ctx->pc = 0x197fa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x197fac: 0x2c420002
    ctx->pc = 0x197facu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x197fb0: 0x10400005
    ctx->pc = 0x197FB0u;
    {
        const bool branch_taken_0x197fb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x197fb0) {
            ctx->pc = 0x197FC8u;
            goto label_197fc8;
        }
    }
    ctx->pc = 0x197FB8u;
    // 0x197fb8: 0xc0663f0
    ctx->pc = 0x197FB8u;
    SET_GPR_U32(ctx, 31, 0x197FC0u);
    ctx->pc = 0x197FBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_RefStbyFrm_0x198fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FC0u; }
        else if (ctx->pc != 0x197FC0u) { ctx->pc = 0x197FC0u; }
    }
    if (ctx->pc != 0x197FC0u) { return; }
    ctx->pc = 0x197FC0u;
    // 0x197fc0: 0x10000004
    ctx->pc = 0x197FC0u;
    {
        const bool branch_taken_0x197fc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197FC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197fc0) {
            ctx->pc = 0x197FD4u;
            goto label_197fd4;
        }
    }
    ctx->pc = 0x197FC8u;
label_197fc8:
    // 0x197fc8: 0xc0663ea
    ctx->pc = 0x197FC8u;
    SET_GPR_U32(ctx, 31, 0x197FD0u);
    ctx->pc = 0x197FCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198FA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_StbyFrm_0x198fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FD0u; }
        else if (ctx->pc != 0x197FD0u) { ctx->pc = 0x197FD0u; }
    }
    if (ctx->pc != 0x197FD0u) { return; }
    ctx->pc = 0x197FD0u;
    // 0x197fd0: 0x2e0202d
    ctx->pc = 0x197fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_197fd4:
    // 0x197fd4: 0x27c6000c
    ctx->pc = 0x197fd4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 30), 12));
    // 0x197fd8: 0xc0620ea
    ctx->pc = 0x197FD8u;
    SET_GPR_U32(ctx, 31, 0x197FE0u);
    ctx->pc = 0x197FDCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 8));
    ctx->pc = 0x1883A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_GetDctCnt_0x1883a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FE0u; }
        else if (ctx->pc != 0x197FE0u) { ctx->pc = 0x197FE0u; }
    }
    if (ctx->pc != 0x197FE0u) { return; }
    ctx->pc = 0x197FE0u;
    // 0x197fe0: 0x8ec60018
    ctx->pc = 0x197fe0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x197fe4: 0x260202d
    ctx->pc = 0x197fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197fe8: 0xc066e7a
    ctx->pc = 0x197FE8u;
    SET_GPR_U32(ctx, 31, 0x197FF0u);
    ctx->pc = 0x197FECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19B9E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPLY_AddDecPic_0x19b9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FF0u; }
        else if (ctx->pc != 0x197FF0u) { ctx->pc = 0x197FF0u; }
    }
    if (ctx->pc != 0x197FF0u) { return; }
    ctx->pc = 0x197FF0u;
    // 0x197ff0: 0x8fa20034
    ctx->pc = 0x197ff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x197ff4: 0x10000003
    ctx->pc = 0x197FF4u;
    {
        const bool branch_taken_0x197ff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197FF8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
        if (branch_taken_0x197ff4) {
            ctx->pc = 0x198004u;
            goto label_198004;
        }
    }
    ctx->pc = 0x197FFCu;
label_197ffc:
    // 0x197ffc: 0xc0663e6
    ctx->pc = 0x197FFCu;
    SET_GPR_U32(ctx, 31, 0x198004u);
    ctx->pc = 0x198000u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x198F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_FreeFrm_0x198f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198004u; }
        else if (ctx->pc != 0x198004u) { ctx->pc = 0x198004u; }
    }
    if (ctx->pc != 0x198004u) { return; }
    ctx->pc = 0x198004u;
label_198004:
    // 0x198004: 0x102d
    ctx->pc = 0x198004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198008:
    // 0x198008: 0xdfbf00d0
    ctx->pc = 0x198008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19800c: 0xdfbe00c0
    ctx->pc = 0x19800cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x198010: 0xdfb700b0
    ctx->pc = 0x198010u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x198014: 0xdfb600a0
    ctx->pc = 0x198014u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198018: 0xdfb50090
    ctx->pc = 0x198018u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19801c: 0xdfb40080
    ctx->pc = 0x19801cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x198020: 0xdfb30070
    ctx->pc = 0x198020u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x198024: 0xdfb20060
    ctx->pc = 0x198024u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198028: 0xdfb10050
    ctx->pc = 0x198028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19802c: 0xdfb00040
    ctx->pc = 0x19802cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198030: 0x3e00008
    ctx->pc = 0x198030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197F5Cu: goto label_197f5c;
            case 0x197FC8u: goto label_197fc8;
            case 0x197FD4u: goto label_197fd4;
            case 0x197FFCu: goto label_197ffc;
            case 0x198004u: goto label_198004;
            case 0x198008u: goto label_198008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198038u;
}
