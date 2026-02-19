#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _skipMB0
// Address: 0x2f19f8 - 0x2f1ac4
void _skipMB0_0x2f19f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f19f8u;

    // 0x2f19f8: 0x27bdffe0
    ctx->pc = 0x2f19f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f19fc: 0x3c02003a
    ctx->pc = 0x2f19fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f1a00: 0xffb00000
    ctx->pc = 0x2f1a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1a04: 0x24423638
    ctx->pc = 0x2f1a04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13880));
    // 0x2f1a08: 0xffbf0010
    ctx->pc = 0x2f1a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f1a0c: 0x24080140
    ctx->pc = 0x2f1a0cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2f1a10: 0x240b0001
    ctx->pc = 0x2f1a10u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1a14: 0x3c0c003a
    ctx->pc = 0x2f1a14u;
    SET_GPR_U32(ctx, 12, ((uint32_t)58 << 16));
    // 0x2f1a18: 0x8c430280
    ctx->pc = 0x2f1a18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x2f1a1c: 0x3c09003a
    ctx->pc = 0x2f1a1cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)58 << 16));
    // 0x2f1a20: 0x8d8a31bc
    ctx->pc = 0x2f1a20u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 12), 12732)));
    // 0x2f1a24: 0xe0802d
    ctx->pc = 0x2f1a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a28: 0x686818
    ctx->pc = 0x2f1a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f1a2c: 0xad2b327c
    ctx->pc = 0x2f1a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12924), GPR_U32(ctx, 11));
    // 0x2f1a30: 0x24070002
    ctx->pc = 0x2f1a30u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1a34: 0x1a21821
    ctx->pc = 0x2f1a34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2f1a38: 0x15470005
    ctx->pc = 0x2F1A38u;
    {
        const bool branch_taken_0x2f1a38 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 7));
        ctx->pc = 0x2F1A3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 11));
        if (branch_taken_0x2f1a38) {
            ctx->pc = 0x2F1A50u;
            goto label_2f1a50;
        }
    }
    ctx->pc = 0x2F1A40u;
    // 0x2f1a40: 0xac800000
    ctx->pc = 0x2f1a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2f1a44: 0xac800014
    ctx->pc = 0x2f1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2f1a48: 0xac800010
    ctx->pc = 0x2f1a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2f1a4c: 0xac800004
    ctx->pc = 0x2f1a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2f1a50:
    // 0x2f1a50: 0x3c04003a
    ctx->pc = 0x2f1a50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2f1a54: 0x24030003
    ctx->pc = 0x2f1a54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1a58: 0x8c8231ec
    ctx->pc = 0x2f1a58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12780)));
    // 0x2f1a5c: 0x54430003
    ctx->pc = 0x2F1A5Cu;
    {
        const bool branch_taken_0x2f1a5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2f1a5c) {
            ctx->pc = 0x2F1A60u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
            ctx->pc = 0x2F1A6Cu;
            goto label_2f1a6c;
        }
    }
    ctx->pc = 0x2F1A64u;
    // 0x2f1a64: 0x10000006
    ctx->pc = 0x2F1A64u;
    {
        const bool branch_taken_0x2f1a64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1A68u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        if (branch_taken_0x2f1a64) {
            ctx->pc = 0x2F1A80u;
            goto label_2f1a80;
        }
    }
    ctx->pc = 0x2F1A6Cu;
label_2f1a6c:
    // 0x2f1a6c: 0x8c8231ec
    ctx->pc = 0x2f1a6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12780)));
    // 0x2f1a70: 0x38420002
    ctx->pc = 0x2f1a70u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x2f1a74: 0x2c420001
    ctx->pc = 0x2f1a74u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x2f1a78: 0xacc20000
    ctx->pc = 0x2f1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2f1a7c: 0xacc20004
    ctx->pc = 0x2f1a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_2f1a80:
    // 0x2f1a80: 0x8d8331bc
    ctx->pc = 0x2f1a80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 12732)));
    // 0x2f1a84: 0x24020001
    ctx->pc = 0x2f1a84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1a88: 0x54620006
    ctx->pc = 0x2F1A88u;
    {
        const bool branch_taken_0x2f1a88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2f1a88) {
            ctx->pc = 0x2F1A8Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2F1AA4u;
            goto label_2f1aa4;
        }
    }
    ctx->pc = 0x2F1A90u;
    // 0x2f1a90: 0x3c04003c
    ctx->pc = 0x2f1a90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2f1a94: 0xc0bba56
    ctx->pc = 0x2F1A94u;
    SET_GPR_U32(ctx, 31, 0x2F1A9Cu);
    ctx->pc = 0x2F1A98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942816));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1A9Cu; }
    }
    if (ctx->pc != 0x2F1A9Cu) { return; }
    ctx->pc = 0x2F1A9Cu;
    // 0x2f1a9c: 0x582d
    ctx->pc = 0x2f1a9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1aa0: 0x8e030000
    ctx->pc = 0x2f1aa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f1aa4:
    // 0x2f1aa4: 0x2404fffe
    ctx->pc = 0x2f1aa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2f1aa8: 0xdfbf0010
    ctx->pc = 0x2f1aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1aac: 0x160102d
    ctx->pc = 0x2f1aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ab0: 0x641824
    ctx->pc = 0x2f1ab0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f1ab4: 0xae030000
    ctx->pc = 0x2f1ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2f1ab8: 0xdfb00000
    ctx->pc = 0x2f1ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1abc: 0x3e00008
    ctx->pc = 0x2F1ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1AC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F1A50u: goto label_2f1a50;
            case 0x2F1A6Cu: goto label_2f1a6c;
            case 0x2F1A80u: goto label_2f1a80;
            case 0x2F1AA4u: goto label_2f1aa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F1AC4u;
}
