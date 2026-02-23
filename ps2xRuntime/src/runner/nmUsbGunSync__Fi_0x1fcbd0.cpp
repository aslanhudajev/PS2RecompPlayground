#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nmUsbGunSync__Fi
// Address: 0x1fcbd0 - 0x1fcc44
void nmUsbGunSync__Fi_0x1fcbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nmUsbGunSync__Fi");


    ctx->pc = 0x1fcbd0u;

    // 0x1fcbd0: 0x27bdfff0
    ctx->pc = 0x1fcbd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fcbd4: 0x24020001
    ctx->pc = 0x1fcbd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcbd8: 0x10820014
    ctx->pc = 0x1FCBD8u;
    {
        const bool branch_taken_0x1fcbd8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1FCBDCu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1fcbd8) {
            ctx->pc = 0x1FCC2Cu;
            goto label_1fcc2c;
        }
    }
    ctx->pc = 0x1FCBE0u;
    // 0x1fcbe0: 0x10800003
    ctx->pc = 0x1FCBE0u;
    {
        const bool branch_taken_0x1fcbe0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FCBE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
        if (branch_taken_0x1fcbe0) {
            ctx->pc = 0x1FCBF0u;
            goto label_1fcbf0;
        }
    }
    ctx->pc = 0x1FCBE8u;
    // 0x1fcbe8: 0x10000013
    ctx->pc = 0x1FCBE8u;
    {
        const bool branch_taken_0x1fcbe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FCBECu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fcbe8) {
            ctx->pc = 0x1FCC38u;
            goto label_1fcc38;
        }
    }
    ctx->pc = 0x1FCBF0u;
label_1fcbf0:
    // 0x1fcbf0: 0xc055eee
    ctx->pc = 0x1FCBF0u;
    SET_GPR_U32(ctx, 31, 0x1FCBF8u);
    ctx->pc = 0x1FCBF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294939712));
    ctx->pc = 0x157BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCheckStatRpc_0x157bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCBF8u; }
        else if (ctx->pc != 0x1FCBF8u) { ctx->pc = 0x1FCBF8u; }
    }
    if (ctx->pc != 0x1FCBF8u) { return; }
    ctx->pc = 0x1FCBF8u;
    // 0x1fcbf8: 0x1040000a
    ctx->pc = 0x1FCBF8u;
    {
        const bool branch_taken_0x1fcbf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FCBFCu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fcbf8) {
            ctx->pc = 0x1FCC24u;
            goto label_1fcc24;
        }
    }
    ctx->pc = 0x1FCC00u;
label_1fcc00:
    // 0x1fcc00: 0x3c020052
    ctx->pc = 0x1fcc00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fcc04: 0xc055eee
    ctx->pc = 0x1FCC04u;
    SET_GPR_U32(ctx, 31, 0x1FCC0Cu);
    ctx->pc = 0x1FCC08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294939712));
    ctx->pc = 0x157BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCheckStatRpc_0x157bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC0Cu; }
        else if (ctx->pc != 0x1FCC0Cu) { ctx->pc = 0x1FCC0Cu; }
    }
    if (ctx->pc != 0x1FCC0Cu) { return; }
    ctx->pc = 0x1FCC0Cu;
    // 0x1fcc0c: 0x0
    ctx->pc = 0x1fcc0cu;
    // NOP
    // 0x1fcc10: 0x0
    ctx->pc = 0x1fcc10u;
    // NOP
    // 0x1fcc14: 0x1440fffa
    ctx->pc = 0x1FCC14u;
    {
        const bool branch_taken_0x1fcc14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fcc14) {
            ctx->pc = 0x1FCC00u;
            goto label_1fcc00;
        }
    }
    ctx->pc = 0x1FCC1Cu;
    // 0x1fcc1c: 0x0
    ctx->pc = 0x1fcc1cu;
    // NOP
    // 0x1fcc20: 0x70001628
    ctx->pc = 0x1fcc20u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1fcc24:
    // 0x1fcc24: 0x10000005
    ctx->pc = 0x1FCC24u;
    {
        const bool branch_taken_0x1fcc24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FCC28u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1fcc24) {
            ctx->pc = 0x1FCC3Cu;
            goto label_1fcc3c;
        }
    }
    ctx->pc = 0x1FCC2Cu;
label_1fcc2c:
    // 0x1fcc2c: 0x3c020052
    ctx->pc = 0x1fcc2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fcc30: 0xc055eee
    ctx->pc = 0x1FCC30u;
    SET_GPR_U32(ctx, 31, 0x1FCC38u);
    ctx->pc = 0x1FCC34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294939712));
    ctx->pc = 0x157BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCheckStatRpc_0x157bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC38u; }
        else if (ctx->pc != 0x1FCC38u) { ctx->pc = 0x1FCC38u; }
    }
    if (ctx->pc != 0x1FCC38u) { return; }
    ctx->pc = 0x1FCC38u;
label_1fcc38:
    // 0x1fcc38: 0x7bbf0000
    ctx->pc = 0x1fcc38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fcc3c:
    // 0x1fcc3c: 0x3e00008
    ctx->pc = 0x1FCC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCC40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCBF0u: goto label_1fcbf0;
            case 0x1FCC00u: goto label_1fcc00;
            case 0x1FCC24u: goto label_1fcc24;
            case 0x1FCC2Cu: goto label_1fcc2c;
            case 0x1FCC38u: goto label_1fcc38;
            case 0x1FCC3Cu: goto label_1fcc3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FCC44u;
}
