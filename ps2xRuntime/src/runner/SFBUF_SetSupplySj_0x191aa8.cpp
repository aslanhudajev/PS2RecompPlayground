#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_SetSupplySj
// Address: 0x191aa8 - 0x191b40
void SFBUF_SetSupplySj_0x191aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_SetSupplySj");


    ctx->pc = 0x191aa8u;

    // 0x191aa8: 0x27bdffd0
    ctx->pc = 0x191aa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191aac: 0xffb10010
    ctx->pc = 0x191aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x191ab0: 0xffb00000
    ctx->pc = 0x191ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x191ab4: 0xa0882d
    ctx->pc = 0x191ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ab8: 0x80802d
    ctx->pc = 0x191ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191abc: 0xffbf0020
    ctx->pc = 0x191abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x191ac0: 0xc0646d0
    ctx->pc = 0x191AC0u;
    SET_GPR_U32(ctx, 31, 0x191AC8u);
    ctx->pc = 0x191AC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_ChkSupSj_0x191b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AC8u; }
        else if (ctx->pc != 0x191AC8u) { ctx->pc = 0x191AC8u; }
    }
    if (ctx->pc != 0x191AC8u) { return; }
    ctx->pc = 0x191AC8u;
    // 0x191ac8: 0x10400006
    ctx->pc = 0x191AC8u;
    {
        const bool branch_taken_0x191ac8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x191ACCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191ac8) {
            ctx->pc = 0x191AE4u;
            goto label_191ae4;
        }
    }
    ctx->pc = 0x191AD0u;
    // 0x191ad0: 0x3c05ff00
    ctx->pc = 0x191ad0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x191ad4: 0xc064ea0
    ctx->pc = 0x191AD4u;
    SET_GPR_U32(ctx, 31, 0x191ADCu);
    ctx->pc = 0x191AD8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1032));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191ADCu; }
        else if (ctx->pc != 0x191ADCu) { ctx->pc = 0x191ADCu; }
    }
    if (ctx->pc != 0x191ADCu) { return; }
    ctx->pc = 0x191ADCu;
    // 0x191adc: 0x10000014
    ctx->pc = 0x191ADCu;
    {
        const bool branch_taken_0x191adc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x191AE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x191adc) {
            ctx->pc = 0x191B30u;
            goto label_191b30;
        }
    }
    ctx->pc = 0x191AE4u;
label_191ae4:
    // 0x191ae4: 0xc067cf6
    ctx->pc = 0x191AE4u;
    SET_GPR_U32(ctx, 31, 0x191AECu);
    ctx->pc = 0x191AE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19F3D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_IsSetup_0x19f3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AECu; }
        else if (ctx->pc != 0x191AECu) { ctx->pc = 0x191AECu; }
    }
    if (ctx->pc != 0x191AECu) { return; }
    ctx->pc = 0x191AECu;
    // 0x191aec: 0x1440000c
    ctx->pc = 0x191AECu;
    {
        const bool branch_taken_0x191aec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x191AF0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191aec) {
            ctx->pc = 0x191B20u;
            goto label_191b20;
        }
    }
    ctx->pc = 0x191AF4u;
    // 0x191af4: 0x200202d
    ctx->pc = 0x191af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191af8: 0xc067cf6
    ctx->pc = 0x191AF8u;
    SET_GPR_U32(ctx, 31, 0x191B00u);
    ctx->pc = 0x191AFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19F3D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_IsSetup_0x19f3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B00u; }
        else if (ctx->pc != 0x191B00u) { ctx->pc = 0x191B00u; }
    }
    if (ctx->pc != 0x191B00u) { return; }
    ctx->pc = 0x191B00u;
    // 0x191b00: 0x14400007
    ctx->pc = 0x191B00u;
    {
        const bool branch_taken_0x191b00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x191B04u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x191b00) {
            ctx->pc = 0x191B20u;
            goto label_191b20;
        }
    }
    ctx->pc = 0x191B08u;
    // 0x191b08: 0x200202d
    ctx->pc = 0x191b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191b0c: 0xc067cf6
    ctx->pc = 0x191B0Cu;
    SET_GPR_U32(ctx, 31, 0x191B14u);
    ctx->pc = 0x191B10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x19F3D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_IsSetup_0x19f3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B14u; }
        else if (ctx->pc != 0x191B14u) { ctx->pc = 0x191B14u; }
    }
    if (ctx->pc != 0x191B14u) { return; }
    ctx->pc = 0x191B14u;
    // 0x191b14: 0x24030002
    ctx->pc = 0x191b14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x191b18: 0x302d
    ctx->pc = 0x191b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191b1c: 0x62300b
    ctx->pc = 0x191b1cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_191b20:
    // 0x191b20: 0x200202d
    ctx->pc = 0x191b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191b24: 0xc0646e6
    ctx->pc = 0x191B24u;
    SET_GPR_U32(ctx, 31, 0x191B2Cu);
    ctx->pc = 0x191B28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191B98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_SetSupplySjSub_0x191b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B2Cu; }
        else if (ctx->pc != 0x191B2Cu) { ctx->pc = 0x191B2Cu; }
    }
    if (ctx->pc != 0x191B2Cu) { return; }
    ctx->pc = 0x191B2Cu;
    // 0x191b2c: 0xdfbf0020
    ctx->pc = 0x191b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_191b30:
    // 0x191b30: 0xdfb10010
    ctx->pc = 0x191b30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191b34: 0xdfb00000
    ctx->pc = 0x191b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191b38: 0x3e00008
    ctx->pc = 0x191B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191B3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191AE4u: goto label_191ae4;
            case 0x191B20u: goto label_191b20;
            case 0x191B30u: goto label_191b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191B40u;
}
