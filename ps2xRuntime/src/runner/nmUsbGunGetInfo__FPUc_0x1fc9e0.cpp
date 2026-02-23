#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nmUsbGunGetInfo__FPUc
// Address: 0x1fc9e0 - 0x1fca58
void nmUsbGunGetInfo__FPUc_0x1fc9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nmUsbGunGetInfo__FPUc");


    ctx->pc = 0x1fc9e0u;

    // 0x1fc9e0: 0x27bdffd0
    ctx->pc = 0x1fc9e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc9e4: 0x7fbf0020
    ctx->pc = 0x1fc9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fc9e8: 0x7fb00010
    ctx->pc = 0x1fc9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fc9ec: 0x70808628
    ctx->pc = 0x1fc9ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fc9f0: 0x3c020052
    ctx->pc = 0x1fc9f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fc9f4: 0xc055eee
    ctx->pc = 0x1FC9F4u;
    SET_GPR_U32(ctx, 31, 0x1FC9FCu);
    ctx->pc = 0x1FC9F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294939712));
    ctx->pc = 0x157BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCheckStatRpc_0x157bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC9FCu; }
        else if (ctx->pc != 0x1FC9FCu) { ctx->pc = 0x1FC9FCu; }
    }
    if (ctx->pc != 0x1FC9FCu) { return; }
    ctx->pc = 0x1FC9FCu;
    // 0x1fc9fc: 0x10400004
    ctx->pc = 0x1FC9FCu;
    {
        const bool branch_taken_0x1fc9fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fc9fc) {
            ctx->pc = 0x1FCA10u;
            goto label_1fca10;
        }
    }
    ctx->pc = 0x1FCA04u;
    // 0x1fca04: 0x3c020027
    ctx->pc = 0x1fca04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fca08: 0xc05114a
    ctx->pc = 0x1FCA08u;
    SET_GPR_U32(ctx, 31, 0x1FCA10u);
    ctx->pc = 0x1FCA0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954800));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA10u; }
        else if (ctx->pc != 0x1FCA10u) { ctx->pc = 0x1FCA10u; }
    }
    if (ctx->pc != 0x1FCA10u) { return; }
    ctx->pc = 0x1FCA10u;
label_1fca10:
    // 0x1fca10: 0x3c020052
    ctx->pc = 0x1fca10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fca14: 0x24479480
    ctx->pc = 0x1fca14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294939776));
    // 0x1fca18: 0x3c020052
    ctx->pc = 0x1fca18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fca1c: 0x24050001
    ctx->pc = 0x1fca1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fca20: 0x24080020
    ctx->pc = 0x1fca20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1fca24: 0x72004e28
    ctx->pc = 0x1fca24u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1fca28: 0x24449440
    ctx->pc = 0x1fca28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294939712));
    // 0x1fca2c: 0x70a03628
    ctx->pc = 0x1fca2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fca30: 0x71005628
    ctx->pc = 0x1fca30u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1fca34: 0x70005e28
    ctx->pc = 0x1fca34u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fca38: 0xc055e72
    ctx->pc = 0x1FCA38u;
    SET_GPR_U32(ctx, 31, 0x1FCA40u);
    ctx->pc = 0x1FCA3Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA40u; }
        else if (ctx->pc != 0x1FCA40u) { ctx->pc = 0x1FCA40u; }
    }
    if (ctx->pc != 0x1FCA40u) { return; }
    ctx->pc = 0x1FCA40u;
    // 0x1fca40: 0x50400001
    ctx->pc = 0x1FCA40u;
    {
        const bool branch_taken_0x1fca40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fca40) {
            ctx->pc = 0x1FCA44u;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1FCA48u;
            goto label_1fca48;
        }
    }
    ctx->pc = 0x1FCA48u;
label_1fca48:
    // 0x1fca48: 0x7bbf0020
    ctx->pc = 0x1fca48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fca4c: 0x7bb00010
    ctx->pc = 0x1fca4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fca50: 0x3e00008
    ctx->pc = 0x1FCA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCA54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCA10u: goto label_1fca10;
            case 0x1FCA48u: goto label_1fca48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FCA58u;
}
