#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getSaveFileName
// Address: 0x207a38 - 0x207ae0
void getSaveFileName_0x207a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207a38u;

    // 0x207a38: 0x27bdffd0
    ctx->pc = 0x207a38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207a3c: 0xffbf0020
    ctx->pc = 0x207a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x207a40: 0xffbe0010
    ctx->pc = 0x207a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x207a44: 0x3a0f02d
    ctx->pc = 0x207a44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a48: 0xafc40000
    ctx->pc = 0x207a48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x207a4c: 0xafc50004
    ctx->pc = 0x207a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x207a50: 0x8fc20004
    ctx->pc = 0x207a50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x207a54: 0x2403fffe
    ctx->pc = 0x207a54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x207a58: 0x14430008
    ctx->pc = 0x207A58u;
    {
        const bool branch_taken_0x207a58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x207a58) {
            ctx->pc = 0x207A7Cu;
            goto label_207a7c;
        }
    }
    ctx->pc = 0x207A60u;
    // 0x207a60: 0x8fc40000
    ctx->pc = 0x207a60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207a64: 0x3c05003a
    ctx->pc = 0x207a64u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x207a68: 0x24a54bf0
    ctx->pc = 0x207a68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19440));
    // 0x207a6c: 0xc0bf2c1
    ctx->pc = 0x207A6Cu;
    SET_GPR_U32(ctx, 31, 0x207A74u);
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A74u; }
    }
    if (ctx->pc != 0x207A74u) { return; }
    ctx->pc = 0x207A74u;
    // 0x207a74: 0x10000014
    ctx->pc = 0x207A74u;
    {
        const bool branch_taken_0x207a74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207a74) {
            ctx->pc = 0x207AC8u;
            goto label_207ac8;
        }
    }
    ctx->pc = 0x207A7Cu;
label_207a7c:
    // 0x207a7c: 0x8fc20004
    ctx->pc = 0x207a7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x207a80: 0x2403ffff
    ctx->pc = 0x207a80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207a84: 0x14430008
    ctx->pc = 0x207A84u;
    {
        const bool branch_taken_0x207a84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x207a84) {
            ctx->pc = 0x207AA8u;
            goto label_207aa8;
        }
    }
    ctx->pc = 0x207A8Cu;
    // 0x207a8c: 0x8fc40000
    ctx->pc = 0x207a8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207a90: 0x3c05003a
    ctx->pc = 0x207a90u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x207a94: 0x24a54c18
    ctx->pc = 0x207a94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19480));
    // 0x207a98: 0xc0bf2c1
    ctx->pc = 0x207A98u;
    SET_GPR_U32(ctx, 31, 0x207AA0u);
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207AA0u; }
    }
    if (ctx->pc != 0x207AA0u) { return; }
    ctx->pc = 0x207AA0u;
    // 0x207aa0: 0x10000009
    ctx->pc = 0x207AA0u;
    {
        const bool branch_taken_0x207aa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207aa0) {
            ctx->pc = 0x207AC8u;
            goto label_207ac8;
        }
    }
    ctx->pc = 0x207AA8u;
label_207aa8:
    // 0x207aa8: 0x8fc30004
    ctx->pc = 0x207aa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x207aac: 0x24620001
    ctx->pc = 0x207aacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x207ab0: 0x8fc40000
    ctx->pc = 0x207ab0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207ab4: 0x3c05003a
    ctx->pc = 0x207ab4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x207ab8: 0x24a54c40
    ctx->pc = 0x207ab8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19520));
    // 0x207abc: 0x40302d
    ctx->pc = 0x207abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ac0: 0xc0b6252
    ctx->pc = 0x207AC0u;
    SET_GPR_U32(ctx, 31, 0x207AC8u);
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207AC8u; }
    }
    if (ctx->pc != 0x207AC8u) { return; }
    ctx->pc = 0x207AC8u;
label_207ac8:
    // 0x207ac8: 0x3c0e82d
    ctx->pc = 0x207ac8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207acc: 0xdfbf0020
    ctx->pc = 0x207accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207ad0: 0xdfbe0010
    ctx->pc = 0x207ad0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207ad4: 0x27bd0030
    ctx->pc = 0x207ad4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x207ad8: 0x3e00008
    ctx->pc = 0x207AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207A7Cu: goto label_207a7c;
            case 0x207AA8u: goto label_207aa8;
            case 0x207AC8u: goto label_207ac8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207AE0u;
}
