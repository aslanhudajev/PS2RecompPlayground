#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DisplayMenu
// Address: 0x2169d8 - 0x216a80
void DisplayMenu_0x2169d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2169d8u;

    // 0x2169d8: 0x27bdff80
    ctx->pc = 0x2169d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2169dc: 0xffbf0070
    ctx->pc = 0x2169dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2169e0: 0xffb60060
    ctx->pc = 0x2169e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2169e4: 0xffb50050
    ctx->pc = 0x2169e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2169e8: 0xffb40040
    ctx->pc = 0x2169e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2169ec: 0xffb30030
    ctx->pc = 0x2169ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2169f0: 0xffb20020
    ctx->pc = 0x2169f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2169f4: 0xffb10010
    ctx->pc = 0x2169f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2169f8: 0xffb00000
    ctx->pc = 0x2169f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2169fc: 0x882d
    ctx->pc = 0x2169fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a00: 0x24160002
    ctx->pc = 0x216a00u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
    // 0x216a04: 0x802d
    ctx->pc = 0x216a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a08: 0x3c15003c
    ctx->pc = 0x216a08u;
    SET_GPR_U32(ctx, 21, ((uint32_t)60 << 16));
    // 0x216a0c: 0x3c1400ff
    ctx->pc = 0x216a0cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)255 << 16));
    // 0x216a10: 0x3694ff00
    ctx->pc = 0x216a10u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), 65280));
    // 0x216a14: 0x2413000c
    ctx->pc = 0x216a14u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 12));
    // 0x216a18: 0x3c020032
    ctx->pc = 0x216a18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x216a1c: 0x2452f890
    ctx->pc = 0x216a1cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294965392));
label_216a20:
    // 0x216a20: 0x8ea2cf34
    ctx->pc = 0x216a20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294954804)));
    // 0x216a24: 0x3c0400ff
    ctx->pc = 0x216a24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x216a28: 0x3484ffff
    ctx->pc = 0x216a28u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x216a2c: 0x2021026
    ctx->pc = 0x216a2cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x216a30: 0x282200a
    ctx->pc = 0x216a30u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 20));
    // 0x216a34: 0x220282d
    ctx->pc = 0x216a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a38: 0x2c0302d
    ctx->pc = 0x216a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a3c: 0x2131018
    ctx->pc = 0x216a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x216a40: 0xc0b4724
    ctx->pc = 0x216A40u;
    SET_GPR_U32(ctx, 31, 0x216A48u);
    ctx->pc = 0x216A44u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216A48u; }
    }
    if (ctx->pc != 0x216A48u) { return; }
    ctx->pc = 0x216A48u;
    // 0x216a48: 0x26100001
    ctx->pc = 0x216a48u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x216a4c: 0x2e020005
    ctx->pc = 0x216a4cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 5));
    // 0x216a50: 0x1440fff3
    ctx->pc = 0x216A50u;
    {
        const bool branch_taken_0x216a50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x216A54u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x216a50) {
            ctx->pc = 0x216A20u;
            goto label_216a20;
        }
    }
    ctx->pc = 0x216A58u;
    // 0x216a58: 0xdfbf0070
    ctx->pc = 0x216a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x216a5c: 0xdfb60060
    ctx->pc = 0x216a5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x216a60: 0xdfb50050
    ctx->pc = 0x216a60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216a64: 0xdfb40040
    ctx->pc = 0x216a64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216a68: 0xdfb30030
    ctx->pc = 0x216a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216a6c: 0xdfb20020
    ctx->pc = 0x216a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216a70: 0xdfb10010
    ctx->pc = 0x216a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216a74: 0xdfb00000
    ctx->pc = 0x216a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216a78: 0x3e00008
    ctx->pc = 0x216A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216A7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216A20u: goto label_216a20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216A80u;
}
