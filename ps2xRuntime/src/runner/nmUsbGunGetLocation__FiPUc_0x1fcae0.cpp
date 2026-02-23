#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nmUsbGunGetLocation__FiPUc
// Address: 0x1fcae0 - 0x1fcb60
void nmUsbGunGetLocation__FiPUc_0x1fcae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nmUsbGunGetLocation__FiPUc");


    ctx->pc = 0x1fcae0u;

    // 0x1fcae0: 0x27bdffd0
    ctx->pc = 0x1fcae0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fcae4: 0x7fbf0020
    ctx->pc = 0x1fcae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fcae8: 0x7fb00010
    ctx->pc = 0x1fcae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fcaec: 0x3c010052
    ctx->pc = 0x1fcaecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcaf0: 0xa0249480
    ctx->pc = 0x1fcaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939776), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fcaf4: 0x3c020052
    ctx->pc = 0x1fcaf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fcaf8: 0x70a08628
    ctx->pc = 0x1fcaf8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fcafc: 0xc055eee
    ctx->pc = 0x1FCAFCu;
    SET_GPR_U32(ctx, 31, 0x1FCB04u);
    ctx->pc = 0x1FCB00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294939712));
    ctx->pc = 0x157BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCheckStatRpc_0x157bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB04u; }
        else if (ctx->pc != 0x1FCB04u) { ctx->pc = 0x1FCB04u; }
    }
    if (ctx->pc != 0x1FCB04u) { return; }
    ctx->pc = 0x1FCB04u;
    // 0x1fcb04: 0x10400004
    ctx->pc = 0x1FCB04u;
    {
        const bool branch_taken_0x1fcb04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fcb04) {
            ctx->pc = 0x1FCB18u;
            goto label_1fcb18;
        }
    }
    ctx->pc = 0x1FCB0Cu;
    // 0x1fcb0c: 0x3c020027
    ctx->pc = 0x1fcb0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fcb10: 0xc05114a
    ctx->pc = 0x1FCB10u;
    SET_GPR_U32(ctx, 31, 0x1FCB18u);
    ctx->pc = 0x1FCB14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954864));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB18u; }
        else if (ctx->pc != 0x1FCB18u) { ctx->pc = 0x1FCB18u; }
    }
    if (ctx->pc != 0x1FCB18u) { return; }
    ctx->pc = 0x1FCB18u;
label_1fcb18:
    // 0x1fcb18: 0x3c020052
    ctx->pc = 0x1fcb18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fcb1c: 0x24479480
    ctx->pc = 0x1fcb1cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294939776));
    // 0x1fcb20: 0x3c020052
    ctx->pc = 0x1fcb20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fcb24: 0x24080020
    ctx->pc = 0x1fcb24u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1fcb28: 0x72004e28
    ctx->pc = 0x1fcb28u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1fcb2c: 0x24449440
    ctx->pc = 0x1fcb2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294939712));
    // 0x1fcb30: 0x24050003
    ctx->pc = 0x1fcb30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fcb34: 0x24060001
    ctx->pc = 0x1fcb34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcb38: 0x71005628
    ctx->pc = 0x1fcb38u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1fcb3c: 0x70005e28
    ctx->pc = 0x1fcb3cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fcb40: 0xc055e72
    ctx->pc = 0x1FCB40u;
    SET_GPR_U32(ctx, 31, 0x1FCB48u);
    ctx->pc = 0x1FCB44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB48u; }
        else if (ctx->pc != 0x1FCB48u) { ctx->pc = 0x1FCB48u; }
    }
    if (ctx->pc != 0x1FCB48u) { return; }
    ctx->pc = 0x1FCB48u;
    // 0x1fcb48: 0x50400001
    ctx->pc = 0x1FCB48u;
    {
        const bool branch_taken_0x1fcb48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fcb48) {
            ctx->pc = 0x1FCB4Cu;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1FCB50u;
            goto label_1fcb50;
        }
    }
    ctx->pc = 0x1FCB50u;
label_1fcb50:
    // 0x1fcb50: 0x7bbf0020
    ctx->pc = 0x1fcb50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcb54: 0x7bb00010
    ctx->pc = 0x1fcb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcb58: 0x3e00008
    ctx->pc = 0x1FCB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCB5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCB18u: goto label_1fcb18;
            case 0x1FCB50u: goto label_1fcb50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FCB60u;
}
