#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_DecodeHeader
// Address: 0x167ec8 - 0x167fc0
void ADXB_DecodeHeader_0x167ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_DecodeHeader");


    ctx->pc = 0x167ec8u;

    // 0x167ec8: 0x27bdffc0
    ctx->pc = 0x167ec8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167ecc: 0xffb20020
    ctx->pc = 0x167eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x167ed0: 0xffb10010
    ctx->pc = 0x167ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x167ed4: 0xffb00000
    ctx->pc = 0x167ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167ed8: 0x80882d
    ctx->pc = 0x167ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167edc: 0xffbf0030
    ctx->pc = 0x167edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x167ee0: 0xa0802d
    ctx->pc = 0x167ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ee4: 0x34048000
    ctx->pc = 0x167ee4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
    // 0x167ee8: 0x96020000
    ctx->pc = 0x167ee8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167eec: 0x21a00
    ctx->pc = 0x167eecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x167ef0: 0x21202
    ctx->pc = 0x167ef0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x167ef4: 0x431025
    ctx->pc = 0x167ef4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167ef8: 0x3042ffff
    ctx->pc = 0x167ef8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x167efc: 0x14440005
    ctx->pc = 0x167EFCu;
    {
        const bool branch_taken_0x167efc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x167F00u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167efc) {
            ctx->pc = 0x167F14u;
            goto label_167f14;
        }
    }
    ctx->pc = 0x167F04u;
    // 0x167f04: 0xc059f4c
    ctx->pc = 0x167F04u;
    SET_GPR_U32(ctx, 31, 0x167F0Cu);
    ctx->pc = 0x167F08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_DecodeHeaderAdx_0x167d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F0Cu; }
        else if (ctx->pc != 0x167F0Cu) { ctx->pc = 0x167F0Cu; }
    }
    if (ctx->pc != 0x167F0Cu) { return; }
    ctx->pc = 0x167F0Cu;
    // 0x167f0c: 0x10000027
    ctx->pc = 0x167F0Cu;
    {
        const bool branch_taken_0x167f0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167F10u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x167f0c) {
            ctx->pc = 0x167FACu;
            goto label_167fac;
        }
    }
    ctx->pc = 0x167F14u;
label_167f14:
    // 0x167f14: 0xc05a2ae
    ctx->pc = 0x167F14u;
    SET_GPR_U32(ctx, 31, 0x167F1Cu);
    ctx->pc = 0x167F18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_CheckSpsd_0x168ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F1Cu; }
        else if (ctx->pc != 0x167F1Cu) { ctx->pc = 0x167F1Cu; }
    }
    if (ctx->pc != 0x167F1Cu) { return; }
    ctx->pc = 0x167F1Cu;
    // 0x167f1c: 0x10400006
    ctx->pc = 0x167F1Cu;
    {
        const bool branch_taken_0x167f1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x167F20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167f1c) {
            ctx->pc = 0x167F38u;
            goto label_167f38;
        }
    }
    ctx->pc = 0x167F24u;
    // 0x167f24: 0x200282d
    ctx->pc = 0x167f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f28: 0xc05a210
    ctx->pc = 0x167F28u;
    SET_GPR_U32(ctx, 31, 0x167F30u);
    ctx->pc = 0x167F2Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168840u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_DecodeHeaderSpsd_0x168840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F30u; }
        else if (ctx->pc != 0x167F30u) { ctx->pc = 0x167F30u; }
    }
    if (ctx->pc != 0x167F30u) { return; }
    ctx->pc = 0x167F30u;
    // 0x167f30: 0x1000001e
    ctx->pc = 0x167F30u;
    {
        const bool branch_taken_0x167f30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167F34u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x167f30) {
            ctx->pc = 0x167FACu;
            goto label_167fac;
        }
    }
    ctx->pc = 0x167F38u;
label_167f38:
    // 0x167f38: 0xc05a4ba
    ctx->pc = 0x167F38u;
    SET_GPR_U32(ctx, 31, 0x167F40u);
    ctx->pc = 0x167F3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1692E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_CheckWav_0x1692e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F40u; }
        else if (ctx->pc != 0x167F40u) { ctx->pc = 0x167F40u; }
    }
    if (ctx->pc != 0x167F40u) { return; }
    ctx->pc = 0x167F40u;
    // 0x167f40: 0x10400006
    ctx->pc = 0x167F40u;
    {
        const bool branch_taken_0x167f40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x167F44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167f40) {
            ctx->pc = 0x167F5Cu;
            goto label_167f5c;
        }
    }
    ctx->pc = 0x167F48u;
    // 0x167f48: 0x200282d
    ctx->pc = 0x167f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f4c: 0xc05a354
    ctx->pc = 0x167F4Cu;
    SET_GPR_U32(ctx, 31, 0x167F54u);
    ctx->pc = 0x167F50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_DecodeHeaderWav_0x168d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F54u; }
        else if (ctx->pc != 0x167F54u) { ctx->pc = 0x167F54u; }
    }
    if (ctx->pc != 0x167F54u) { return; }
    ctx->pc = 0x167F54u;
    // 0x167f54: 0x10000015
    ctx->pc = 0x167F54u;
    {
        const bool branch_taken_0x167f54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167F58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x167f54) {
            ctx->pc = 0x167FACu;
            goto label_167fac;
        }
    }
    ctx->pc = 0x167F5Cu;
label_167f5c:
    // 0x167f5c: 0xc059ad6
    ctx->pc = 0x167F5Cu;
    SET_GPR_U32(ctx, 31, 0x167F64u);
    ctx->pc = 0x167F60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_CheckAiff_0x166b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F64u; }
        else if (ctx->pc != 0x167F64u) { ctx->pc = 0x167F64u; }
    }
    if (ctx->pc != 0x167F64u) { return; }
    ctx->pc = 0x167F64u;
    // 0x167f64: 0x10400006
    ctx->pc = 0x167F64u;
    {
        const bool branch_taken_0x167f64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x167F68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167f64) {
            ctx->pc = 0x167F80u;
            goto label_167f80;
        }
    }
    ctx->pc = 0x167F6Cu;
    // 0x167f6c: 0x200282d
    ctx->pc = 0x167f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f70: 0xc059b30
    ctx->pc = 0x167F70u;
    SET_GPR_U32(ctx, 31, 0x167F78u);
    ctx->pc = 0x167F74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_DecodeHeaderAiff_0x166cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F78u; }
        else if (ctx->pc != 0x167F78u) { ctx->pc = 0x167F78u; }
    }
    if (ctx->pc != 0x167F78u) { return; }
    ctx->pc = 0x167F78u;
    // 0x167f78: 0x1000000c
    ctx->pc = 0x167F78u;
    {
        const bool branch_taken_0x167f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167F7Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x167f78) {
            ctx->pc = 0x167FACu;
            goto label_167fac;
        }
    }
    ctx->pc = 0x167F80u;
label_167f80:
    // 0x167f80: 0xc059d06
    ctx->pc = 0x167F80u;
    SET_GPR_U32(ctx, 31, 0x167F88u);
    ctx->pc = 0x167F84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167418u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_CheckAu_0x167418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F88u; }
        else if (ctx->pc != 0x167F88u) { ctx->pc = 0x167F88u; }
    }
    if (ctx->pc != 0x167F88u) { return; }
    ctx->pc = 0x167F88u;
    // 0x167f88: 0x10400006
    ctx->pc = 0x167F88u;
    {
        const bool branch_taken_0x167f88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x167F8Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167f88) {
            ctx->pc = 0x167FA4u;
            goto label_167fa4;
        }
    }
    ctx->pc = 0x167F90u;
    // 0x167f90: 0x200282d
    ctx->pc = 0x167f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f94: 0xc059d60
    ctx->pc = 0x167F94u;
    SET_GPR_U32(ctx, 31, 0x167F9Cu);
    ctx->pc = 0x167F98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167580u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_DecodeHeaderAu_0x167580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F9Cu; }
        else if (ctx->pc != 0x167F9Cu) { ctx->pc = 0x167F9Cu; }
    }
    if (ctx->pc != 0x167F9Cu) { return; }
    ctx->pc = 0x167F9Cu;
    // 0x167f9c: 0x10000003
    ctx->pc = 0x167F9Cu;
    {
        const bool branch_taken_0x167f9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167FA0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x167f9c) {
            ctx->pc = 0x167FACu;
            goto label_167fac;
        }
    }
    ctx->pc = 0x167FA4u;
label_167fa4:
    // 0x167fa4: 0x102d
    ctx->pc = 0x167fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fa8: 0xdfbf0030
    ctx->pc = 0x167fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_167fac:
    // 0x167fac: 0xdfb20020
    ctx->pc = 0x167facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167fb0: 0xdfb10010
    ctx->pc = 0x167fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167fb4: 0xdfb00000
    ctx->pc = 0x167fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167fb8: 0x3e00008
    ctx->pc = 0x167FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167FBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167F14u: goto label_167f14;
            case 0x167F38u: goto label_167f38;
            case 0x167F5Cu: goto label_167f5c;
            case 0x167F80u: goto label_167f80;
            case 0x167FA4u: goto label_167fa4;
            case 0x167FACu: goto label_167fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167FC0u;
}
