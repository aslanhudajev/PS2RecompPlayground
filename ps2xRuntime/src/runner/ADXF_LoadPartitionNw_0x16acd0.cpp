#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_LoadPartitionNw
// Address: 0x16acd0 - 0x16ae18
void ADXF_LoadPartitionNw_0x16acd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_LoadPartitionNw");


    ctx->pc = 0x16acd0u;

    // 0x16acd0: 0x27bdff90
    ctx->pc = 0x16acd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16acd4: 0xffb40040
    ctx->pc = 0x16acd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16acd8: 0xffb10010
    ctx->pc = 0x16acd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16acdc: 0xa0a02d
    ctx->pc = 0x16acdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ace0: 0xffb00000
    ctx->pc = 0x16ace0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ace4: 0xe0882d
    ctx->pc = 0x16ace4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ace8: 0x80802d
    ctx->pc = 0x16ace8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16acec: 0xffb50050
    ctx->pc = 0x16acecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x16acf0: 0xc0a82d
    ctx->pc = 0x16acf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16acf4: 0x220282d
    ctx->pc = 0x16acf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16acf8: 0xffbf0060
    ctx->pc = 0x16acf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x16acfc: 0xffb30030
    ctx->pc = 0x16acfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16ad00: 0xc05a97e
    ctx->pc = 0x16AD00u;
    SET_GPR_U32(ctx, 31, 0x16AD08u);
    ctx->pc = 0x16AD04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x16A5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_ChkPrmPt_0x16a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD08u; }
        else if (ctx->pc != 0x16AD08u) { ctx->pc = 0x16AD08u; }
    }
    if (ctx->pc != 0x16AD08u) { return; }
    ctx->pc = 0x16AD08u;
    // 0x16ad08: 0x440003a
    ctx->pc = 0x16AD08u;
    {
        const bool branch_taken_0x16ad08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16AD0Cu;
        SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
        if (branch_taken_0x16ad08) {
            ctx->pc = 0x16ADF4u;
            goto label_16adf4;
        }
    }
    ctx->pc = 0x16AD10u;
    // 0x16ad10: 0x8e42dd4c
    ctx->pc = 0x16ad10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294958412)));
    // 0x16ad14: 0x4400003
    ctx->pc = 0x16AD14u;
    {
        const bool branch_taken_0x16ad14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16AD18u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x16ad14) {
            ctx->pc = 0x16AD24u;
            goto label_16ad24;
        }
    }
    ctx->pc = 0x16AD1Cu;
    // 0x16ad1c: 0x10000009
    ctx->pc = 0x16AD1Cu;
    {
        const bool branch_taken_0x16ad1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AD20u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939192));
        if (branch_taken_0x16ad1c) {
            ctx->pc = 0x16AD44u;
            goto label_16ad44;
        }
    }
    ctx->pc = 0x16AD24u;
label_16ad24:
    // 0x16ad24: 0x280202d
    ctx->pc = 0x16ad24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad28: 0xc05ad72
    ctx->pc = 0x16AD28u;
    SET_GPR_U32(ctx, 31, 0x16AD30u);
    ctx->pc = 0x16AD2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Open_0x16b5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD30u; }
        else if (ctx->pc != 0x16AD30u) { ctx->pc = 0x16AD30u; }
    }
    if (ctx->pc != 0x16AD30u) { return; }
    ctx->pc = 0x16AD30u;
    // 0x16ad30: 0x3c130023
    ctx->pc = 0x16ad30u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x16ad34: 0x14400007
    ctx->pc = 0x16AD34u;
    {
        const bool branch_taken_0x16ad34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16AD38u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294958408), GPR_U32(ctx, 2));
        if (branch_taken_0x16ad34) {
            ctx->pc = 0x16AD54u;
            goto label_16ad54;
        }
    }
    ctx->pc = 0x16AD3Cu;
    // 0x16ad3c: 0x3c04002c
    ctx->pc = 0x16ad3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16ad40: 0x24849270
    ctx->pc = 0x16ad40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939248));
label_16ad44:
    // 0x16ad44: 0xc05a854
    ctx->pc = 0x16AD44u;
    SET_GPR_U32(ctx, 31, 0x16AD4Cu);
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD4Cu; }
        else if (ctx->pc != 0x16AD4Cu) { ctx->pc = 0x16AD4Cu; }
    }
    if (ctx->pc != 0x16AD4Cu) { return; }
    ctx->pc = 0x16AD4Cu;
    // 0x16ad4c: 0x10000029
    ctx->pc = 0x16AD4Cu;
    {
        const bool branch_taken_0x16ad4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AD50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x16ad4c) {
            ctx->pc = 0x16ADF4u;
            goto label_16adf4;
        }
    }
    ctx->pc = 0x16AD54u;
label_16ad54:
    // 0x16ad54: 0x3c020023
    ctx->pc = 0x16ad54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16ad58: 0xae50dd4c
    ctx->pc = 0x16ad58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294958412), GPR_U32(ctx, 16));
    // 0x16ad5c: 0xac40dd44
    ctx->pc = 0x16ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958404), GPR_U32(ctx, 0));
    // 0x16ad60: 0x220202d
    ctx->pc = 0x16ad60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad64: 0x282d
    ctx->pc = 0x16ad64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad68: 0xc050cfe
    ctx->pc = 0x16AD68u;
    SET_GPR_U32(ctx, 31, 0x16AD70u);
    ctx->pc = 0x16AD6Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 280));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD70u; }
        else if (ctx->pc != 0x16AD70u) { ctx->pc = 0x16AD70u; }
    }
    if (ctx->pc != 0x16AD70u) { return; }
    ctx->pc = 0x16AD70u;
    // 0x16ad70: 0x3c030023
    ctx->pc = 0x16ad70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16ad74: 0x101080
    ctx->pc = 0x16ad74u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x16ad78: 0x2463c918
    ctx->pc = 0x16ad78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953240));
    // 0x16ad7c: 0xae200000
    ctx->pc = 0x16ad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x16ad80: 0x431021
    ctx->pc = 0x16ad80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ad84: 0x280282d
    ctx->pc = 0x16ad84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad88: 0xac510000
    ctx->pc = 0x16ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x16ad8c: 0x26240010
    ctx->pc = 0x16ad8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    // 0x16ad90: 0xc05167c
    ctx->pc = 0x16AD90u;
    SET_GPR_U32(ctx, 31, 0x16AD98u);
    ctx->pc = 0x16AD94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1459F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x1459f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD98u; }
        else if (ctx->pc != 0x16AD98u) { ctx->pc = 0x16AD98u; }
    }
    if (ctx->pc != 0x16AD98u) { return; }
    ctx->pc = 0x16AD98u;
    // 0x16ad98: 0x3c02002e
    ctx->pc = 0x16ad98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x16ad9c: 0x3c03ffff
    ctx->pc = 0x16ad9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x16ada0: 0xa220000e
    ctx->pc = 0x16ada0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x16ada4: 0x3463ffc0
    ctx->pc = 0x16ada4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65472));
    // 0x16ada8: 0x2442cfe0
    ctx->pc = 0x16ada8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x16adac: 0x3c05002e
    ctx->pc = 0x16adacu;
    SET_GPR_U32(ctx, 5, ((uint32_t)46 << 16));
    // 0x16adb0: 0x431024
    ctx->pc = 0x16adb0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16adb4: 0xae350110
    ctx->pc = 0x16adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 21));
    // 0x16adb8: 0x3c03002e
    ctx->pc = 0x16adb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x16adbc: 0xaca2f0a0
    ctx->pc = 0x16adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963360), GPR_U32(ctx, 2));
    // 0x16adc0: 0x8e64dd48
    ctx->pc = 0x16adc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294958408)));
    // 0x16adc4: 0x40302d
    ctx->pc = 0x16adc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16adc8: 0xac62f0a4
    ctx->pc = 0x16adc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963364), GPR_U32(ctx, 2));
    // 0x16adcc: 0xc05aeba
    ctx->pc = 0x16ADCCu;
    SET_GPR_U32(ctx, 31, 0x16ADD4u);
    ctx->pc = 0x16ADD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADD4u; }
        else if (ctx->pc != 0x16ADD4u) { ctx->pc = 0x16ADD4u; }
    }
    if (ctx->pc != 0x16ADD4u) { return; }
    ctx->pc = 0x16ADD4u;
    // 0x16add4: 0x40802d
    ctx->pc = 0x16add4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16add8: 0x6030005
    ctx->pc = 0x16ADD8u;
    {
        const bool branch_taken_0x16add8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x16add8) {
            ctx->pc = 0x16ADDCu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->pc = 0x16ADF0u;
            goto label_16adf0;
        }
    }
    ctx->pc = 0x16ADE0u;
    // 0x16ade0: 0xc05ae0c
    ctx->pc = 0x16ADE0u;
    SET_GPR_U32(ctx, 31, 0x16ADE8u);
    ctx->pc = 0x16ADE4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294958408)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADE8u; }
        else if (ctx->pc != 0x16ADE8u) { ctx->pc = 0x16ADE8u; }
    }
    if (ctx->pc != 0x16ADE8u) { return; }
    ctx->pc = 0x16ADE8u;
    // 0x16ade8: 0x10000002
    ctx->pc = 0x16ADE8u;
    {
        const bool branch_taken_0x16ade8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16ADECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ade8) {
            ctx->pc = 0x16ADF4u;
            goto label_16adf4;
        }
    }
    ctx->pc = 0x16ADF0u;
label_16adf0:
    // 0x16adf0: 0x102d
    ctx->pc = 0x16adf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16adf4:
    // 0x16adf4: 0xdfbf0060
    ctx->pc = 0x16adf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16adf8: 0xdfb50050
    ctx->pc = 0x16adf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16adfc: 0xdfb40040
    ctx->pc = 0x16adfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16ae00: 0xdfb30030
    ctx->pc = 0x16ae00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ae04: 0xdfb20020
    ctx->pc = 0x16ae04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ae08: 0xdfb10010
    ctx->pc = 0x16ae08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ae0c: 0xdfb00000
    ctx->pc = 0x16ae0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ae10: 0x3e00008
    ctx->pc = 0x16AE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AD24u: goto label_16ad24;
            case 0x16AD44u: goto label_16ad44;
            case 0x16AD54u: goto label_16ad54;
            case 0x16ADF0u: goto label_16adf0;
            case 0x16ADF4u: goto label_16adf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16AE18u;
}
