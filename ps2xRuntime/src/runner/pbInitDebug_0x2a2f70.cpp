#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitDebug
// Address: 0x2a2f70 - 0x2a302c
void pbInitDebug_0x2a2f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a2f70u;

    // 0x2a2f70: 0x27bdffe0
    ctx->pc = 0x2a2f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a2f74: 0xffbf0010
    ctx->pc = 0x2a2f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a2f78: 0xffb00000
    ctx->pc = 0x2a2f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2f7c: 0x3c020036
    ctx->pc = 0x2a2f7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a2f80: 0x8c50dee0
    ctx->pc = 0x2a2f80u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a2f84: 0x3c030036
    ctx->pc = 0x2a2f84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a2f88: 0x24627d90
    ctx->pc = 0x2a2f88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 32144));
    // 0x2a2f8c: 0xae02002c
    ctx->pc = 0x2a2f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2a2f90: 0xc0a8c52
    ctx->pc = 0x2A2F90u;
    SET_GPR_U32(ctx, 31, 0x2A2F98u);
    ctx->pc = 0x2A2F94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32144), GPR_U32(ctx, 0));
    ctx->pc = 0x2A3148u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitLog_0x2a3148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2F98u; }
    }
    if (ctx->pc != 0x2A2F98u) { return; }
    ctx->pc = 0x2A2F98u;
    // 0x2a2f98: 0xc0a8d04
    ctx->pc = 0x2A2F98u;
    SET_GPR_U32(ctx, 31, 0x2A2FA0u);
    ctx->pc = 0x2A3410u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitLogVu1_0x2a3410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2FA0u; }
    }
    if (ctx->pc != 0x2A2FA0u) { return; }
    ctx->pc = 0x2A2FA0u;
    // 0x2a2fa0: 0x8e02002c
    ctx->pc = 0x2a2fa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a2fa4: 0xac40004c
    ctx->pc = 0x2a2fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x2a2fa8: 0x8e02002c
    ctx->pc = 0x2a2fa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a2fac: 0xac400044
    ctx->pc = 0x2a2facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x2a2fb0: 0x8e02002c
    ctx->pc = 0x2a2fb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a2fb4: 0xac400048
    ctx->pc = 0x2a2fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x2a2fb8: 0x8e02002c
    ctx->pc = 0x2a2fb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a2fbc: 0x2404ffff
    ctx->pc = 0x2a2fbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2fc0: 0xac440054
    ctx->pc = 0x2a2fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 4));
    // 0x2a2fc4: 0x8e02002c
    ctx->pc = 0x2a2fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a2fc8: 0xac400050
    ctx->pc = 0x2a2fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x2a2fcc: 0x8e02002c
    ctx->pc = 0x2a2fccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a2fd0: 0xac440058
    ctx->pc = 0x2a2fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 4));
    // 0x2a2fd4: 0x8e02002c
    ctx->pc = 0x2a2fd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a2fd8: 0xac44005c
    ctx->pc = 0x2a2fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 4));
    // 0x2a2fdc: 0x8e03002c
    ctx->pc = 0x2a2fdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a2fe0: 0x3c02ffff
    ctx->pc = 0x2a2fe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2a2fe4: 0x3442ffff
    ctx->pc = 0x2a2fe4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2a2fe8: 0xac620060
    ctx->pc = 0x2a2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x2a2fec: 0x8e02002c
    ctx->pc = 0x2a2fecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a2ff0: 0xac440064
    ctx->pc = 0x2a2ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
    // 0x2a2ff4: 0x8e02002c
    ctx->pc = 0x2a2ff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a2ff8: 0xac400068
    ctx->pc = 0x2a2ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x2a2ffc: 0x8e02002c
    ctx->pc = 0x2a2ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a3000: 0xac40006c
    ctx->pc = 0x2a3000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x2a3004: 0x8e02002c
    ctx->pc = 0x2a3004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a3008: 0xac400070
    ctx->pc = 0x2a3008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x2a300c: 0x8e02002c
    ctx->pc = 0x2a300cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a3010: 0xac400074
    ctx->pc = 0x2a3010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x2a3014: 0x8e02002c
    ctx->pc = 0x2a3014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a3018: 0xac400078
    ctx->pc = 0x2a3018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
    // 0x2a301c: 0xdfbf0010
    ctx->pc = 0x2a301cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3020: 0xdfb00000
    ctx->pc = 0x2a3020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3024: 0x3e00008
    ctx->pc = 0x2A3024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3028u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A302Cu;
}
